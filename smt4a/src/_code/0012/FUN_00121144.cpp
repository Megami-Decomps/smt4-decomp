#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
    /* 0x04 */ struct Node *prev;
} Node;

typedef struct List {
    /* 0x00 */ u32 unk00[4];
    /* 0x10 */ Node *head;
    /* 0x14 */ u32 unk14;
} List;

Node *FUN_00306e84(List *list, u32 count);

/* Constructor: zeroes the list and allocates its sentinel node, which points at itself both ways. */
List *FUN_00121144(List *list)
{
    list->unk00[0] = 0;
    list->unk00[1] = 0;
    list->unk00[2] = 0;
    list->unk00[3] = 0;
    list->head = NULL;
    list->unk14 = 0;
    list->head = FUN_00306e84(list, 1);
    list->head->next = list->head;
    list->head->prev = list->head;
    return list;
}

} /* extern "C" */
