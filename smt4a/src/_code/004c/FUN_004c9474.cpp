/* NON_MATCHING: the help-state mask base uses r2 instead of retail ip, with different stack argument grouping. */
/* Starts a battle help action unless the current state suppresses help messages. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlMainStateA *btlGetMainState(void);
u32 FUN_00200a68(u32 kind, s32 id, void *owner, u32 command, s32 mode, u32 value, u32 route, u32 flags);
u32 FUN_004c8e30(void *owner, s32 mode, u32 value);

u32 FUN_004c9474(void *owner, s32 mode, s32 id, u32 value)
{
    BtlMainStateA *state = btlGetMainState();
    u64 flags = state->stateFlags64.bits;
    if ((flags & ((u64)g_btlHelp.blockedStates[0] | ((u64)g_btlHelp.blockedStates[1] << 32))) == 0 &&
        (flags & ((u64)g_btlHelp.blockedTransitions[0] | ((u64)g_btlHelp.blockedTransitions[1] << 32))) == 0) {
        if (mode != 0) {
            return FUN_00200a68(5, (s16)id, owner, state->commandMessage.command.currentCommand,
                                mode, value, 7, 0);
        }
        return FUN_004c8e30(owner, 0, value);
    }
    return 0;
}
}
