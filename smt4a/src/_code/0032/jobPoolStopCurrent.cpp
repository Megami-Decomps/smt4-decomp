#include "shard/Shard0032.h"

extern "C" {

extern JobPool *jobGetWork(u32 job);
extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, u16 arg);

/* Stops the pool's current sub-job if it is still valid. */
void jobPoolStopCurrent(u32 job)
{
    JobPool *pool = jobGetWork(job);

    if (jobIsValid(pool->jobs[pool->current]) != 0) {
        jobStop(pool->jobs[pool->current], 0);
    }
}

} /* extern "C" */
