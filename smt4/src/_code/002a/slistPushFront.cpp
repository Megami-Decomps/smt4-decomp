#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x0 */ struct Node *next;
} Node;

/* Pushes `node` onto the front of the singly linked list. */
void slistPushFront(Node **head, Node *node)
{
    node->next = *head;
    *head = node;
}

} /* extern "C" */
