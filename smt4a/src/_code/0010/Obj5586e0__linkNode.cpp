/* NON_MATCHING: Thumb saved registers and the timestamp copy schedule differ. */
#include "classes/Obj5586e0.h"

extern "C" {
u32 wordRefsDiffer_002eb690(SharedQueueNode **first, SharedQueueNode **second);
SharedQueueNode *sharedRefAddRef(SharedQueueNode *node);
void FUN_002eb6a0(void *state, SharedQueueNode **first, SharedQueueNode **second);
QueueTimestamp onlineTimeGetNow();
}

/* Link an unattached shared node at the head and optionally stamp its time. */
void Obj5586e0::linkNode(SharedQueueNode *node, bool stampTime)
{
    if (node->previous != NULL || node->next != NULL) {
        return;
    }
    SharedQueueState *queue = (SharedQueueState *)&state;
    SharedQueueNode *candidate = node;
    if (!wordRefsDiffer_002eb690(&queue->head, &candidate)) {
        return;
    }
    sharedRefAddRef(node);
    if (wordRefsDiffer_002eb690(&queue->head, &queue->end)) {
        FUN_002eb6a0(queue, &node, &queue->head);
        queue->head = node;
    } else {
        queue->head = node;
        queue->tail = node;
    }
    ++queue->count;
    if (stampTime) {
        node->timestamp = onlineTimeGetNow();
    }
}
