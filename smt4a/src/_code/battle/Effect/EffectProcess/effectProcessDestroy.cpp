#include "battle/Effect/EffectProcess.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_003307dc(void);
void FUN_0035bb70(void);
void FUN_003a6c18(void);
void taskUpdateAll(void);
s32 jobIsValid(u32 job);
EffectProcessA *jobGetWork(u32 job);

extern s32 g_effectProcessActive;

/* Destroy callback of the effect process: stops its sub-jobs, tears the scene down and frees it. */
void effectProcessDestroy(u32 job)
{
    EffectProcessA *process = jobGetWork(job);

    if (jobIsValid(process->jobA) != 0) {
        jobStop(process->jobA, 0);
    }
    if (jobIsValid(process->jobB) != 0) {
        jobStop(process->jobB, 0);
    }
    if (jobIsValid(process->jobC) != 0) {
        jobStop(process->jobC, 0);
    }
    FUN_0035bb70();
    FUN_003307dc();
    if (process->keepScene == 0) {
        FUN_003a6c18();
    }
    asdMemFree(process);
    g_effectProcessActive = 0;
    taskUpdateAll();
}

} /* extern "C" */
