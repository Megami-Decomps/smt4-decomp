#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
} Node;

typedef struct List {
    /* 0x00 */ Node *head;
} List;

/* Pushes `node` onto the front of the list. */
void FUN_001b9f8c(List *list, Node *node)
{
    node->next = list->head;
    list->head = node;
}

} /* extern "C" */
