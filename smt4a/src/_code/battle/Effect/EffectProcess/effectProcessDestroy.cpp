#include "battle/Effect/EffectProcess.h"
#include "shard/JobWork.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void nodeTreeReleaseCurrent(void);
void textureCacheReleaseAll(void);
void textureSlotsReleaseAll(void);
void taskUpdateAll(void);
s32 jobIsValid(u32 job);

extern s32 g_effectProcessActive;

/* Destroy callback of the effect process: stops its sub-jobs, tears the scene down and frees it. */
void effectProcessDestroy(u32 job)
{
    EffectProcessA *process = (EffectProcessA *)jobGetWork(job);

    if (jobIsValid(process->jobA) != 0) {
        jobStop(process->jobA, 0);
    }
    if (jobIsValid(process->jobB) != 0) {
        jobStop(process->jobB, 0);
    }
    if (jobIsValid(process->jobC) != 0) {
        jobStop(process->jobC, 0);
    }
    textureCacheReleaseAll();
    nodeTreeReleaseCurrent();
    if (process->keepScene == 0) {
        textureSlotsReleaseAll();
    }
    asdMemFree(process);
    g_effectProcessActive = 0;
    taskUpdateAll();
}

} /* extern "C" */
