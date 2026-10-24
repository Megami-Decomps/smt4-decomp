#include "common.h"

extern "C" {

void eventTexRemoveHandle(u32 job);
s32 jobIsValid(u32 job);
s32 jobStop(u32 job, s32 flag);
u32 scrGetArg(...);

/* Script command: stops the job whose id is the script argument, if it is valid; always returns 1. */
u32 scrJobStop(void)
{
    u32 job;
    s32 valid;

    job = scrGetArg(0);
    valid = jobIsValid(job);
    if (valid != 0) {
        eventTexRemoveHandle(job);
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
