#include "shard/Shard0031.h"

extern "C" {

extern ListNode *FUN_00307dfe(void);

/* Gives the list its sentinel node, linked to itself (an empty list). */
void listInitEmpty2(ListOwner *owner)
{
    ListNode *sentinel = FUN_00307dfe();

    owner->list.sentinel = sentinel;
    sentinel->next = sentinel;
    owner->list.sentinel->prev = owner->list.sentinel;
}

} /* extern "C" */
