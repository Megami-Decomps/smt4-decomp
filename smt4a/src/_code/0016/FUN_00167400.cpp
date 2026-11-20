#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_0061978c[4];

// Clears unprotected pending flags and reports whether any slot was changed.
u32 FUN_00167400()
{
    u32 changed = 0;
    for (s32 index = 0; index < 4; ++index) {
        QuerySlot *slot = (u32)index >= 4 ? NULL : &DAT_0061978c[index];
        if (slot->status.pending != 0 && !(slot->status.flags & 4)) {
            slot->status.pending = 0;
            changed = 1;
        }
    }
    return changed;
}
}
