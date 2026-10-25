#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern u64 DAT_00570de8;
s32 infoWinIsActive();

// Clear the configured battle flags once the pending operation has finished.
bool btlClearCompletedOperationFlags()
{
    if (infoWinIsActive() != 0) {
        return false;
    }
    BtlMainStateA* state = btlGetMainState();
    state->stateFlags64.bits &= ~DAT_00570de8;
    return true;
}
}
