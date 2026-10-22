/* NON_MATCHING: allocation-result, selection-sentinel, and preparation-argument instruction scheduling differ. */
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

void FUN_00291ce8(BtlMainStateA *owner)
{
    // Stage setup fields extend the small public stage-owner prefix.
    struct PreparedStageView {
        u8 unk00[0x20];
        s8 stageId;
        s8 stageVariant;
        u8 unk22[2];
    };
    struct StageOwnerView {
        u32 parentJob;
        u8 unk04[0x50];
        u32 job;
        u8 unk58[0x9c];
        PreparedStageView prepared;
        u8 unk118[0x60];
        BtlStageIdPair identifiers;
    };
    typedef char StageOwnerLayoutCheck[offsetof(StageOwnerView, job) == 0x54 &&
        offsetof(StageOwnerView, prepared) == 0xf4 &&
        offsetof(StageOwnerView, identifiers) == 0x178 ? 1 : -1];
    StageOwnerView *work = (StageOwnerView *)owner;
    work->job = taskCreateDraw("btlStage Calc", 4, 0, 0, btlStageRunWork, btlStageDestroy, owner, owner->job);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlStage.cpp", 472);
    BtlStage *stage = (BtlStage *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(BtlStage), 1);
    g_btlStage.stage = stage;
    stage->apocalypse.parameters[0] = stage->apocalypse.parameters[1] = stage->apocalypse.parameters[2] = 0.0f;
    stage->apocalypse.selection = -1;
    if (work->identifiers.stageId < 0 || work->identifiers.stageVariant < 0) {
        btlActionPrepareFromSource(owner, &work->prepared, 0);
        work->identifiers.stageId = work->prepared.stageId;
        work->identifiers.stageVariant = work->prepared.stageVariant;
    }
    stage->apocalypse.identifiers = work->identifiers;
}
}
