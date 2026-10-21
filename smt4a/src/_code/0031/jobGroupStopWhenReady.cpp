#include "shard/W6_W6Match2_ShutdownJobs.h"

extern "C" {
s32 FUN_00282f00();
void jobStop(u32, s32);
extern ShutdownJobs g_shutdownJobs;

// Stop the child/main jobs and notify the optional callback once shutdown is ready.
u32 jobGroupStopWhenReady()
{
    if (FUN_00282f00() == 0) {
        jobStop(g_shutdownJobs.childJobs[0], 0);
        jobStop(g_shutdownJobs.childJobs[1], 0);
        jobStop(g_shutdownJobs.childJobs[2], 0);
        jobStop(g_shutdownJobs.childJobs[3], 0);
        jobStop(g_shutdownJobs.mainJob, 2);
        if (g_shutdownJobs.finish != NULL) {
            g_shutdownJobs.finish();
        }
    }
    return 0;
}
}
