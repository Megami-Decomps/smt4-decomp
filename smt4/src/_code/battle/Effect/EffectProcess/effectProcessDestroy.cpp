#include "battle/Effect/EffectProcess.h"

extern "C" {

void FUN_00262a38(void);
void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void FUN_002cd8d4(void);
void textureSlotsReleaseAll(void);
void taskUpdateAll(void);
s32 jobIsValid(u32 job);
EffectProcess *jobGetWork(u32 job);

extern s32 g_effectProcessActive;

/* Destroy callback of the effect process: stops its sub-jobs, tears the scene down and frees it. */
void effectProcessDestroy(u32 job)
{
    EffectProcess *process = jobGetWork(job);

    if (jobIsValid(process->jobA) != 0) {
        jobStop(process->jobA, 0);
    }
    if (jobIsValid(process->jobB) != 0) {
        jobStop(process->jobB, 0);
    }
    FUN_00262a38();
    FUN_002cd8d4();
    if (process->keepScene == 0) {
        textureSlotsReleaseAll();
    }
    asdMemFree(process);
    g_effectProcessActive = 0;
    taskUpdateAll();
}

} /* extern "C" */
