#include "common.h"

extern "C" {

void FUN_002e3140(void);
int FUN_002e3138(u32 handle, u32 arg, u32 timeoutLow, u32 timeoutHigh);

/* Waits on `handle` with an infinite (-1) 64-bit timeout and calls the failure handler if that returns an error. */
void FUN_0010032e(u32 *handle, u32 arg)
{
    if (FUN_002e3138(*handle, arg, 0xFFFFFFFF, 0xFFFFFFFF) < 0) {
        FUN_002e3140();
    }
}

} /* extern "C" */
