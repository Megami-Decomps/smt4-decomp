#include "common.h"
#include "script/ScriptArgs.h"
#include "shard/JobWork.h"

extern "C" {
void FUN_0019d96c(void* work, s32 enabled, s32 duration);

static inline void startJobWorkCommand(u32 job, s32 enabled, s32 duration)
{
    FUN_0019d96c(jobGetWork(job), enabled, duration);
}

// Start a ten-frame job operation on the first script frame and finish on frame ten.
u32 FUN_003a6f38()
{
    switch (scrGetCommandFrame()) {
    case 0: {
        u32 job = scrGetArg(0);
        s32 enabled = 1;
        s32 duration = 10;
        startJobWorkCommand(job, enabled, duration);
        break;
    }
    default:
        if (scrGetCommandFrame() == 10) {
            return 1;
        }
        break;
    }
    return 0;
}
}
