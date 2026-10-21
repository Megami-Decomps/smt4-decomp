/* NON_MATCHING: retail preserves the enable/duration constants across jobGetWork in saved registers. */
#include "common.h"

extern "C" {
s32 scrGetCommandFrame();
u32 scrGetArg(s32 index);
void* jobGetWork(u32 job);
void FUN_0019d96c(void* work, s32 enabled, s32 duration);

// Start a ten-frame job operation on the first script frame and finish on frame ten.
u32 FUN_003a6f38()
{
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == 10) {
            return 1;
        }
    } else {
        FUN_0019d96c(jobGetWork(scrGetArg(0)), 1, 10);
    }
    return 0;
}
}
