/* IV: the filter the battle's listed-action scan (btlHasFilteredCommand) and pop (btlPopFilteredCommand) share
 * (Apocalypse: battle/BtlPendingCommandsA.h). */
#ifndef SMT4_BATTLE_BTLPENDINGCOMMANDS_H
#define SMT4_BATTLE_BTLPENDINGCOMMANDS_H

#include "battle/btlMain.h"
#include "battle/BtlEntry.h"

/* Whether listed action `index` counts: once the battle has a result only kind 5 does; before that anything
 * but a kind-4 action of a unit with one of the status bits 0x1C0. */
static __inline bool btlCommandPassesFilter(const BtlMainState *state, s32 index)
{
    if (state->core.result != 0) {
        return state->listedActions.actions[index].kind == 5;
    }
    return state->listedActions.actions[index].kind != 4 ||
        !(state->entries[state->listedActions.actions[index].unitIndex].data.statusFlags & 0x1c0);
}

/* Appends a command to the listed actions (Apocalypse: btlAppendPendingCommand). */
extern "C" void btlAppendPendingCommand(BtlMainState *state, BtlPendingCommand command);

#endif
