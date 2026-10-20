#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"

extern "C" {

AsdModelProcessSet *jobGetWork(void);
s32 jobIsValid(u32 handle);
void jobStop(u32 handle, s32 arg);
void asdMemFree(void *block);

extern u32 DAT_005b3cd4;

/* Shuts down the model manager's workers: stops each one that is still running, frees the
 * process set and clears its pointer. */
void asdModelProcessShutdown(void)
{
    AsdModelProcessSet *set = jobGetWork();

    if (jobIsValid(set->handle[0]) != 0) {
        jobStop(set->handle[0], 0);
    }
    if (jobIsValid(set->handle[1]) != 0) {
        jobStop(set->handle[1], 0);
    }
    if (jobIsValid(set->handle[2]) != 0) {
        jobStop(set->handle[2], 0);
    }
    asdMemFree(set);
    DAT_005b3cd4 = 0;
}

} /* extern "C" */
