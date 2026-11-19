#include "battle/BtlPendingCommandsA.h"

/* Pops the next pending battle command that survives the current mode and status filters. */

extern "C" u32 btlPopFilteredCommand(BtlMainStateA *state, BtlPendingCommand *output)
{
    for (;;) {
        if (state->pendingCommands.count > 0) {
            s32 index = --state->pendingCommands.count;
            if (!btlCommandPassesFilter(state, index)) {
                continue;
            }
            output->kind = state->pendingCommands.commands[state->pendingCommands.count].kind;
            output->unitIndex = state->pendingCommands.commands[state->pendingCommands.count].unitIndex;
            output->first = state->pendingCommands.commands[state->pendingCommands.count].first;
            output->second = state->pendingCommands.commands[state->pendingCommands.count].second;
            return 1;
        }
        return 0;
    }
}
