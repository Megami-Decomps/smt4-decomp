/* NON_MATCHING: 22 lines; the kind and status load share r4 in retail, rather than r6, shifting the table-offset temporaries. */
#include "battle/BtlPendingCommandsA.h"

/* Test whether any pending command survives the current battle mode's filters. */
extern "C" bool btlHasFilteredCommand(const BtlMainStateA *state)
{
    if (state->pendingCommands.count <= 0) {
        return false;
    }
    s32 index = 0;
    do {
        if (btlCommandPassesFilter(state, index)) {
            return true;
        }
        ++index;
    } while (index < state->pendingCommands.count);
    return false;
}
