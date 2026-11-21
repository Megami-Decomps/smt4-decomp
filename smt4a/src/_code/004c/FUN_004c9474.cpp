#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(u32 kind, s32 id, void *owner, u32 command, s32 mode, u32 value, u32 route, u32 flags);
u32 FUN_004c8e30(void *owner, s32 mode, u32 value);

// Starts a battle help action unless the current state suppresses help messages; without a mode it
// takes the immediate path.
u32 FUN_004c9474(void *owner, s32 mode, s32 id, u32 value)
{
    BtlMainStateA *state = btlGetMainState();
    if ((g_btlHelp.blockedStates & state->stateFlags64.bits) ||
        (g_btlHelp.blockedTransitions & state->stateFlags64.bits))
        return 0;
    if (mode != 0) {
        u32 command = state->commandMessage.command.currentCommand;
        return FUN_00200a68(5, static_cast<s16>(id), owner, command, mode, value, 7, 0);
    }
    return FUN_004c8e30(owner, 0, value);
}
}
