#include "shard/Shard0031.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 *dataTableGetEntries(void *table);

/* Pointer to entry `index` of data table 0x4A (type 3). */
u32 *dataTable4AGetEntry(s32 index)
{
    void *table = dataTableGet(0x4A, 3);

    return dataTableGetEntries(table) + index;
}

} /* extern "C" */
