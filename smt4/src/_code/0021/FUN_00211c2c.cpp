#include "shard/W6_W6Match2_ShutdownJobs.h"

extern "C" {
void jobStop(u32 job, s32 mode);
extern ShutdownJobs g_shutdownJobs;

/* Stops the shutdown group's main job. */
void FUN_00211c2c(void)
{
    jobStop(g_shutdownJobs.mainJob, 0);
}
}
