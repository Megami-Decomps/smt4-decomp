/* NON_MATCHING: register allocation/instruction selection only: retail keeps a second copy of the node in r1 and unlinks it through `ldrd r2, [r1]` pairs, and saves the lock address in r6; built uses `ldm r4, {r1, r2}` and recomputes it. */
#include "common.h"

extern "C" {

typedef struct Node Node;

struct Node {
    /* 0x0 */ Node *next;
    /* 0x4 */ Node *prev;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u32 unkC;
};

typedef struct NodeQueue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Node *head;
    /* 0x0C */ u8 lock[1];  /* critical section */
} NodeQueue;

void nn_os_CriticalSection_Enter(u8 *lock);
void nn_os_CriticalSection_Leave(u8 *lock);

/* Unlinks `node` from the queue's circular list (clearing the head when it was the only node) and clears the node. */
void FUN_001377a0(NodeQueue *queue, Node *node)
{
    nn_os_CriticalSection_Enter(queue->lock);
    if (node->next == node) {
        queue->head = NULL;
    } else {
        if (queue->head == node) {
            queue->head = queue->head->prev;
        }
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    node->prev = NULL;
    node->next = NULL;
    node->unk8 = 0;
    node->unkC = 0;
    nn_os_CriticalSection_Leave(queue->lock);
}

} /* extern "C" */
