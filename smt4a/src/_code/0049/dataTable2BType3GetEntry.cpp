#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry10 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2B (type 3), or NULL when out of range. */
Entry10 *dataTable2BType3GetEntry(u32 unused, u32 index)
{
    void *table = dataTableGet(0x2B, 3);
    Entry10 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
