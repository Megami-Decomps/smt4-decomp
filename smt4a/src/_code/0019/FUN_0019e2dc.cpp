#include "common.h"

extern "C" {

void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);
extern u32 *DAT_0057f578;

/* Stops the job whose id DAT_0057f578 points at, frees that record and clears the pointer. */
void FUN_0019e2dc(void)
{
    u32 *job;

    job = DAT_0057f578;
    jobStop(*DAT_0057f578, 0);
    asdMemFree(job);
    DAT_0057f578 = NULL;
}

} /* extern "C" */
