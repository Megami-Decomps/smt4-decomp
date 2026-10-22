/* NON_MATCHING: queue insertion and timestamp behavior are recovered; the reference temporaries, Thumb saved registers, and timestamp copy schedule differ. */
#include "common.h"

struct QueueTimestamp {
    /* 0x00 */ u32 low;
    /* 0x04 */ u32 high;
};

struct SharedQueueNode {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ SharedQueueNode *next;
    /* 0x010 */ SharedQueueNode *previous;
    /* 0x014 */ u8 unk014[0xf4];
    /* 0x108 */ QueueTimestamp timestamp;
};

struct SharedQueueState {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ SharedQueueNode *head;
    /* 0x08 */ SharedQueueNode *tail;
    /* 0x0C */ SharedQueueNode *end;
    /* 0x10 */ u32 count;
};

struct SharedReferenceQueue {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ SharedQueueState state;
};

extern "C" {
u32 wordRefsDiffer_002eb690(SharedQueueNode **first, SharedQueueNode **second);
SharedQueueNode *sharedRefAddRef(SharedQueueNode *node);
void FUN_002eb6a0(void *state, SharedQueueNode **first, SharedQueueNode **second);
QueueTimestamp onlineTimeGetNow();
}

// Link an unattached shared node at the head of the queue and optionally stamp its time.
extern "C" void FUN_001051f4(SharedReferenceQueue *queue, SharedQueueNode *node, bool stampTime)
{
    if (node->previous != NULL || node->next != NULL)
        return;
    SharedQueueNode *candidate = node;
    if (!wordRefsDiffer_002eb690(&queue->state.head, &candidate))
        return;
    sharedRefAddRef(node);
    SharedQueueState *state = &queue->state;
    if (wordRefsDiffer_002eb690(&state->head, &state->end)) {
        FUN_002eb6a0(state, &node, &state->head);
        state->head = node;
    } else {
        state->head = node;
        state->tail = node;
    }
    ++state->count;
    if (stampTime)
        node->timestamp = onlineTimeGetNow();
}
