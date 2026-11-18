#include "addon/aocMain.h"
#include "code/Code0027_Smt4.h"
#include "addon/AocSystem.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry {
    u8 data[0x28];
} Entry;



extern Entry *dataFindGroupedRecord(AocSystem *system, u32 index);

/* Returns entry `index` of data table 0x31, or of the AOC system's extra entries that follow it; NULL when out of range. */
Entry *FUN_0027ee24(u32 index)
{
    void *table = dataTableGet(0x31, 0);
    Entry *entries = static_cast<Entry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x26, 0) + count) {
        return dataFindGroupedRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
