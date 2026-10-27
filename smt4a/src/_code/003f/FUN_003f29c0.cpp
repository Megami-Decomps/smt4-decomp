/* NON_MATCHING: layout and instructions equal retail; only register allocation differs (retail: entries base r4, hoisted 4/628 in r5/r6, commands pointer r7). */
/* Pops the next pending battle command that survives the current mode and status filters. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" u32 FUN_003f29c0(BtlMainStateA *state, BtlPendingCommand *output)
{
    for (;;) {
        if (state->pendingCommands.count > 0) {
            s32 index = --state->pendingCommands.count;
            if (state->commandFilter.mode != 0) {
                if (state->pendingCommands.commands[index].kind != 6) {
                    continue;
                }
            } else if (state->pendingCommands.commands[index].kind == 4 &&
                       (state->entries[state->pendingCommands.commands[index].unitIndex].statusFlags & 0x11C0) != 0) {
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
