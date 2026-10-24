#include "common.h"

extern "C" {

void FUN_002e3140(void);
int svcWaitSynchronization1(u32 handle, u32 arg, u32 timeoutLow, u32 timeoutHigh);

/* Waits on `handle` with an infinite (-1) 64-bit timeout and calls the failure handler if that returns an error. */
void syncWaitHandleForever(u32 *handle, u32 arg)
{
    if (svcWaitSynchronization1(*handle, arg, 0xFFFFFFFF, 0xFFFFFFFF) < 0) {
        FUN_002e3140();
    }
}

} /* extern "C" */
