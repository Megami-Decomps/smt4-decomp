/* NON_MATCHING: register allocation only: retail keeps result/list/pos in r4/r5/r6 and loads the node's link pair with `ldmia r0!, {r1, r2}` (no tail sharing: both returns store and pop separately); the build assigns r6/r4/r5 and shares the final store. */
#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ struct ListNode *next;
    /* 0x04 */ struct ListNode *prev;
} ListNode;

typedef struct NodeList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ListNode *freeList;     /* erased nodes, linked through next */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ ListNode *end;
    /* 0x14 */ s32 size;
} NodeList;

extern int wordRefsEqual_001321a2(ListNode **a, ListNode **b);

/* Unlinks the node `*pos` from the list, puts it on the free list and stores the following node in *result (the end node when `pos` is the end). */
void FUN_00132e98(ListNode **result, NodeList *list, ListNode **pos)
{
    ListNode *end = list->end;
    ListNode *next;
    ListNode *node;

    if (wordRefsEqual_001321a2(pos, &end) != 0) {
        *result = list->end;
        return;
    }
    (*pos)->prev->next = next = (*pos)->next;
    (*pos)->next->prev = (*pos)->prev;
    list->size--;
    node = *pos;
    node->next = list->freeList;
    list->freeList = node;
    *result = next;
}

} /* extern "C" */
