#include "shard/Shard0049.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry18 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2B (type 1), or NULL when out of range. */
Entry18 *dataTable2BType1GetEntry(u32 unused, u32 index)
{
    void *table = dataTableGet(0x2B, 1);
    Entry18 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
