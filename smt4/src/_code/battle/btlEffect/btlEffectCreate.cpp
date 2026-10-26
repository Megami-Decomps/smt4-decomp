#include "battle/btlEffect.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern BtlEffectGlobals g_btlEffect;

u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, s32 (*update)(void), void (*end)(u32), void *work, u32 parent);
u32 effectProcessCreate(u8 keepScene);
void jobSetParent(u32 job, u32 parent);
void FUN_003d971c(void *block, BtlEffectJob *work);
s32 btlEffectDispatchCurrentJob(void);
void btlEffectDestroy(u32 job);
s32 FUN_0020ee0c(void);

/* Starts the effects job: its calculation task, the effect process and the draw task, then allocates and initializes the effect data. */
void btlEffectCreate(BtlEffectJob *effects)
{
    effects->jobA = taskCreateDraw("btlEffect Calc", 2, 0, 0, btlEffectDispatchCurrentJob, btlEffectDestroy, effects, effects->owner.parentJob);
    effects->jobB = effectProcessCreate(0);
    jobSetParent(effects->owner.parentJob, effects->jobB);
    effects->jobC = taskCreateDraw("Filter DrawUp", 0x71, 0, 0, FUN_0020ee0c, NULL, effects, effects->owner.parentJob);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlEffect.cpp", 0x1302);
    g_btlEffect.data = asdMemAlloc(0x100, 0x100, 0, 0x32a4, 1);
    FUN_003d971c(g_btlEffect.data, effects);
}

} /* extern "C" */
