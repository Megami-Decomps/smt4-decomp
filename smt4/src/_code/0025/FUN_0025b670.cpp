#include "addon/aocMain.h"
#include "addon/AocSystem.h"

#include "gamedata/MsSearchTable.h"

extern "C" {

MsSearchRecord *FUN_00387eb4(AocSystem *system, u32 index);

/* Returns search mark `index` (ms_search_Table.tbb): from the base table, then from the add-on content's entries (which follow it); NULL past both. */
MsSearchRecord *FUN_0025b670(u32 index)
{
    void *table = dataTableGet(48, 0);
    MsSearchRecord *entries = msSearchRecords(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= groupedFileTablesCountRecordsOfKind(g_aocSystem, 39, 0) + count) {
        return NULL;
    }
    return FUN_00387eb4(g_aocSystem, index - count);
}

} /* extern "C" */
