#include "shard/Shard0031.h"

extern "C" {

extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, u16 arg);

/* Stops the job the reference points at, if it is still valid. */
void jobRefStop(JobRef **ref)
{
    JobRef *job = *ref;

    if (jobIsValid(job->job) != 0) {
        jobStop(job->job, 0);
    }
}

} /* extern "C" */
