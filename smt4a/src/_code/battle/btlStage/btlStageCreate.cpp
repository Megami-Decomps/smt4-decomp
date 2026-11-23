/* NON_MATCHING: the -1 selection store goes through r0 instead of the stage copy in r5. */
#include "battle/btlStage.h"
#include "battle/btlMain.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlStageGlobals g_btlStage;
u32 taskCreateDraw(const char *name, u32 priority, u32, u32, void (*start)(void *), void (*end)(void *), void *work, u32 parent);
void btlStageRunWork(void *work);
void btlStageDestroy(void *work);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
void btlActionPrepareFromSource(BtlMainStateA *source, void *action, s32 useSaved);

void btlStageCreate(BtlMainStateA *owner)
{
    owner->stageTask.job = taskCreateDraw("btlStage Calc", 4, 0, 0, btlStageRunWork, btlStageDestroy, owner, owner->job);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlStage.cpp", 472);
    BtlStage *stage = g_btlStage.stage = (BtlStage *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BtlStage), 1);
    for (s32 i = 2; i >= 0; --i) {
        stage->apocalypse.parameters[i] = 0.0f;
    }
    stage->apocalypse.selection = -1;
    if (owner->stageSetup.identifiers.stageId < 0 || owner->stageSetup.identifiers.stageVariant < 0) {
        btlActionPrepareFromSource(owner, &owner->stageSetup.prepared, 0);
        owner->stageSetup.identifiers.stageId = owner->stageSetup.prepared.stageId;
        owner->stageSetup.identifiers.stageVariant = owner->stageSetup.prepared.stageVariant;
    }
    stage->apocalypse.identifiers = owner->stageSetup.identifiers;
}
}
