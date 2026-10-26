/* NON_MATCHING: retail unrolls the search by two and its three exits share one nullable derived-to-base style tail (cmp r0,#0; addne r0,r0,#4); the direct payload search folds its exits. Tried: base-class record with early return (unrolled, per-exit checks), found-pointer break and inline finder (no unroll). */
#include "gamedata/X14_Table21.h"

/* Find the payload belonging to an ID in the first section of table 21. */
extern "C" u8 *FUN_00241a64(u32 id)
{
    void *table = dataTableGet(21, 0);
    Table21Entry *entries = (Table21Entry *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (s32 i = 0; (u32)i < count; ++i) {
        if (entries[i].id == id) {
            return entries[i].data.payload;
        }
    }
    return NULL;
}
