/* NON_MATCHING: -O3 unrolls the four slots; -O2 preserves the retail loop but differs in register saving and global-base reload placement. */
#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_0061978c[4];

// Clears unprotected pending flags and reports whether any slot was changed.
u32 FUN_00167400()
{
    u32 changed = 0;
    for (s32 index = 0; index < 4; ++index) {
        QuerySlot* slot = querySlotAt(DAT_0061978c, index);
        if (slot->status.pending != 0 && !(slot->status.flags & 4)) {
            changed = 1;
            slot->status.pending = 0;
        }
    }
    return changed;
}
}
