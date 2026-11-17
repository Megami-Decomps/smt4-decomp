#include "common.h"
#include "addon/AocSystemA.h"

/* A 0x10-byte record of data table 0x2d section 2. */
struct Table2dSection2Record {
    u8 data[0x10];
};

extern "C" {

void *dataTableGet(u32 category, u32 variant);
Table2dSection2Record *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Table2dSection2Record *contentEntryGetFromFiles4(AocSystemA *aoc, u32 index);

// Entry `index` of the base data table, continuing into the add-on content's tables (NULL past the end).
Table2dSection2Record *FUN_003563fc(u32 index)
{
    void *table = dataTableGet(0x2d, 2);
    Table2dSection2Record *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x25, 2) + count) {
        return contentEntryGetFromFiles4(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
