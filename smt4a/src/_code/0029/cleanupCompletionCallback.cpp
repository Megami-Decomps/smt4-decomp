#include "common.h"

extern "C" s32 engineCleanupIsDone(void *wait);

/* Keep the callback pending until its engine wait finishes. */
extern "C" s32 cleanupCompletionCallback(void *wait)
{
    return engineCleanupIsDone(wait) ? -1 : 0;
}
