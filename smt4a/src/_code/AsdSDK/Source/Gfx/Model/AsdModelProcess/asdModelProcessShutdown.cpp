#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"
#include "shard/JobWork.h"

extern "C" {

s32 jobIsValid(u32 handle);
void jobStop(u32 handle, s32 arg);
void asdMemFree(void *block);

extern u32 g_asdModelProcess;

/* Shuts down the model manager's workers: stops each one that is still running, frees the
 * process set and clears its pointer. */
void asdModelProcessShutdown(u32 job)
{
    AsdModelProcessSet *set = (AsdModelProcessSet *)jobGetWork(job);

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
    g_asdModelProcess = 0;
}

} /* extern "C" */
