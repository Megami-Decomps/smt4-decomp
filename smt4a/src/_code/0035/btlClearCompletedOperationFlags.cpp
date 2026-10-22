#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
extern u64 DAT_00570de8;
s32 infoWinIsActive();

// Clear the configured battle flags once the pending operation has finished.
bool btlClearCompletedOperationFlags()
{
    if (infoWinIsActive() != 0) {
        return false;
    }
    BattleMaskState* state = btlGetMainState();
    state->mask &= ~DAT_00570de8;
    return true;
}
}
