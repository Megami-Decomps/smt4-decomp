/* NON_MATCHING: id and table base swap registers (r9/r8); retail also saves an unused sl. */
#include "common.h"

struct TableEntry {
    u32 key;   // 0x00, zero when the entry is unused
    u32 limit; // 0x04
};

extern "C" {

extern TableEntry g_stockLimitTable[132]; /* 0x54eb34 */
s32 FUN_00102c58(u32 id, u32 key, u32 limit);

// Find the first used entry whose limit does not exceed `maximum` and that FUN_00102c58 accepts for `id`;
// returns its index (0x85 when none) and stores its limit in `limitOut`.
u32 FUN_0043872c(u32 id, u32 maximum, u32 *limitOut)
{
    for (s32 i = 0; i < 132; i++) {
        TableEntry *entry = &g_stockLimitTable[i];
        if (entry->key != 0 && entry->limit <= maximum && FUN_00102c58(id, entry->key, entry->limit) == 0) {
            *limitOut = entry->limit;
            return i & 0xff;
        }
    }
    return 0x85;
}

} /* extern "C" */
