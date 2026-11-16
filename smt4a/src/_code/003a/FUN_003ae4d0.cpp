/* NON_MATCHING: only the add-on count calls differ: retail loads g_aocSystem into r3 and copies it to r0 (ours loads r0 directly). */
#include "gamedata/DataTable.h"
#include "gamedata/Table48Record.h"
#include "addon/aocMain.h"
extern "C" {
extern AocSystemA *g_aocSystem;
u32 groupedFileTablesCountRecordsOfKind(AocSystemA *system, s32 table, s32 section);
Table48Record *FUN_0046ea50(AocSystemA *system, u32 index);

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

static Table48Record *table48GetCombinedEntry(u32 index)
{
    void *table = dataTableGet(0x30, 0);
    Table48Record *entries = static_cast<Table48Record *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (index < count)
        return &entries[index];
    u32 extraCount = groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0);
    if (index < count + extraCount)
        return FUN_0046ea50(g_aocSystem, index - count);
    return NULL;
}

/* Find an ID in the base table followed by its downloadable-content extension. */
s32 FUN_003ae4d0(s32 id)
{
    for (s32 index = 0;
         index < static_cast<s32>(tableSectionCount(0x30, 0) + groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x27, 0));
         ++index) {
        Table48Record *entry = table48GetCombinedEntry(index);
        if (entry->id != -1 && entry->id == id)
            return index;
    }
    return -1;
}
}
