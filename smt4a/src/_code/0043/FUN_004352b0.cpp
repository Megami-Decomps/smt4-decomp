/* NON_MATCHING: identical instructions; register assignment differs (retail keeps `result` in r5 and the list in r6, zero in r1; built swaps r5/r6 and uses r2 for the constant) */
#include "common.h"
#include <new>

extern "C" {

struct ChildList {
    ChildList() : first(this), last(this), value(0), unk0c(0) {}
    /* 0x00 */ ChildList *first;
    /* 0x04 */ ChildList *last;
    /* 0x08 */ u32 value;
    /* 0x0c */ u32 unk0c;
};

struct ListNode {
    /* 0x00 */ ListNode *next;
    /* 0x04 */ ListNode *prev;
    /* 0x08 */ ChildList children;
};

struct NodeList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ListNode *head;
    /* 0x08 */ ListNode *tail;
    /* 0x0c */ void *allocator;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 value;
};

ListNode *FUN_004387f0(void *allocator, s32 count);

/* Allocates a node, links it in at the front of the list and gives it the list's current value; *result is the node, or NULL if allocation failed. */
void FUN_004352b0(ListNode **result, NodeList *list)
{
    ListNode *front = (ListNode *)&list->head;
    ListNode *node = FUN_004387f0(list->allocator, 2);

    if (node == NULL) {
        *result = NULL;
        return;
    }
    new (&node->children) ChildList;
    node->next = front->next;
    node->prev = front;
    front->next = node;
    node->next->prev = node;
    *result = node;
    node->children.value = list->value;
}

} /* extern "C" */
