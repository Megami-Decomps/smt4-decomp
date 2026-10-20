#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry80 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x17 (type 0), or NULL when out of range. */
Entry80 *dataTable17Type0GetEntry(u32 unused, u32 index)
{
    void *table = dataTableGet(0x17, 0);
    Entry80 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
