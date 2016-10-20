#ifndef _LIST_
#define _LIST_

struct List {
	int data;
	List *next;
};

void Add(List** list, int a); //добавление элемента в конец
#endif