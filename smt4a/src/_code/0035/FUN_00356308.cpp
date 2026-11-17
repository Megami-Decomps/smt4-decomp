#include "addon/aocMain.h"
#include "map/EnemySpawnState.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {


EnemySpawnRecord *packageFindIndexedTripleRecord(AocSystemA *aoc, u32 index);

/* Returns entry `index` of data table 0x29, continuing into the add-on content table past its end (NULL when out of range). */
const EnemySpawnRecord *FUN_00356308(u32 index)
{
    void *table = dataTableGet(0x29, 0);
    EnemySpawnRecord *entries = static_cast<EnemySpawnRecord *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    if (index < groupedFileTablesCountRecordsOfKind(g_aocSystem, 0x23, 0) + count) {
        return packageFindIndexedTripleRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
