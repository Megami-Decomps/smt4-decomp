#include "gamedata/DataTable.h"
#include "addon/AocSystem.h"

extern "C" {

typedef struct Table23Section2Record {
    /* 0x00 */ u8 unk00[0x20];
} Table23Section2Record; /* 0x20 bytes */

/* Returns entry `index` of data table 0x23: the base entries first, then the add-on ones; NULL when out of range. */
Table23Section2Record *aocDataTable23GetEntry(u32 index)
{
    void *table = dataTableGet(0x23, 2);
    Table23Section2Record *entries = static_cast<Table23Section2Record *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    s32 extraCount = g_aocSystem->table23[2].count;
    Table23Section2Record *extraEntries = (Table23Section2Record *)g_aocSystem->table23[2].records;
    if (index < extraCount + count) {
        return &extraEntries[index - count];
    }
    return NULL;
}

} /* extern "C" */
