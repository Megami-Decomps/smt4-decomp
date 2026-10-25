#include "common.h"
#include "sys/ResultReport.h"

extern "C" {

int svcWaitSynchronization1(u32 handle, u32 arg, u32 timeoutLow, u32 timeoutHigh);

/* Waits on `handle` with an infinite (-1) 64-bit timeout and calls the failure handler if that returns an error. */
void syncWaitHandleForever(u32 *handle, u32 arg)
{
    s32 result = svcWaitSynchronization1(*handle, arg, 0xFFFFFFFF, 0xFFFFFFFF);
    if (result < 0) {
        FUN_002e3140(result);
    }
}

} /* extern "C" */
