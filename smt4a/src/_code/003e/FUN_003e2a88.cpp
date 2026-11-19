/* NON_MATCHING: flag reload, camera-duration branch layout and the final step transition (btlStepEnter) now match, as in FUN_003e1a30; retail tests the flag with ands (not tst), and loads the 64-bit masks of the initial test (ldrd into r0:r1) and the transition|finished OR (state word-wise, finished with ldrd) in other registers. */
#include "battle/btlMain.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
void FUN_003e0cd4(BtlStep *step, BtlMainStateA *battle);
void FUN_003e2840(BtlStep *step, BtlMainStateA *battle, s32 mode);
void FUN_003ed6e8(BtlMainStateA *battle);
void FUN_003f26d4(BtlMainStateA *battle);
void FUN_004aa2e0(BtlUiA *ui, s32 mode);
void FUN_004f1c5c(void *camera, s32 duration);
s32 btlPollVersionedEffectTexture(BtlAuxA *effects);
u32 FUN_004f7b84(void *effects, const char *name);
extern BtlAuxA *g_btlAux;
extern const char DAT_00528548[];

// Wait for the Ancient effect, initialize the battle state masks, and advance the step.
void FUN_003e2a88(BtlStep *step, BtlMainStateA *battle)
{
    struct EffectCameraView {
        u8 unk000[0x34];
        s32 duration;
        u8 unk038[0x614];
        u32 flags;
    };
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
    if (step->counters.unk0C == 0) {
        FUN_004f7b84(g_btlAux, DAT_00528548);
        g_btlCamera->flags |= 0x4000;
        step->counters.unk0C |= 2;
    }
    if ((step->counters.unk0C & 2) != 0 && btlPollVersionedEffectTexture(g_btlAux)) {
        FUN_003e2840(step, battle, 4);
        if (g_btlCamera->duration == 0)
            FUN_004f1c5c(g_btlCamera, 120);
        else
            FUN_004f1c5c(g_btlCamera, g_btlCamera->duration);
        if ((g_btlEncount.initial & battle->stateFlags64.bits) == 0) {
            FUN_003ed6e8(battle);
            FUN_003f26d4(battle);
            battle->stateFlags64.bits |= g_btlEncount.transition | g_btlEncount.finished;
            FUN_004aa2e0(g_btlUiBlock, 0);
        }
        btlStepEnter(step, 25);
        FUN_003e0cd4(step, battle);
    }
}
}
