#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Default action kind selection: kind 10 when bit 0 of the action flags is set, otherwise 11. */
void battleSetActionKind(BtlMainState **state)
{
    if ((*state)->actionState.flags & 1) {
        btlActionGetSlot((*state)->actionState.index)->unit.command = 10;
    } else {
        btlActionGetSlot((*state)->actionState.index)->unit.command = 11;
    }
}
}
