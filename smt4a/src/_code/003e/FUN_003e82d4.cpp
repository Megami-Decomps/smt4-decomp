/* NON_MATCHING: paired flag loads use LDRD/LDM differently and mask/register scheduling differs from retail. */
#include "battle/btlMain.h"

/* This global's mask suffix extends beyond the shared BtlMainGlobalsA prefix. */
struct SelectionMasksView {
    u8 prefix[0xD0];
    u64 retainSelection;
    u8 paddingD8[0x30];
    u64 alternateSelection;
    u8 padding110[0x40];
    u64 initialized;
    u8 padding158[0x98];
    u64 initializationBlocked;
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;
void FUN_003e892c(BtlMainStateA *battle);

s32 FUN_003e82d4(BtlMainStateA *battle)
{
    SelectionMasksView *masks = reinterpret_cast<SelectionMasksView *>(&g_btlMain);
    u64 markers = battle->markerMasks.bits;
    if (!(markers & masks->initializationBlocked) &&
        !(battle->stateFlags64.bits & masks->initialized)) {
        FUN_003e892c(battle);
        battle->stateFlags64.bits |= masks->initialized;
    }
    s32 selection = battle->commandEntry.selection;
    if (!(battle->stateFlags64.bits & masks->retainSelection) &&
        !(battle->stateFlags64.bits & masks->alternateSelection) &&
        !battle->completion.pending[0] && !battle->completion.pending[1]) {
        selection = -1;
    }
    return selection;
}
}
