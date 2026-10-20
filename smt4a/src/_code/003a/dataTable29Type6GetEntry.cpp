#include "shard/Shard003A.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry10 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x29 (type 6), or NULL when out of range. */
Entry10 *dataTable29Type6GetEntry(u32 index)
{
    void *table = dataTableGet(0x29, 6);
    Entry10 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    return NULL;
}

} /* extern "C" */
