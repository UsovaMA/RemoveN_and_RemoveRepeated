#include "remove_N.h"

void remove_N(List** list, int N) {
	if ((*list)==0)
		throw 1; // исключение, вызываемое при пустом списке
	else {
		int size=1; // число элементов списка
		List *p=*list;
		while (p->next!=0) {
			p=p->next;
			size++;
		} 
		if (size>=N) // проверка, есть ли элемент с искомым номером
		{
			int j=size-N, f=0;
			if (j>0) {
				p = *list;
				while (f!=j-1) {
					p=p->next;
					f++;
				}
				p->next=p->next->next; 
			}
			else
				(*list)=(*list)->next;
		}
		else
			throw 2; // исключение, если удаляемого элемента нет
	}
}
