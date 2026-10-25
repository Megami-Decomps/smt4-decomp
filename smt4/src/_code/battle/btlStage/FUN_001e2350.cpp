/* NON_MATCHING: sentinel/global-store register allocation and description-argument scheduling differ. */
#include "battle/btlMain.h"
#include "battle/btlStage.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern BtlStageGlobals g_btlStage;
s32 btlStageRunWork(void);
void FUN_0021eda8(u32 handle);
void FUN_0027dc24(BtlMainState* battle, void* description, u32 mode);
u32 taskCreateDraw(const char* name, u32 priority, u32 flags, u32 mode,
                   s32 (*update)(void), void (*destroy)(u32), void* work, u32 parent);

// Allocate the battle-stage job and resolve its requested stage identifiers.
void FUN_001e2350(BtlMainState* battle)
{
    // The stage identifiers occupy byte-aligned padding in the shared battle prefix.
    struct StageSetupView {
        u8 unk00[0x30];
        u32 job;
        u8 unk34[0x94];
        u8 description[0x1F];
        s8 defaultStage;
        s8 defaultVariant;
        u8 unkE9[0x53];
        BtlStageIdPair identifiers;
    };
    typedef char StageSetupOffsets[offsetof(StageSetupView, description) == 0xC8 &&
        offsetof(StageSetupView, defaultStage) == 0xE7 &&
        offsetof(StageSetupView, identifiers) == 0x13C ? 1 : -1];
    StageSetupView* setup = reinterpret_cast<StageSetupView*>(battle);
    setup->job = taskCreateDraw("btlStage Calc", 2, 0, 0,
                                btlStageRunWork, FUN_0021eda8, battle, battle->job);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlStage.cpp", 577);
    BtlStage* stage = static_cast<BtlStage*>(asdMemAlloc(0x100, 0x100, 0, 0xC4, 1));
    g_btlStage.stage = stage;
    stage->setup.parameters[2] = 0.0f;
    stage->setup.parameters[1] = 0.0f;
    stage->setup.parameters[0] = 0.0f;
    stage->setup.selection = -1;
    if (setup->identifiers.stageId < 0 || setup->identifiers.stageVariant < 0) {
        FUN_0027dc24(battle, setup->description, 0);
        setup->identifiers.stageId = setup->defaultStage;
        setup->identifiers.stageVariant = setup->defaultVariant;
    }
    stage->setup.identifiers = setup->identifiers;
}
}
