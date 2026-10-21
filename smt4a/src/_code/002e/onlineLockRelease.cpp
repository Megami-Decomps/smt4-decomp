#include "common.h"

extern "C" {

void onlineGetActiveLock(void);
void onlineMutexUnlockIfNeeded(void);

/* Runs onlineGetActiveLock, then onlineMutexUnlockIfNeeded. */
void onlineLockRelease(void)
{
    onlineGetActiveLock();
    onlineMutexUnlockIfNeeded();
}

} /* extern "C" */
