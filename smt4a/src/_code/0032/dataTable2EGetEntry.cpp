#include "shard/Shard0032.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry2C *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2E (type 2), or NULL when out of range. */
Entry2C *dataTable2EGetEntry(u32 index)
{
    void *table = dataTableGet(0x2E, 2);
    Entry2C *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
