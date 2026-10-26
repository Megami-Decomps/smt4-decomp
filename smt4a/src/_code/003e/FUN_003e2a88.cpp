/* NON_MATCHING: flag reload and camera-duration branch layout now match; retail tests the flag with ands (not tst), loads the battle mask with ldrd (r0:r1) before the encounter mask, and orders the final step stores differently. */
#include "battle/btlMain.h"

extern "C" {
void FUN_003e0cd4(BtlStep *step, BtlMainStateA *battle);
void FUN_003e2840(BtlStep *step, BtlMainStateA *battle, s32 mode);
void FUN_003ed6e8(BtlMainStateA *battle);
void FUN_003f26d4(BtlMainStateA *battle);
void FUN_004aa2e0(void *ui, s32 mode);
void FUN_004f1c5c(void *camera, s32 duration);
s32 FUN_004f6d34(BtlAuxA *effects);
u32 FUN_004f7b84(void *effects, const char *name);
extern BtlAuxA *g_btlAux;
extern void *g_btlUiBlock;
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
    if ((step->counters.unk0C & 2) != 0 && FUN_004f6d34(g_btlAux)) {
        FUN_003e2840(step, battle, 4);
        if (g_btlCamera->duration == 0)
            FUN_004f1c5c(g_btlCamera, 120);
        else
            FUN_004f1c5c(g_btlCamera, g_btlCamera->duration);
        if ((battle->stateFlags64.bits & g_btlEncount.initial) == 0) {
            FUN_003ed6e8(battle);
            FUN_003f26d4(battle);
            battle->stateFlags64.bits = g_btlEncount.transition | battle->stateFlags64.bits | g_btlEncount.finished;
            FUN_004aa2e0(g_btlUiBlock, 0);
        }
        step->counters.unk10 = 0;
        step->counters.unk0C = 0;
        step->state = 25;
        FUN_003e0cd4(step, battle);
    }
}
}
