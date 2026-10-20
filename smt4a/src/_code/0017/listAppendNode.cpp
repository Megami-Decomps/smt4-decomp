#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
} Node;

typedef struct List {
    /* 0x000 */ u8 unk000[0x16C];
    /* 0x16C */ Node *head;
    /* 0x170 */ Node *tail;
    /* 0x174 */ u32 count;
} List;

/* Appends `node` to the list and returns the list's count. */
u32 listAppendNode(List *list, Node *node)
{
    if (list->tail == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
    node->next = NULL;
    return list->count;
}

} /* extern "C" */
