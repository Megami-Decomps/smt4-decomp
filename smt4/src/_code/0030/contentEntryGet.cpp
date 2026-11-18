#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct ContentEntry00308cd4 {
    /* 0x00 */ u8 data[0x1c];
} ContentEntry00308cd4;




/* Entry `index` of data table 0x23's section 4, continuing into the add-on content's extra entries (NULL past the end). */
ContentEntry00308cd4 *contentEntryGet(u32 index)
{
    void *table = dataTableGet(0x23, 4);
    ContentEntry00308cd4 *entries = reinterpret_cast<ContentEntry00308cd4 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    AocSystem *aoc = g_aocSystem;
    s32 extra = aoc->table23[4].count;
    ContentEntry00308cd4 *extraEntries = (ContentEntry00308cd4 *)aoc->table23[4].records;
    return index < extra + count ? &extraEntries[index - count] : NULL;
}

} /* extern "C" */
