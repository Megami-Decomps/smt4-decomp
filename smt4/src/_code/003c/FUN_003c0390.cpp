/* NON_MATCHING: Retail ldr r1, [pc, #104] differs from recovered ldr r1, [pc, #100]. */
#include "common.h"

namespace {

struct BattleMainStateView {
    u8 unk00[0x2240];   // 0x0000
    u32 unk2240;        // 0x2240
    u8 unk2244[0x225C]; // 0x2244
    u32 unk44A0;        // 0x44A0
};

}

extern "C" {
BattleMainStateView* btlGetMainState(void);
u32 btlMainFindActiveEntry(void);
s32 FUN_0022a4ac(s32 hasEntry, s32 mode, u32 request, u32 stateValue,
                 u32 activeEntry, u32 argument, s32 entryIndex);

// Forward an uninhibited request, resolving the active entry for nonnegative indices.
s32 FUN_003c0390(u32 request, s32 entryIndex, u32 argument)
{
    BattleMainStateView* state = btlGetMainState();
    if ((state->unk44A0 & 0x40) || (state->unk44A0 & 0x100)) {
        return 0;
    }

    u32 stateValue = state->unk2240;
    if (entryIndex >= 0) {
        u32 activeEntry = btlMainFindActiveEntry();
        return FUN_0022a4ac(1, 0, request, stateValue,
                            activeEntry, argument, entryIndex);
    } else {
        return FUN_0022a4ac(0, 0, request, stateValue,
                            0, argument, -1);
    }
}
}
