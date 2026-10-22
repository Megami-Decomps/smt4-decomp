/* NON_MATCHING: retail preserves a nullable record-helper result; the direct payload search folds its exits. */
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
