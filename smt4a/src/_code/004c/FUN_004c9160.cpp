#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

struct BattleHelpMasksView {
    u8 unk00[0x20];
    u64 blockedStates;      // 0x20
    u64 blockedTransitions; // 0x28
};

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(u32 kind, u32 flags, u32 object, u32 command,
                 s32 mode, u32 option, u32 category, u32 resource);
u32 FUN_004c8e30(u32 object, u32 flags, u32 option);

// The help globals' blocking masks.
static __inline const BattleHelpMasksView *helpMasks(void)
{
    return reinterpret_cast<const BattleHelpMasksView *>(&g_btlHelp);
}

// Dispatch a battle resource request unless a help-state suppression mask is active.
u32 FUN_004c9160(u32 object, s32 mode, u32 resource, u32 option)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & helpMasks()->blockedStates) ||
        (state->stateFlags64.bits & helpMasks()->blockedTransitions))
        return 0;
    if (mode == 0)
        return FUN_004c8e30(object, 0, option);
    u32 command = state->commandMessage.command.currentCommand;
    return FUN_00200a68(1, 0, object, command, mode, option, 13, resource);
}
}
