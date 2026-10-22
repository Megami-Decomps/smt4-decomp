/* NON_MATCHING: pending-command filtering uses a different base calculation and branch sequence. */
/* Pops the next pending battle command that survives the current mode and status filters. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" u32 FUN_003f29c0(BtlMainStateA *state, BtlPendingCommand *output)
{
    while (state->pendingCommands.count > 0) {
        s32 index = --state->pendingCommands.count;
        BtlPendingCommand *command = &state->pendingCommands.commands[index];
        if (state->commandFilter.mode != 0) {
            if (command->kind != 6) {
                continue;
            }
        } else if (command->kind == 4 &&
                   (state->entries[command->unitIndex].statusFlags & 0x11C0) != 0) {
            continue;
        }
        *output = *command;
        return 1;
    }
    return 0;
}
