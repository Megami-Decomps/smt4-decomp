#include "shard/Shard0034.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, u16 arg);

/* Script command: stops the job given as argument 0 if it is valid. */
u32 scrCommStopJob(s32 argIndex)
{
    u32 job = scrGetArg(argIndex);

    if (jobIsValid(job) != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
