#include "addon/aocBootProcess.h"

extern "C" {

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

extern AocBoot *g_aocBoot;

/* Stops the boot job if it is still running. */
void aocBootStop(void)
{
    if (g_aocBoot != NULL && jobIsValid(g_aocBoot->job) != 0) {
        jobStop(g_aocBoot->job, 0);
    }
}

} /* extern "C" */
