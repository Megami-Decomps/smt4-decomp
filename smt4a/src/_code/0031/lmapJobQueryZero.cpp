/* The result is the work-state word, reported as zero once it has been consumed. */
#include "shard/JobWork.h"

extern "C" {
extern struct { u32 unk00; u32 unk04; s32 value; } g_btlDebugGlobals;

s32 lmapJobQueryZero(u32 job)
{
    jobGetWork(job);
    s32 result = g_btlDebugGlobals.value;
    if (result != 0)
        result = 0;
    return result;
}

}
