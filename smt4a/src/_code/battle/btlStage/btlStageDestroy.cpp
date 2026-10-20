#include "battle/btlStage.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_002c2358(void);
void objectOwner3Release(BtlStage *stage);
s32 jobIsValid(u32 job);
BtlStageOwnerA *jobGetWork(u32 job);

extern BtlStageGlobals g_btlStage;

/* Destroy callback of the stage job: tears the stage model down, frees it and stops the owner job. */
void btlStageDestroy(u32 job)
{
    BtlStageOwnerA *owner = jobGetWork(job);
    BtlStage *stage = g_btlStage.stage;

    if (g_btlStage.stage != NULL) {
        if (g_btlStage.stage->context != NULL) {
            g_btlStage.stage->context = NULL;
        }
        FUN_002c2358();
        objectOwner3Release(stage);
        stage->state = 0;
        asdMemFree(g_btlStage.stage);
        g_btlStage.stage = NULL;
    }
    if (jobIsValid(owner->job) != 0) {
        jobStop(owner->job, 0);
    }
}

} /* extern "C" */
