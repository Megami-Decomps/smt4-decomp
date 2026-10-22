/* NON_MATCHING: Retail instruction scheduling/register allocation differs (18 retail versus 20 compiled rows). */
#include "classes/Obj5586e0.h"

extern "C" void FUN_002eb6c0(SharedQueueNode **next, void *state, SharedQueueNode **position);

/* Unlink the remaining nodes up to the end sentinel. */
Obj55b074::~Obj55b074()
{
    SharedQueueState *queue = (SharedQueueState *)this;
    SharedQueueNode *end = queue->end;
    SharedQueueNode *position = queue->head;
    while (position != end) {
        FUN_002eb6c0(&position, this, &position);
    }
}
