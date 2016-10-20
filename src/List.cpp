#include "List.h"

void Add(List** list, int a) {
	if ((*list) == 0) {
		(*list) = new List;
		(*list)->data = a;
		(*list)->next = 0;
	}
	else
	{
		List* p = *list;
		while (p->next != 0)
			p = p->next;
		List *newlist = new List;
		newlist->data = a;
		newlist->next = 0;
		p->next = newlist;
	}
}


