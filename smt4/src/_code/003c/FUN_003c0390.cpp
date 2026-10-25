#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlHelp.h"

struct BtlMainState;
struct BtlEntry;

namespace {

struct BattleMainStateView {
    u8 unk00[0x2240];   // 0x0000
    u32 unk2240;        // 0x2240
    u8 unk2244[0x225C]; // 0x2244
    u32 unk44A0;        // 0x44A0

    bool allowsRequest() const
    {
        if (unk44A0 & 0x40)
            return false;
        if (unk44A0 & 0x100)
            return false;
        return true;
    }
};

}

extern "C" {
BtlEntry* btlMainFindActiveEntry(BtlMainState *state);

// Forward an uninhibited request, resolving the active entry for nonnegative indices.
s32 FUN_003c0390(u32 request, s32 entryIndex, u8 argument)
{
    BattleMainStateView* state = reinterpret_cast<BattleMainStateView *>(btlGetMainState());
    if (!state->allowsRequest()) {
        return 0;
    }

    u32 stateValue = state->unk2240;
    if (entryIndex >= 0) {
        const void *activeEntry = btlMainFindActiveEntry(reinterpret_cast<BtlMainState *>(state));
        return (s32)FUN_0022a4ac(1, 0, request, stateValue,
                            activeEntry, argument, entryIndex);
    } else {
        return (s32)FUN_0022a4ac(0, 0, request, stateValue,
                            NULL, argument, -1);
    }
}
}
