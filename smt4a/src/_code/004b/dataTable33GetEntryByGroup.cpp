#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern EntryD0 *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x33 (type group + 1), or NULL when out of range. */
EntryD0 *dataTable33GetEntryByGroup(u32 unused, s32 group, u32 index)
{
    void *table = dataTableGet(0x33, group + 1);
    EntryD0 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
