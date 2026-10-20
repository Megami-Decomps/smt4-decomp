#include "shard/Shard0033.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry4 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2E (type 1), or NULL when out of range. */
Entry4 *dataTable2EType1GetEntry(u32 index)
{
    void *table = dataTableGet(0x2E, 1);
    Entry4 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
