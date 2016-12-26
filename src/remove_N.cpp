#include "remove_N.h"
#include <stdexcept>

void remove_N(List** list, int N) {
  if ((*list) == 0) {
    throw std::logic_error("List is empty\n");  // исключение, вызываемое при пустом списке
  } else {
    int size = 1;  // число элементов списка
    List *p = *list;
    while (p->next != 0) {
      p = p->next;
      size++;
    }
    if (size >= N) {  // проверка, есть ли элемент с искомым номером
      int j = size - N, f = 0;
      if (j > 0) {
        p = *list;
        while (f != j - 1) {
          p = p->next;
          f++;
        }
        p->next = p->next->next;
      } else {
        (*list) = (*list)->next;
      }
    } else {
      throw std::logic_error("This element doesn't exist\n");;
    }  // исключение, если удаляемого элемента нет
  }
}
