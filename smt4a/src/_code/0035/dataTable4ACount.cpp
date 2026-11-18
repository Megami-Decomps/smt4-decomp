#include "shard/Shard0035.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

/* The number of entries of data table 0x4A (type 3). */
u32 dataTable4ACount(void)
{
    return dataTableGetCount(dataTableGet(0x4A, 3));
}

} /* extern "C" */
