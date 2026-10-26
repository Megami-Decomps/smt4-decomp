/* NON_MATCHING: retail loads the 64-bit state flags with ldm (two words) and reaches the command word through an add #8192 base; built uses ldrd and a literal. */
/* Starts a battle help action unless the current state suppresses help messages. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(u32 kind, s32 id, void *owner, u32 command, s32 mode, u32 value, u32 route, u32 flags);
u32 FUN_004c8e30(void *owner, s32 mode, u32 value);

u32 FUN_004c9474(void *owner, s32 mode, s32 id, u32 value)
{
    BtlMainStateA *state = btlGetMainState();
    u64 flags = state->stateFlags64.bits;
    u32 low = (u32)flags;
    u32 high = (u32)(flags >> 32);
    if (((g_btlHelp.blockedStates[0] & low) | (g_btlHelp.blockedStates[1] & high)) != 0 ||
        ((low & g_btlHelp.blockedTransitions[0]) | (high & g_btlHelp.blockedTransitions[1])) != 0) {
        return 0;
    }
    if (mode != 0) {
        return FUN_00200a68(5, (s16)id, owner, state->commandMessage.command.currentCommand,
                            mode, value, 7, 0);
    }
    return FUN_004c8e30(owner, 0, value);
}
}
