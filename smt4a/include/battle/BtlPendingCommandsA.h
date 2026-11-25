#ifndef SMT4A_BATTLE_BTLPENDINGCOMMANDSA_H
#define SMT4A_BATTLE_BTLPENDINGCOMMANDSA_H

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

/* The pending-command scan and pop use the same battle-mode filter. */
static __inline bool btlCommandPassesFilter(const BtlMainStateA *state, s32 index)
{
    if (state->commandFilter.mode != 0) {
        if (state->pendingCommands.commands[index].kind != 6) {
            return false;
        }
        return true;
    }
    if (state->pendingCommands.commands[index].kind == 4 &&
        (state->entries[state->pendingCommands.commands[index].unitIndex].data.statusFlags & 0x11c0)) {
        return false;
    }
    return true;
}

/* Appends a command to the pending commands (IV: FUN_0023c154). */
extern "C" void btlAppendPendingCommand(BtlMainStateA *state, BtlPendingCommand command);

#endif
