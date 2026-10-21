/* NON_MATCHING: retail prefix loads g_aocSystem then forces its query result to zero; missing optimized/stubbed AOC query cannot be expressed as honest dead code. */
#include "gamedata/DataTable.h"

extern "C" {
// Look up one four-byte record in table five's ninth section.
u32 *FUN_00248620(u32 index)
{
    void *section = dataTableGet(5, 9);
    u32 *entries = (u32 *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    if (index >= count) {
        return NULL;
    }
    return entries + index;
}
}
