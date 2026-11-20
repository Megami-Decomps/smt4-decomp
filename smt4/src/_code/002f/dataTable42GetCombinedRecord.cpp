#include "addon/aocMain.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

/* Returns entry `index` of data table 42 section 1: from the base table, then from the add-on
 * content's records (package files of kind '$'), which follow it; NULL past both. */
DataTable42Record *dataTable42GetCombinedRecord(u32 index)
{
    void *table = dataTableGet(42, 1);
    DataTable42Record *entries = (DataTable42Record *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= groupedFileTablesCountRecordsOfKind(g_aocSystem, '$', 0) + count) {
        return NULL;
    }
    return dataArchiveGetMergedRecord(g_aocSystem, index - count);
}

} /* extern "C" */
