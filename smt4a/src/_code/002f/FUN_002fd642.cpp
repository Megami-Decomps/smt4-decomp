/* NON_MATCHING: register allocation only: retail keeps the arguments in r4/r5/r6 in order (result, list, position) and the next node in r7; built allocates r7/r4/r5/r6. */
#include "common.h"

extern "C" {

typedef struct Value Value;

typedef struct ValueVtable {
    /* 0x0 */ void (*destroy)(Value *value);
} ValueVtable;

struct Value {
    /* 0x0 */ ValueVtable *vtable;
};

typedef struct ListNode ListNode;

struct ListNode {
    /* 0x0 */ ListNode *next;
    /* 0x4 */ ListNode *prev;
    /* 0x8 */ Value value;
};

typedef struct List {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ListNode *freeList;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ ListNode *anchor;
    /* 0x14 */ s32 count;
} List;

typedef struct ListIter {
    /* 0x0 */ ListNode *node;
} ListIter;

/* Unlinks the node `pos` refers to (not the anchor), destroys its value, returns it to the free list and stores the next node in *result. */
void FUN_002fd642(ListIter *result, List *list, ListIter *pos)
{
    ListNode *anchor = list->anchor;
    ListNode *next;

    if (pos->node == anchor) {
        result->node = anchor;
        return;
    }
    next = pos->node->next;
    pos->node->prev->next = pos->node->next;
    pos->node->next->prev = pos->node->prev;
    list->count = list->count - 1;
    pos->node->value.vtable->destroy(&pos->node->value);
    pos->node->next = list->freeList;
    list->freeList = pos->node;
    result->node = next;
}

} /* extern "C" */
