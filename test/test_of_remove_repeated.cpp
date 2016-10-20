#include "remove_repeated.h"
#include <gtest/gtest.h>

TEST(remove_repeated, can_delete_repeated_element) {
	List* p=0;
	List* pp=0;
	for (int i=0; i<10; i++) { // 0 0 1 1 2 2 .. 9 9
		Add(&p,i);			   // 0 1 2 3 4 .. 9
		Add(&p,i);
		Add(&pp, i);
	}
	remove_repeated (&p);

	for (int i=0; i<10; i++) {
		EXPECT_EQ(p->data, pp->data);
		p=p->next;
		pp=pp->next;
	}
}

TEST(remove_repeated, dont_delete_if_all_elements_not_repeated) {
	List* p=0;
	List* pp=0;
	for (int i=0; i<10; i++) {
		Add(&p, i);
		Add(&pp, i);
	};
	remove_repeated(&p);

	for (int i=0; i<10; i++)
	{
		EXPECT_EQ(p->data, pp->data);
		p=p->next;
		pp=pp->next;
	}
}

TEST(remove_repeated, throw_when_list_is_empty) {
	List* p=0;
	ASSERT_ANY_THROW(remove_repeated(&p));
}