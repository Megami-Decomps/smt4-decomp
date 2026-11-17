#include "common.h"
#include "gamedata/MapSystemTable.h"
#include "gamedata/DataTableAccess_Smt4.h"

extern "C" {

/* Entry `index` of the table, or NULL past its end. */
static MapSystemMapRecord *tableEntry(void *table, u32 index)
{
    MapSystemMapRecord *entries = mapSystemMapRecords(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

/* Finds the map row (MapSystemTable.tbb table 2) whose id is `id`; stops at the -1 terminator (returns 0). */
MapSystemMapRecord *dataTableFindRecordById(s32 id)
{
    s32 i;

    for (i = 0; i < (s32)dataTableGetCount(dataTableGet(0x2e, 2)); i++) {
        MapSystemMapRecord *entry = tableEntry(dataTableGet(0x2e, 2), i);

        if (entry->mapId == -1) {
            return NULL;
        }
        if (entry->mapId == id) {
            return entry;
        }
    }
    return NULL;
}

} /* extern "C" */
