/* NON_MATCHING: the command scan has the same comparisons, but the compiler allocates and schedules its table and unit loads differently. */
#include "battle/BtlPendingCommandsA.h"

/* Test whether any pending command survives the current battle mode's filters. */
extern "C" bool btlHasFilteredCommand(const BtlMainStateA *state)
{
    for (s32 index = 0; index < state->pendingCommands.count; ++index) {
        if (btlCommandPassesFilter(state, index)) {
            return true;
        }
    }
    return false;
}
