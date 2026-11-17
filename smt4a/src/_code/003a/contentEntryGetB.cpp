#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct Entry003a2fc4 {
    /* 0x00 */ u8 data[8];
} Entry003a2fc4;

void *dataTableGet(s32 table, s32 slot);
Entry003a2fc4 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry003a2fc4 *contentEntryGetFromFiles1(AocSystemA *aoc, u32 index);

/* Entry `index` of data table 0x29's section 1, continuing into the add-on content's entries (NULL past the end). */
Entry003a2fc4 *contentEntryGetB(u32 index)
{
    void *table = dataTableGet(0x29, 1);
    Entry003a2fc4 *entries = dataTableGetEntries(table);
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
