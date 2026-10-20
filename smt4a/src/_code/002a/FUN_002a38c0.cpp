#include "common.h"

extern "C" {

void FUN_0030f69c(u32 handle, u32 a, s32 b);
u32 FUN_002e6e26(void);
s32 jobGetWork(void);

/* When there is a job work area and FUN_002e6e26 yields a handle, calls FUN_0030f69c(handle, -1, 0); always returns 0. */
u32 FUN_002a38c0(void)
{
    s32 result;
    u32 handle;

    result = jobGetWork();
    if ((result != 0) && (result = FUN_002e6e26(), result != 0)) {
        handle = FUN_002e6e26();
        FUN_0030f69c(handle, 0xFFFFFFFF, 0);
    }
    return 0;
}

} /* extern "C" */
