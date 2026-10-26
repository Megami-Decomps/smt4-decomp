#include "gamedata/DataTable.h"
#include "util/dataTableFileGetTable.h"
#include "gamedata/DataTableSlots.h"

extern "C" {

/* Looks up section `section` of the loaded file of table slot `table` (NULL data when out of range). */
void *dataTableGet(int table, int section)
{
    void *file;

    if ((u32)table < DATA_TABLE_SLOTS) {
        file = g_dataTableSlots[table].data;
    } else {
        file = 0;
    }
    return dataTableFileGetTable(reinterpret_cast<u32>(file), section);
}

} /* extern "C" */
