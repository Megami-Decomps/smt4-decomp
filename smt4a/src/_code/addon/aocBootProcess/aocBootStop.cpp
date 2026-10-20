#include "addon/aocBootProcess.h"

extern "C" {

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

extern AocBootGlobals g_aocBoot;

/* Stops the boot job if it is still running. */
void aocBootStop(void)
{
    if (g_aocBoot.boot != NULL && jobIsValid(g_aocBoot.boot->job) != 0) {
        jobStop(g_aocBoot.boot->job, 0);
    }
}

} /* extern "C" */
