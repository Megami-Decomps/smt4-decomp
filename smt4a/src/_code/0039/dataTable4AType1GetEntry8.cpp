#include "shard/Shard0039.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern Entry8 *dataTableGetEntries(void *table);

/* Entry `index` of data table 0x4A (type 1). */
Entry8 *dataTable4AType1GetEntry8(s32 index)
{
    void *table = dataTableGet(0x4A, 1);

    return dataTableGetEntries(table) + index;
}

} /* extern "C" */
