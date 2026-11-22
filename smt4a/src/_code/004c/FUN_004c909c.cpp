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
u32 FUN_004c8e30(u32, s32, u32);

// The help globals' blocking masks.
static __inline const BattleHelpMasksView *helpMasks(void)
{
    return reinterpret_cast<const BattleHelpMasksView *>(&g_btlHelp);
}

// Dispatch a help request about `combatant`, or use the immediate path without one.
u32 FUN_004c909c(u32 request, const void *combatant, s32 index, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if ((helpMasks()->blockedStates & state->stateFlags64.bits) ||
        (helpMasks()->blockedTransitions & state->stateFlags64.bits))
        return 0;
    if (combatant != NULL) {
        u32 context = state->helpMessages.context;
        return (u32)FUN_00200a68(4, index, request, context, combatant, argument, 7, 0);
    }
    return FUN_004c8e30(request, 0, argument);
}
}
