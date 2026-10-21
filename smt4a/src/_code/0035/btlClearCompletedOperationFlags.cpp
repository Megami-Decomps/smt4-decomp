#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
extern u64 DAT_00570de8;
s32 FUN_001632f8();

// Clear the configured battle flags once the pending operation has finished.
bool btlClearCompletedOperationFlags()
{
    if (FUN_001632f8() != 0) {
        return false;
    }
    BattleMaskState* state = btlGetMainState();
    state->mask &= ~DAT_00570de8;
    return true;
}
}
