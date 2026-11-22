#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/btlHelp.h"

// The request context is beyond the end of the shared battle-state view.
struct BattleHelpStateView {
    u8 unk0000[0x45a0];
    u64 flags; // 0x45a0
    u8 unk45a8[0x7bc];
    u32 requestContext; // 0x4d64
};

struct BattleHelpMasksView {
    u8 unk00[0x20];
    u64 blockedStates;      // 0x20
    u64 blockedTransitions; // 0x28
};

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;

// The help globals' blocking masks.
static __inline const BattleHelpMasksView *helpMasks(void)
{
    return reinterpret_cast<const BattleHelpMasksView *>(&g_btlHelp);
}

// Submit the help request only when neither blocking mask is active.
u32 FUN_004c8c10(u32 request, s32 index, u32 argument)
{
    BattleHelpStateView *state = reinterpret_cast<BattleHelpStateView *>(btlGetMainState());
    if ((state->flags & helpMasks()->blockedStates) || (state->flags & helpMasks()->blockedTransitions))
        return 0;
    return (u32)FUN_00200a68(8, index, request, state->requestContext, NULL, argument, ~0u, 0);
}
}
