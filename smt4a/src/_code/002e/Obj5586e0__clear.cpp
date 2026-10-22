/* NON_MATCHING: Retail instruction scheduling/register allocation differs (27 retail versus 26 compiled rows). */
extern "C" unsigned int wordRefsDiffer_002eb690(struct SharedQueueNode **first, struct SharedQueueNode **second);
#include "classes/Obj5586e0.h"

/* Remove each node through the queue's erase hook. */
void Obj5586e0::clear()
{
    SharedQueueState *queue = (SharedQueueState *)&state;
    SharedQueueIterator position(queue->head);
    SharedQueueNode *end = queue->end;
    while (wordRefsDiffer_002eb690(&position.node, &end)) {
        position = erase(position);
    }
}
