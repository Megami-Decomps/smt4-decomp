#include "common.h"

extern "C" {

void onlineGetActiveLock(void);
void onlineMutexUnlockIfNeeded(void);

/* Runs onlineGetActiveLock, then onlineMutexUnlockIfNeeded. */
void FUN_002efdb4(void)
{
    onlineGetActiveLock();
    onlineMutexUnlockIfNeeded();
}

} /* extern "C" */
