#include "battle/btlMain.h"
#include "battle/btlStage.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern BtlStageGlobals g_btlStage;
s32 btlStageRunWork(void);
void btlStageDestroy(u32 handle);
void btlSpriteSelectSource(BtlMainState* battle, void* description, u32 mode);
u32 taskCreateDraw(const char* name, u32 priority, u32 flags, u32 mode,
                   s32 (*update)(void), void (*destroy)(u32), void* work, u32 parent);

// Allocate the battle-stage job and resolve its requested stage identifiers.
void btlStageCreate(BtlMainState* battle)
{
    battle->stageSetup.job = taskCreateDraw("btlStage Calc", 2, 0, 0,
                                btlStageRunWork, btlStageDestroy, battle, battle->job);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlStage.cpp", 577);
    BtlStage *stage = g_btlStage.stage = (BtlStage *)asdMemAlloc(0x100, 0x100, 0, sizeof(BtlStage), 1);
    for (u32 i = 3; i-- != 0;) {
        stage->setup.parameters[i] = 0.0f;
    }
    stage->setup.selection = -1;
    if (battle->stageSetup.identifiers.stageId < 0 || battle->stageSetup.identifiers.stageVariant < 0) {
        btlSpriteSelectSource(battle, battle->stageSetup.description, 0);
        battle->stageSetup.identifiers.stageId = battle->stageSetup.defaultStage;
        battle->stageSetup.identifiers.stageVariant = battle->stageSetup.defaultVariant;
    }
    stage->setup.identifiers = battle->stageSetup.identifiers;
}
}
