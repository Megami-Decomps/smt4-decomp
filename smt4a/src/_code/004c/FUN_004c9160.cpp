/* NON_MATCHING: suppression and request arguments recovered; mask load grouping, frame size and current-command addressing still differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(u32 kind, u32 flags, u32 object, u32 command,
                 s32 mode, u32 option, u32 category, u32 resource);
u32 FUN_004c8e30(u32 object, u32 flags, u32 option);

// Dispatch a battle resource request unless a help-state suppression mask is active.
u32 FUN_004c9160(u32 object, s32 mode, u32 resource, u32 option)
{
    BtlMainStateA* battle = btlGetMainState();
    u64 flags = battle->stateFlags64.bits;
    u32 low = (u32)flags;
    u32 high = (u32)(flags >> 32);
    if (((g_btlHelp.blockedStates[0] & low) | (g_btlHelp.blockedStates[1] & high)) != 0 ||
        ((low & g_btlHelp.blockedTransitions[0]) | (high & g_btlHelp.blockedTransitions[1])) != 0) {
        return 0;
    }
    if (mode != 0) {
        return FUN_00200a68(1, 0, object, battle->commandMessage.command.currentCommand,
                            mode, option, 13, resource);
    }
    return FUN_004c8e30(object, 0, option);
}
}
