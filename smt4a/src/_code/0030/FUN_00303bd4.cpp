/* NON_MATCHING: native's dead min/max comparisons and constant-index stores are omitted. */
#include "common.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {
void* sysMemClear(void* destination, u32 size);
u32 randBetween(u32 first, u32 last);
const void* aocRecordLookup83(u16 id);

u16 FUN_00303bd4(s32 mode)
{
    u16 candidates[200];
    // Retail clears 200 bytes, not the full halfword workspace.
    sysMemClear(candidates, 200);
    s32 count = 0;
    for (u32 flag = 0x3B7; flag < 0x47F; ++flag) {
        if (flagValueIsPositive(flag)) {
            candidates[count++] = (u16)flag;
        }
    }
    if (!count || !mode) {
        return 0;
    }
    if (mode == 1) {
        return candidates[randBetween(0, count - 1)];
    }
    if (mode == 2 || mode == 3) {
        // Both release paths keep index zero; their discarded record comparison selects nothing.
        aocRecordLookup83(candidates[0]);
        return candidates[0];
    }
    return 0;
}
}
