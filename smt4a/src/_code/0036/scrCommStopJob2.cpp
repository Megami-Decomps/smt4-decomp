#include "shard/Shard0036.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 jobIsValid(u32 job);
extern u32 jobStop(u32 job, u16 arg);

/* Script command: stops the job given as argument 0 if it is valid. */
u32 scrCommStopJob2(s32 argIndex)
{
    u32 job = scrGetArg(argIndex);

    if (jobIsValid(job) != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
