#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

// Finds the first present entry with the active-selection flag.
extern "C" BtlEntry* btlMainFindActiveEntry(BtlMainState* state)
{
    for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
        u32 flags = state->entries[i].flags;
        if ((flags & 0x20) != 0 && (flags & BTL_ENTRY_FLAG_ACTIVE) != 0) {
            return &state->entries[i];
        }
    }
    return NULL;
}
