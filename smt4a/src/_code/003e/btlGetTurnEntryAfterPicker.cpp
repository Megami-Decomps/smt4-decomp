/* IV's FUN_00336740 with the flag bits read from the battle's mask table: returns the entry whose turn it is, or -1
 * while neither selection mask is set and the menu cursor has stopped; advances the picker once first unless held. */
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {
void FUN_003e892c(BtlMainStateA *battle);

s32 btlGetTurnEntryAfterPicker(BtlMainStateA *battle)
{
    if (!(battle->markerMasks.bits & g_btlMain.pickerHoldMask) &&
        !(battle->stateFlags64.bits & g_btlMain.pickerAdvanced.mask)) {
        FUN_003e892c(battle);
        battle->stateFlags64.bits |= g_btlMain.pickerAdvanced.mask;
    }
    s32 selection = battle->commandEntry.selection;
    if (!(battle->stateFlags64.bits & g_btlMain.partyTarget.mask) &&
        !(battle->stateFlags64.bits & g_btlMain.transition.mask) &&
        !battle->completion.pending[0] && !battle->completion.pending[1]) {
        selection = -1;
    }
    return selection;
}
}
