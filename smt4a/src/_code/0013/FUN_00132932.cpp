/* NON_MATCHING: register allocation only: retail keeps result/list/pos in r4/r5/r6 and the next node in r7, comparing `cmp end, node`; the build assigns r7/r4/r5, r6 and compares the other way round. */
#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ struct ListNode *next;
    /* 0x04 */ struct ListNode *prev;
    /* 0x08 */ u8 payload[1];
} ListNode;

typedef struct NodeList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ListNode *freeList;     /* erased nodes, linked through next */
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ ListNode *end;
    /* 0x14 */ s32 size;
} NodeList;

extern int FUN_002fdafa(void *payload);

/* Unlinks the node `*pos` from the list, destroys its payload, puts it on the free list and stores the following node in *result (the end node when `pos` is the end). */
void FUN_00132932(ListNode **result, NodeList *list, ListNode **pos)
{
    ListNode *node = *pos;
    ListNode *next;

    if (node == list->end) {
        *result = list->end;
        return;
    }
    next = node->next;
    node->prev->next = node->next;
    (*pos)->next->prev = (*pos)->prev;
    list->size--;
    FUN_002fdafa((*pos)->payload);
    node = *pos;
    node->next = list->freeList;
    list->freeList = node;
    *result = next;
}

} /* extern "C" */
