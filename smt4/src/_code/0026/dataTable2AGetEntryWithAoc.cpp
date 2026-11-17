#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 data[0x34];
} TableEntry;



u32 dataTableGet(u32 id, u32 section);
u32 dataTableGetCount(u32 table);
TableEntry *dataTableGetEntries(void);
TableEntry *dataPackageGetDollarRecord(AocSystem *aoc, u32 index);

/* Returns entry `index` of data table 0x2A, continuing into the add-on content table past its end (NULL when out of range). */
TableEntry *dataTable2AGetEntryWithAoc(u32 index)
{
    u32 table = dataTableGet(0x2A, 0);
    TableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x24, 0) + count) {
        return dataPackageGetDollarRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
