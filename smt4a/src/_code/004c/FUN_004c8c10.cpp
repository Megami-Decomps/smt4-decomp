/* NON_MATCHING: battle-state flag/context addressing and dispatch registers differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/btlHelp.h"

// The request context is beyond the end of the shared battle-state view.
struct BattleHelpStateView {
    u8 unk0000[0x45a0];
    u32 flags[2]; // 0x45a0
    u8 unk45a8[0x7bc];
    u32 requestContext; // 0x4d64
};

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(s32, s32, u32, u32, s32, u32, u32, s32);

// Submit the help request only when neither blocking mask is active.
u32 FUN_004c8c10(u32 request, s32 index, u32 argument)
{
    BattleHelpStateView *state = reinterpret_cast<BattleHelpStateView *>(btlGetMainState());
    if (((g_btlHelp.blockedStates[0] & state->flags[0]) |
         (g_btlHelp.blockedStates[1] & state->flags[1])) != 0 ||
        ((state->flags[0] & g_btlHelp.blockedTransitions[0]) |
         (state->flags[1] & g_btlHelp.blockedTransitions[1])) != 0)
        return 0;
    return FUN_00200a68(8, static_cast<s16>(index), request, state->requestContext, 0, argument, ~0u, 0);
}
}
