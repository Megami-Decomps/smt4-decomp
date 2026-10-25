/* NON_MATCHING: lock handling now matches (pointer-constructed ScopedCriticalLock); retail unlinks through a second copy of the node in r1 with `ldrd r2, [r1]` pair loads, built reloads fields separately / with ldm. */
#include "shard/W6_W6Match1_CriticalSection.h"
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

/* Detaches `node` from the circular list, clearing the head when it was the only node. */
static __inline void queueUnlink(NodeQueue *queue, Node *node)
{
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
}

/* Unlinks `node` from the queue's circular list and clears the node. */
void FUN_001377a0(NodeQueue *queue, Node *node)
{
    ScopedCriticalLock lock((CriticalSection *)queue->lock);
    queueUnlink(queue, node);
    node->next = NULL;
    node->unk8 = 0;
    node->unkC = 0;
}

} /* extern "C" */
