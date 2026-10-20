/* NON_MATCHING: register allocation only: retail uses r5/r7/r6/r4 for result/list/position/node (built r6/r5/r4/r7) */
/* Inserts a new node holding `value` before `*position` in the list, bumping its size; stores the new node in *result. */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
    /* 0x04 */ struct Node *prev;
    /* 0x08 */ u8 value[1];
} Node;

typedef struct List {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 size;
} List;

extern Node *FUN_00307dfe(List *list, u32 arg);
extern void FUN_002fd5d4(void *dest, u32 value);

void FUN_00307dc2(Node **result, List *list, Node **position, u32 value)
{
    Node *node = FUN_00307dfe(list, 0);

    FUN_002fd5d4(node->value, value);
    node->next = *position;
    node->prev = (*position)->prev;
    (*position)->prev->next = node;
    (*position)->prev = node;
    list->size++;
    *result = node;
}

}
