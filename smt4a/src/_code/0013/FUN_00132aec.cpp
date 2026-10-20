/* NON_MATCHING: register allocation only: retail keeps the new node in r1 and loads the value into r2 (built keeps the node in r0) */
#include "common.h"

extern "C" {

/* Doubly linked list node (a circular list with a sentinel); `value` is the payload. */
typedef struct ListNode {
    /* 0x00 */ struct ListNode *next;
    /* 0x04 */ struct ListNode *prev;
    /* 0x08 */ u32 value;
} ListNode;

typedef struct ListObject {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ListNode *sentinel;
    /* 0x14 */ s32 count;
} ListObject;

ListNode *poolAllocElement12(ListObject *list, u32 arg);

/* Inserts a node holding *value before the sentinel (at the tail) and counts it. */
void FUN_00132aec(ListObject *list, const u32 *value)
{
    ListNode *sentinel = list->sentinel;
    ListNode *node = poolAllocElement12(list, 0);

    node->next = sentinel;
    node->value = *value;
    node->prev = sentinel->prev;
    sentinel->prev->next = node;
    sentinel->prev = node;
    list->count++;
}

} /* extern "C" */
