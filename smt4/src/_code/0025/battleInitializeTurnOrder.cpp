/* NON_MATCHING: retail predicates the cursor reset (movgt; strhgt) ahead of its ble and places the empty case
 * after the epilogue (this build keeps it inline before the shared store); the reset loop swaps r1/r2 and the
 * entry-flag loop r3/ip. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

extern "C" {
s16 FUN_00255de0(s32 minimum, s32 maximum);
void battleSortTurnOrder(BtlMainState *, s32);

/* Lists the active entries of the battle's side in turn order, with each one's speed bonus rolled. */
void battleInitializeTurnOrder(BtlMainState *state)
{
    for (s32 i = 0; i < 12; ++i)
        state->turnOrder.order[i] = -1;
    state->turnOrder.cursor = -1;

    s32 first, count;
    if (state->battleFlags & 4) {
        first = 4;
        count = 50;
    } else if (state->battleFlags & 0x1000) {
        first = 54;
        count = 1;
    } else {
        first = 0;
        count = 4;
    }
    s32 end = first + count;
    s32 entries = 0;
    for (s32 i = first; end > i; ++i) {
        if ((state->entries[i].flags & 1) && !(state->entries[i].flags & 0x40)) {
            state->turnOrder.order[entries] = state->entries[i].selectionIndex;
            state->entries[i].data.speedBonus = 0;
            if (state->entries[i].flags & 2)
                state->entries[i].data.speedBonus += 5;
            if (!(state->battleFlags & 0x40000))
                state->entries[i].data.speedBonus += FUN_00255de0(-3, 3);
            ++entries;
        }
    }
    if (entries > 0) {
        state->turnOrder.cursor = 0;
        battleSortTurnOrder(state, 0);
        state->resolution.kind = state->turnOrder.order[state->turnOrder.cursor];
    } else {
        state->turnOrder.cursor = -1;
        state->resolution.kind = -1;
    }
}
}
