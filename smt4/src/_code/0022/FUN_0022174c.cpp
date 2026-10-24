#include "shard/W6_W6Match2_ShutdownJobs.h"

extern "C" {
s32 jobFind(u32 job);
extern ShutdownJobs g_shutdownJobs;

/* True when the shutdown group's main job exists and is found. */
s32 FUN_0022174c(void)
{
    if (g_shutdownJobs.mainJob == 0) {
        return 0;
    }
    return jobFind(g_shutdownJobs.mainJob) != 0;
}
}
