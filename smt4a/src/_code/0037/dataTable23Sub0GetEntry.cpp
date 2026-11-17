#include "common.h"
#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct Table23Entry {
    /* 0x00 */ u8 unk00[0x20];
} Table23Entry; /* 0x20 */

/* Returns entry `index` of data table 0x23/0, continuing into the AOC content entries after the base ones; NULL when out of range. */
Table23Entry *dataTable23Sub0GetEntry(u32 index)
{
    void *table = dataTableGet(0x23, 0);
    Table23Entry *entries = static_cast<Table23Entry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    s32 extraCount = g_aocSystem->table23[0].count;
    Table23Entry *extraEntries = (Table23Entry *)g_aocSystem->table23[0].records;
    if (index < extraCount + count) {
        return &extraEntries[index - count];
    }
    return NULL;
}

} /* extern "C" */
