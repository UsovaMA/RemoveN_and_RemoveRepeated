#include "remove_N.h"
#include <gtest/gtest.h>

TEST(remove_N, can_delete_first_element_by_the_end) {
  List* p = 0;
  for (int i = 0; i < 10; i++) {
    Add(&p, i);
  }
  List* pp = 0;
  for (int i = 0; i < 8; i++) {  // 0 1 2 .. 7 9
    Add(&pp, i);
  }
  Add(&pp, 9);
  remove_N(&p, 2);

  for (int i = 0; i < 9; i++) {
    EXPECT_EQ(p->data, pp->data);
    p = p->next;
    pp = pp->next;
  }
}

TEST(remove_N, can_delete_single_element) {
  List* p = 0;
  Add(&p, 1);
  remove_N(&p, 1);

  EXPECT_EQ(0, p);
}

TEST(remove_N, throws_when_list_is_empty) {
  List* p = 0;
  ASSERT_ANY_THROW(remove_N(&p, 1););
}

TEST(remove_N, throws_when_delete_nonexistent_element) {
  List* p = 0;
  for (int i = 0; i < 10; i++) {
    Add(&p, i);
  }
  ASSERT_ANY_THROW(remove_N(&p, 12););
}
