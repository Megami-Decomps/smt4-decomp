/* NON_MATCHING: register allocation only: retail keeps the result pointer in r4, the list in r6, the position in r5 and the value in r7; built uses r6/r5/r4/r7. */
#include "common.h"

extern "C" {

typedef struct ListNode ListNode;

struct ListNode {
    /* 0x0 */ ListNode *next;
    /* 0x4 */ ListNode *prev;
    /* 0x8 */ u8 value;
};

typedef struct List {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 count;
} List;

ListNode *FUN_001330c0(List *list, s32 zero, ListNode **position, u8 *value);

/* Inserts a node holding *value before *position and stores it in *result. */
void FUN_00133126(ListNode **result, List *list, ListNode **position, u8 *value)
{
    ListNode *node = FUN_001330c0(list, 0, position, value);

    node->value = *value;
    node->next = *position;
    node->prev = (*position)->prev;
    (*position)->prev->next = node;
    (*position)->prev = node;
    list->count = list->count + 1;
    *result = node;
}

} /* extern "C" */
