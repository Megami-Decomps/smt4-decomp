#include "shard/Shard0032.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry2C *dataTableGetEntries(void *table);

/* Entry `index` of data table 0x4A (type 0). */
Entry2C *dataTable4AGetEntry2C(s32 index)
{
    void *table = dataTableGet(0x4A, 0);

    return dataTableGetEntries(table) + index;
}

} /* extern "C" */
