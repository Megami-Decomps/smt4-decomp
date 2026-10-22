/* NON_MATCHING: Retail instruction scheduling/register allocation differs (26 retail versus 23 compiled rows). */
#include "classes/Obj5586e0.h"

extern "C" {
void FUN_002eb6c0(SharedQueueNode **next, void *state, SharedQueueNode **position);
void sharedRefRelease(SharedQueueNode *node);
}

/* Unlink the selected node, release its queue reference, and return its successor. */
SharedQueueIterator Obj5586e0::erase(SharedQueueIterator position)
{
    SharedQueueNode *removed = position.node;
    SharedQueueNode *next;
    SharedQueueNode *current = removed;
    FUN_002eb6c0(&next, &state, &current);
    position.node = next;
    QueueTimestamp cleared = {0, 0};
    removed->timestamp = cleared;
    sharedRefRelease(removed);
    return position;
}
