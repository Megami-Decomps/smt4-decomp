/* NON_MATCHING: retail uses mov r4, r0 where the compiled block uses mov r4, r1. */
#include "shard/W6_W6Match3_PooledNodeList.h"

extern "C" {
s32 wordRefsEqual_00132182(PooledListNode** left, PooledListNode** right);

void FUN_00132c98(PooledListNode** result, PooledNodeList* list, PooledListNode** position)
{
    PooledListNode* end = list->end;
    if (wordRefsEqual_00132182(position, &end) != 0) {
        *result = list->end;
    } else {
        PooledListNode* successor = (*position)->next;
        (*position)->prev->next = successor;
        (*position)->next->prev = (*position)->prev;
        --list->count;

        PooledListNode* removed = *position;
        removed->next = list->freeHead;
        list->freeHead = removed;
        *result = successor;
    }
}
}
