#include "battle/btlMain.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
void FUN_003e0cd4(BtlStep *step, BtlMainStateA *battle);
void FUN_003ed6e8(BtlMainStateA *battle);
s32 btlFindSelectionIndexByOrdinal(BtlMainStateA *battle, s32 mode);
void btlAiBuildTurnOrder(BtlMainStateA *battle);
void btlPlaySelectedEntryVoice(s32 mode);
void FUN_004aa2e0(BtlUiA *ui, s32 mode);
void btlCameraStartMove(void *camera, s32 duration);

// Initialize encounter flags and advance the step, restoring UI or reporting a failed transition.
void btlStepInitEncounterFlags(BtlStep *step, BtlMainStateA *battle)
{
    struct EffectCameraView { u8 unk00[0x34]; s32 duration; };
    struct EncounterEffectMasksView {
        u8 unk00[0x30];
        u64 initial;
        u8 unk38[0x18];
        u64 transition;
        u8 unk58[0x10];
        u64 finished;
    };
    // The final effect mask extends beyond the shared encounter-global extent.
    extern EncounterEffectMasksView g_btlEncount;
    extern EffectCameraView *g_btlCamera;
    if (g_btlCamera->duration == 0)
        btlCameraStartMove(g_btlCamera, 120);
    else
        btlCameraStartMove(g_btlCamera, g_btlCamera->duration);
    if ((g_btlEncount.initial & battle->stateFlags64.bits) == 0) {
        FUN_003ed6e8(battle);
        btlAiBuildTurnOrder(battle);
        battle->stateFlags64.bits |= g_btlEncount.transition;
        battle->stateFlags64.bits |= g_btlEncount.finished;
        FUN_004aa2e0(g_btlUiBlock, 0);
    } else {
        FUN_003ed6e8(battle);
        btlAiBuildTurnOrder(battle);
        battle->stateFlags64.bits |= g_btlEncount.transition;
        battle->stateFlags64.bits |= g_btlEncount.finished;
        if (btlFindSelectionIndexByOrdinal(battle, 1) < 0 && (battle->encounter.controlFlags & 0x20) == 0)
            btlPlaySelectedEntryVoice(3);
    }
    btlStepEnter(step, 25);
    FUN_003e0cd4(step, battle);
}
}
