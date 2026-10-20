#include "shard/Shard0038.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry8 *dataTableGetEntries(void *table);

/* Entry `index` of data table 0x4A (type 2). */
Entry8 *dataTable4AGetEntry8(s32 index)
{
    void *table = dataTableGet(0x4A, 2);

    return dataTableGetEntries(table) + index;
}

} /* extern "C" */
