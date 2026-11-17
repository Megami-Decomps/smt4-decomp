#include "shard/Shard0037.h"
#include "shard/Shard003A.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry10 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x29 (type 5), or NULL when out of range. */
Entry10 *dataTable29GetEntry(u32 index)
{
    void *table = dataTableGet(0x29, 5);
    Entry10 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
