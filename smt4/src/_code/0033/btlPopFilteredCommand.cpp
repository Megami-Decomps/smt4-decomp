#include "battle/BtlPendingCommands.h"

extern "C" {
/* Pops listed actions until one passes the filter and copies it out; 0 when the list runs out
 * (Apocalypse's btlPopFilteredCommand). */
u32 btlPopFilteredCommand(BtlMainState *state, BtlPendingCommand *output)
{
    for (;;) {
        if (state->listedActions.count > 0) {
            s32 index = --state->listedActions.count;
            if (!btlCommandPassesFilter(state, index)) {
                continue;
            }
            output->kind = state->listedActions.actions[state->listedActions.count].kind;
            output->unitIndex = state->listedActions.actions[state->listedActions.count].unitIndex;
            output->first = state->listedActions.actions[state->listedActions.count].first;
            output->second = state->listedActions.actions[state->listedActions.count].second;
            return 1;
        }
        return 0;
    }
}
}
