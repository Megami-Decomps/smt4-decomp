#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct Entry003a3070 {
    /* 0x00 */ u8 data[0x1c];
} Entry003a3070;

void *dataTableGet(s32 table, s32 slot);
Entry003a3070 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry003a3070 *contentEntryGetFromFiles2(AocSystemA *aoc, u32 index);

/* Entry `index` of data table 0x29's section 2, continuing into the add-on content's entries (NULL past the end). */
Entry003a3070 *contentEntryGetC(u32 index)
{
    void *table = dataTableGet(0x29, 2);
    Entry003a3070 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x23, 2) + count) {
        return contentEntryGetFromFiles2(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
