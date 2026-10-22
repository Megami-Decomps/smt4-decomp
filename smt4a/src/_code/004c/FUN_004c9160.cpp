/* NON_MATCHING: suppression and request arguments recovered; mask load grouping, frame size and current-command addressing still differ. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
BtlMainStateA* btlGetMainState(void);
u32 FUN_00200a68(u32 kind, u32 flags, u32 object, u32 command,
                 s32 mode, u32 option, u32 category, u32 resource);
u32 FUN_004c8e30(u32 object, u32 flags, u32 option);

// Dispatch a battle resource request unless a help-state suppression mask is active.
u32 FUN_004c9160(u32 object, s32 mode, u32 resource, u32 option)
{
    BtlMainStateA* battle = btlGetMainState();
    u64 flags = battle->stateFlags64.bits;
    if ((flags & ((u64)g_btlHelp.blockedStates[0] | ((u64)g_btlHelp.blockedStates[1] << 32))) != 0 ||
        (flags & ((u64)g_btlHelp.blockedTransitions[0] | ((u64)g_btlHelp.blockedTransitions[1] << 32))) != 0) {
        return 0;
    }
    if (mode != 0) {
        return FUN_00200a68(1, 0, object, battle->commandMessage.command.currentCommand,
                            mode, option, 13, resource);
    }
    return FUN_004c8e30(object, 0, option);
}
}
