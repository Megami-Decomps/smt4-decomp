#include "shard/Shard0033.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry8 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2D (type 5), or NULL when out of range. */
Entry8 *dataTable2DGetEntry(u32 index)
{
    void *table = dataTableGet(0x2D, 5);
    Entry8 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

} /* extern "C" */
