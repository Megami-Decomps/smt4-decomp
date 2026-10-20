#include "shard/Shard0046.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry40 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x28 (type 1), or NULL when out of range. */
Entry40 *dataTable28Type1GetEntry(u32 unused, u32 index)
{
    void *table = dataTableGet(0x28, 1);
    Entry40 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
