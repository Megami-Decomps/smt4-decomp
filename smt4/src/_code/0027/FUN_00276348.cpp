/* NON_MATCHING: only the add-on count calls differ: retail loads g_aocSystem into r3 and copies it to r0 (ours loads r0 directly). */
#include "gamedata/DataTable.h"
#include "gamedata/Table48Record.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
extern "C" {
Table48Record *FUN_00387eb4(AocSystem *system, u32 index);

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
        return FUN_00387eb4(g_aocSystem, index - count);
    return NULL;
}

/* Find an ID in the base table followed by its downloadable-content extension. */
s32 FUN_00276348(s32 id)
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
