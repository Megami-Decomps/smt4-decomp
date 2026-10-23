/* NON_MATCHING: auxiliary-loading switch block placement has not matched retail. */
#include "battle/btlMain.h"

namespace {
/* The shared BtlEvent view ends before Apocalypse's pending state mask. */
struct BattleEventMaskView {
    u8 unk00[0x20];
    u64 pendingMask;
};
}
extern "C" {
extern BtlAuxA *g_btlAux;
extern BattleEventMaskView g_btlEvent;
void FUN_004f741c(BtlAuxA *aux);
u32 btlAuxAreResourcesReady(BtlAuxA *aux);
void FUN_004f89e8(BtlAuxA *aux);
s32 FUN_004f9c2c(BtlAuxA *aux);
void scrScriptProcessStartEntry(u32 entry);
void sysPlaySe(u32 sound);
void btlActionStepFinishPendingChanges(BtlStep *step, BtlMainStateA *battle);

/* Wait for auxiliary resources, then run the step's script and apply its state mask. */
void FUN_004d7ec0(BtlStep *step, BtlMainStateA *battle)
{
    switch (step->unk2C) {
    case 0:
        FUN_004f741c(g_btlAux);
        step->unk2C = 1;
        /* Fall through while the resources are already available. */
    case 1:
        if (btlAuxAreResourcesReady(g_btlAux) == 0)
            return;
        FUN_004f89e8(g_btlAux);
        step->unk2C = 2;
        /* Fall through to the auxiliary operation's completion check. */
    case 2:
        if (FUN_004f9c2c(g_btlAux) == 0)
            return;
        step->unk2C = 3;
        break;
    }
    step->state = 9;
    if (step->completion.selectedIndex < 0)
        return;
    scrScriptProcessStartEntry(step->completion.scriptEntry);
    step->state = 10;
    step->completion.pendingChanges = 0;
    if ((battle->stateFlags64.bits & g_btlEvent.pendingMask) != 0)
        sysPlaySe(223);
    if (step->completion.kind == 5) {
        battle->stateFlags64.bits |= g_btlEvent.pendingMask;
        sysPlaySe(223);
    }
    btlActionStepFinishPendingChanges(step, battle);
}
}
