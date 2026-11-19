/* NON_MATCHING: phase test, reload, the outlined 120-frame camera fallback and the final step transition (btlStepEnter) now match; retail ands the phase word (ands, not tst), and loads the 64-bit masks of the initial test (ldrd into r0:r1) and the completed|queued OR (state word-wise, queued with ldrd) in other registers. */
#include "battle/btlMain.h"
#include "battle/btlCamera.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlUiGlobal.h"

namespace {
// The masks at 0x68 extend beyond the shared BtlEncounterGlobalsA prefix.
struct AncientTransitionMasks {
    u8 unk00[0x30];
    u64 initial;
    u8 unk38[0x18];
    u64 completed;
    u8 unk58[0x10];
    u64 queued;
};
typedef char AncientTransitionMasksOffsetsCheck[
    offsetof(AncientTransitionMasks, completed) == 0x50 &&
    offsetof(AncientTransitionMasks, queued) == 0x68 ? 1 : -1];
}

extern "C" {
extern BtlAuxA *g_btlAux;
extern AncientTransitionMasks g_btlEncount;
extern const char DAT_00528558[];
void FUN_004f7b84(BtlAuxA *effects, const char *name);
s32 btlPollVersionedEffectTexture(BtlAuxA *effects);
void FUN_003e2840(BtlStep *step, BtlMainStateA *battle, s32 mode);
void FUN_004f1c5c(BtlCameraA *camera, u32 duration);
void FUN_003ed6e8(BtlMainStateA *battle);
void FUN_003f26d4(BtlMainStateA *battle);
void FUN_004aa2e0(BtlUiA *ui, s32 value);
void FUN_003e0cd4(BtlStep *step, BtlMainStateA *battle);

void FUN_003e1a30(BtlStep *step, BtlMainStateA *battle)
{
    if (step->counters.unk0C == 0) {
        FUN_004f7b84(g_btlAux, DAT_00528558);
        g_btlCamera->flags |= 0x4000;
        step->counters.unk0C |= 2;
    }
    if ((step->counters.unk0C & 2) != 0 && btlPollVersionedEffectTexture(g_btlAux) != 0) {
        FUN_003e2840(step, battle, 3);
        if (g_btlCamera->movement.duration == 0)
            FUN_004f1c5c(g_btlCamera, 120);
        else
            FUN_004f1c5c(g_btlCamera, g_btlCamera->movement.duration);
        if ((g_btlEncount.initial & battle->stateFlags64.bits) == 0) {
            FUN_003ed6e8(battle);
            FUN_003f26d4(battle);
            battle->stateFlags64.bits |= g_btlEncount.completed | g_btlEncount.queued;
            FUN_004aa2e0(g_btlUiBlock, 0);
        }
        btlStepEnter(step, 25);
        FUN_003e0cd4(step, battle);
    }
}
}
