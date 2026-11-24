/* NON_MATCHING: 30 lines, the same instructions. Retail keeps the action's kind in r4 and the constant 4 in r5
 * (the build the other way round), tests kind 5 with `bne` over the return where the build branches to it, and
 * zeroes the index after loading the entry stride's pool word. Written with the filter its pop (btlPopFilteredCommand,
 * IDENTICAL) shares, as Apocalypse's btlHasFilteredCommand is; the filter written in place is 32 lines off. */
#include "battle/BtlPendingCommands.h"

extern "C" {
/* Whether any of the turn's listed actions passes the filter (Apocalypse's btlHasFilteredCommand). */
u32 btlHasFilteredCommand(BtlMainState *state)
{
    for (s32 index = 0; index < state->listedActions.count; ++index) {
        if (btlCommandPassesFilter(state, index)) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
