/* NON_MATCHING: only the base-pointer and zero registers are swapped (retail base in ip, zero in r3). */
#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_0061978c[4];

/* Clears the pending flag of an unprotected slot; returns whether it did. */
static __inline u32 querySlotClearPending(QuerySlot* slot)
{
    if (slot->status.pending != 0 && !(slot->status.flags & 4)) {
        slot->status.pending = 0;
        return 1;
    }
    return 0;
}

// Clears unprotected pending flags and reports whether any slot was changed.
u32 FUN_00167400()
{
    u32 changed = 0;
    for (s32 index = 0; index < 4; ++index) {
        if (querySlotClearPending(querySlotAt(DAT_0061978c, index))) {
            changed = 1;
        }
    }
    return changed;
}
}
