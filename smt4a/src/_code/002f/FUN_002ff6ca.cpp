#include "common.h"

extern "C" {

s32 FUN_00308576(void *list);

typedef struct Node {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ struct Node *prev;
    /* 0x0C */ struct Node *next;
} Node;

typedef struct List {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ Node *head;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 flagA;
    /* 0x19 */ u8 flagB;
} List;

/* Constructor: clears the list, stores the two flags and allocates its sentinel node, which points at itself both ways. */
List *FUN_002ff6ca(List *list, u8 *flagB, u8 flagA)
{
    Node *node;

    list->unk00 = 0;
    list->head = NULL;
    list->unk14 = 0;
    list->flagA = flagA;
    list->flagB = *flagB;
    list->unk0C = 0;
    list->unk08 = 0;
    list->unk04 = 0;
    node = (Node *)FUN_00308576(list);
    list->head = node;
    node->unk04 = 0;
    list->head->prev = list->head;
    list->head->next = list->head;
    return list;
}

} /* extern "C" */
