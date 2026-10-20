#include "common.h"

extern "C" {

s32 jobStop(u32 job, s32 flag);
s32 jobIsValid(u32 job);

/* Stops the job whose id `**ref` is, if it is valid. */
void FUN_00280000(u32 **ref)
{
    s32 valid;
    u32 *job;

    job = *ref;
    valid = jobIsValid(*job);
    if (valid != 0) {
        jobStop(*job, 0);
        return;
    }
}

} /* extern "C" */
