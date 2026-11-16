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
u32 FUN_00200a68(s32, s32, u32, u32, s32, u32, u32, s32);

// The help globals' blocking masks.
static __inline const BattleHelpMasksView *helpMasks(void)
{
    return reinterpret_cast<const BattleHelpMasksView *>(&g_btlHelp);
}

// Submit the immediate help request only when neither blocking mask is active.
u32 FUN_004c8e30(u32 request, s32 last, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & helpMasks()->blockedStates) ||
        (state->stateFlags64.bits & helpMasks()->blockedTransitions))
        return 0;
    u32 context = state->helpMessages.context;
    return FUN_00200a68(0, 0, request, context, 0, argument, ~0u, last);
}
}
