#include "common.h"

extern "C" {

void FUN_003bb088(u32 job);
s32 jobIsValid(u32 job);
s32 jobStop(u32 job, s32 flag);
u32 scrGetArg(...);

/* Script command: stops the job whose id is the script argument, if it is valid; always returns 1. */
u32 FUN_00261194(void)
{
    u32 job;
    s32 valid;

    job = scrGetArg();
    valid = jobIsValid(job);
    if (valid != 0) {
        FUN_003bb088(job);
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
