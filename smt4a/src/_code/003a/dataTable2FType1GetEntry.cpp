#include "shard/Shard003A.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry20 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2F (type 1), or NULL when out of range. */
Entry20 *dataTable2FType1GetEntry(u32 index)
{
    void *table = dataTableGet(0x2F, 1);
    Entry20 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
