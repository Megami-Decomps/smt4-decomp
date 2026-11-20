#include "map/MapObjectRecords.h"
#include "gamedata/DataTable.h"

extern "C" {

extern s32 g_aocSystem;

s32 groupedFileTablesCountRecordsOfKind(s32 system, s32 kind, s32 arg);
void *dataSetGetRecordByIndex(s32 system, u32 index);

/* Returns entry `index` of data table 45: from the base table, then from the add-on content's entries (which follow it); NULL past both. */
MapObjRecord *mapObjGetCombinedEntry(u32 index)
{
    void *table = dataTableGet(45, 0);
    MapObjRecord *entries = (MapObjRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= groupedFileTablesCountRecordsOfKind(g_aocSystem, 37, 0) + count) {
        return NULL;
    }
    return (MapObjRecord *)dataSetGetRecordByIndex(g_aocSystem, index - count);
}

} /* extern "C" */
