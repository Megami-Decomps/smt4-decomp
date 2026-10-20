#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry14 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x2B (type 0), or NULL when out of range. */
Entry14 *MapNaviTable_GetCategoryRecord(u32 unused, u32 index)
{
    void *table = dataTableGet(0x2B, 0);
    Entry14 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
