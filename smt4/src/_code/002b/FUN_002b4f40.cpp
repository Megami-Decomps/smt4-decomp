#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x0 */ struct Node *next;
} Node;

typedef struct Queue {
    /* 0x000 */ u8 unk000[0x16C];
    /* 0x16C */ Node *head;
    /* 0x170 */ Node *tail;
    /* 0x174 */ u32 unk174;
} Queue;

/* Appends `node` to the queue; returns the queue's unk174 field. */
u32 FUN_002b4f40(Queue *queue, Node *node)
{
    if (queue->tail == NULL) {
        queue->head = node;
    } else {
        queue->tail->next = node;
    }
    queue->tail = node;
    node->next = NULL;
    return queue->unk174;
}

} /* extern "C" */
