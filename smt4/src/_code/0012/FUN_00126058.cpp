#include "shard/W6_W6Match2_QuerySlots.h"

extern "C" {
extern QuerySlot DAT_004c5634[4];

// Clears unprotected pending flags and reports whether any slot was changed.
u32 FUN_00126058()
{
    u32 changed = 0;
    for (s32 index = 0; index < 4; ++index) {
        QuerySlot *slot = (u32)index >= 4 ? NULL : &DAT_004c5634[index];
        if (slot->status.pending != 0 && !(slot->status.flags & 4)) {
            slot->status.pending = 0;
            changed = 1;
        }
    }
    return changed;
}
}
