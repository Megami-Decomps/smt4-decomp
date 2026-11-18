#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct Entry0030f5e0 {
    /* 0x00 */ u8 data[8];
} Entry0030f5e0;



Entry0030f5e0 *contentEntryGetFromFiles1(AocSystem *aoc, u32 index);

/* Entry `index` of data table 0x29's section 1, continuing into the add-on content's entries (NULL past the end). */
Entry0030f5e0 *contentEntryGetB(u32 index)
{
    void *table = dataTableGet(0x29, 1);
    Entry0030f5e0 *entries = reinterpret_cast<Entry0030f5e0 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x23, 1) + count) {
        return contentEntryGetFromFiles1(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
