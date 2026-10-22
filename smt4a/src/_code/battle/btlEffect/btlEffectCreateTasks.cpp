#include "battle/btlEffect.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
u32 taskCreateDraw(const char *name, u32 priority, u32, u32, void (*start)(void *), void (*end)(void *), void *work, u32 parent);
u32 FUN_0031b654(u32 kind);
void jobSetParent(u32 parent, u32 child);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
void FUN_004f55c8(void *data, BtlEffectJobA *owner);
void btlEffectDispatchCurrentJob(void *work);
void btlEffectDestroy(void *work);
void FUN_002dece8(void *work);

// Create battle effect jobs and allocate their shared work buffer.
void btlEffectCreateTasks(BtlEffectJobA *owner)
{
    owner->jobA = taskCreateDraw("btlEffect Calc", 4, 0, 0, btlEffectDispatchCurrentJob, btlEffectDestroy, owner, owner->owner.parentJob);
    owner->jobB = FUN_0031b654(0);
    jobSetParent(owner->owner.parentJob, owner->jobB);
    owner->jobC = taskCreateDraw("Filter DrawUp", 0x73, 0, 0, FUN_002dece8, NULL, owner, owner->owner.parentJob);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlEffect.cpp", 5329);
    void *data = asdMemoryAllocTracked(0x100, 0x100, 0, 0x9c74, 1);
    g_btlEffect.data = data;
    FUN_004f55c8(data, owner);
}
}
