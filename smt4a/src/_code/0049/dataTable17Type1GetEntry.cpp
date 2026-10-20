#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry8C *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x17 (type 1), or NULL when out of range. */
Entry8C *dataTable17Type1GetEntry(u32 unused, u32 index)
{
    void *table = dataTableGet(0x17, 1);
    Entry8C *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
