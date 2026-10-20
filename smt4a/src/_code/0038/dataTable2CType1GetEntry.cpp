#include "shard/Shard0038.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry14 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2C (type 1), or NULL when out of range. */
Entry14 *dataTable2CType1GetEntry(u32 index)
{
    void *table = dataTableGet(0x2C, 1);
    Entry14 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
