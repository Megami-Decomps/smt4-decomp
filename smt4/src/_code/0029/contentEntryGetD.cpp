#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct Entry00291ba4 {
    /* 0x00 */ u8 data[0x2c];
} Entry00291ba4;

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);
Entry00291ba4 *aocPackagesGetHashTable4Entry(AocSystem *aoc, u32 index);

/* Entry `index` of data table 0x29's section 4, continuing into the add-on content's entries (NULL past the end). */
Entry00291ba4 *contentEntryGetD(u32 index)
{
    void *table = dataTableGet(0x29, 4);
    Entry00291ba4 *entries = reinterpret_cast<Entry00291ba4 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x23, 4) + count) {
        return aocPackagesGetHashTable4Entry(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
