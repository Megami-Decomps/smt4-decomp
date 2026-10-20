#include "shard/Shard0038.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry1C *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2C (type 4), or NULL when out of range. */
Entry1C *dataTable2CType4GetEntry(u32 index)
{
    void *table = dataTableGet(0x2C, 4);
    Entry1C *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
