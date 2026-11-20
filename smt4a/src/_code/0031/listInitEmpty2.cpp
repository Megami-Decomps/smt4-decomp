#include "shard/Shard0031.h"

extern "C" {

extern ListNode *listAllocateSentinelNode2(void);

/* Gives the list its sentinel node, linked to itself (an empty list). */
void listInitEmpty2(ListOwner *owner)
{
    ListNode *sentinel = listAllocateSentinelNode2();

    owner->list.sentinel = sentinel;
    sentinel->next = sentinel;
    owner->list.sentinel->prev = owner->list.sentinel;
}

} /* extern "C" */
