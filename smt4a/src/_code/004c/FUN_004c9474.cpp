#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_004c8e30(void *owner, s32 mode, u32 value);

// Starts a battle help action about `combatant` unless the current state suppresses help messages; without a
// combatant it takes the immediate path.
u32 FUN_004c9474(void *owner, const void *combatant, s32 id, u32 value)
{
    BtlMainStateA *state = btlGetMainState();
    if ((g_btlHelp.blockedStates & state->stateFlags64.bits) ||
        (g_btlHelp.blockedTransitions & state->stateFlags64.bits))
        return 0;
    if (combatant != NULL) {
        u32 command = state->commandMessage.command.currentCommand;
        return (u32)FUN_00200a68(5, id, (u32)owner, command, combatant, value, 7, 0);
    }
    return FUN_004c8e30(owner, 0, value);
}
}
