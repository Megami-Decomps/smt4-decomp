#include "common.h"

extern "C" {

extern int eventQueueAddUnique(s32 event);

/* Queues `event` when it is a valid (non-negative) event id. */
void FUN_002bc01c(s32 event)
{
    if (event >= 0) {
        eventQueueAddUnique(event);
    }
}

}
