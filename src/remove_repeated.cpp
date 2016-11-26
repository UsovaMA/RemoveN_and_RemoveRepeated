#include "remove_repeated.h"

void remove_repeated(List** list) {
  if ((*list) == 0) {
    throw 1;  // исключение, если лист пуст
  } else {
    List* p = *list;
    while (p->next != 0) {
      while (p->data == p->next->data) {
        p->next = p->next->next;
        if (p->next == 0) break;
      }
      if (p->next == 0)
        break;
      else
        p = p->next;
    }
  }
}
