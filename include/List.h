#ifndef _LIST_H_
#define _LIST_H_

struct List {
  int data;
  List *next;
};

void Add(List** list, int a);  // ���������� �������� � �����
#endif  // _LIST_H_
