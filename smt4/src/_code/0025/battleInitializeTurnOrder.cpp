/* NON_MATCHING: retail predicates the populated cursor reset before branching and places the empty case after the epilogue. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

extern "C" {
s16 FUN_00255de0(s32 minimum, s32 maximum);
void battleSortTurnOrder(BtlMainState *, s32);

/* Lists the active entries of the battle's side in turn order, with each one's speed bonus rolled. */
void battleInitializeTurnOrder(BtlMainState *state)
{
    s32 slot;
    for (slot = 0; slot < 12; ++slot)
        state->turnOrder.order[slot] = -1;
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
    if (end > first) {
        slot = first;
        do {
            const u32 flags = state->entries[slot].flags;
            if ((flags & 1) && !(flags & 0x40)) {
                state->turnOrder.order[entries] = state->entries[slot].selectionIndex;
                state->entries[slot].data.speedBonus = 0;
                if (state->entries[slot].flags & 2)
                    state->entries[slot].data.speedBonus += 5;
                if (!(state->battleFlags & 0x40000))
                    state->entries[slot].data.speedBonus += FUN_00255de0(-3, 3);
                ++entries;
            }
        } while (end > ++slot);
    }
    if (entries > 0) {
        state->turnOrder.cursor = 0;
        battleSortTurnOrder(state, state->turnOrder.cursor);
        state->resolution.kind = state->turnOrder.order[state->turnOrder.cursor];
        return;
    }
    state->turnOrder.cursor = -1;
    state->resolution.kind = -1;
}
} /* extern "C" */
