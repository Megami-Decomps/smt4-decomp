#include "battle/btlEffect.h"
#include "shard/JobWork.h"

extern "C" {

void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);
void FUN_004f5e6c(void *block, BtlEffectJobA *job);

extern BtlEffectGlobals g_btlEffect;

/* Destroy callback of the effects job: frees the data block and stops the three sub-jobs. */
void btlEffectDestroy(u32 job)
{
    BtlEffectJobA *effects = reinterpret_cast<BtlEffectJobA *>(jobGetWork(job));

    if (g_btlEffect.data != NULL) {
        FUN_004f5e6c(g_btlEffect.data, effects);
        asdMemFree(g_btlEffect.data);
        g_btlEffect.data = NULL;
    }
    jobStop(effects->jobC, 0);
    jobStop(effects->jobB, 0);
    jobStop(effects->jobA, 0);
}

} /* extern "C" */
