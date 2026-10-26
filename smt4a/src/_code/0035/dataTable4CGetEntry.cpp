#include "shard/Shard0035.h"
#include "gamedata/DataTableAccess_Shard0035.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry30 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x4C (type 0), or NULL when out of range. */
Entry30 *dataTable4CGetEntry(u32 index)
{
    void *table = dataTableGet(0x4C, 0);
    Entry30 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
