#include "battle/btlEffect.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void FUN_003d9be4(void *block, BtlEffectJob *job);

extern BtlEffectGlobals g_btlEffect;

/* Destroy callback of the effects job: frees the data block and stops the three sub-jobs. */
void btlEffectDestroy(u32 job)
{
    BtlEffectJob *effects = (BtlEffectJob *)jobGetWork(job);

    if (g_btlEffect.data != NULL) {
        FUN_003d9be4(g_btlEffect.data, effects);
        asdMemFree(g_btlEffect.data);
        g_btlEffect.data = NULL;
    }
    jobStop(effects->jobC, 0);
    jobStop(effects->jobB, 0);
    jobStop(effects->jobA, 0);
}

} /* extern "C" */
