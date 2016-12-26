#ifndef _LIST_H_
#define _LIST_H_

struct List {
  int data;
  List *next;
};

void Add(List** list, int a);  // добавление элемента в конец
#endif  // _LIST_H_
