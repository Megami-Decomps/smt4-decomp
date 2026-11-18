#include "shard/Shard003B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

/* The number of entries of data table 0x4A (type 1). */
u32 dataTable4AType1Count(void)
{
    return dataTableGetCount(dataTableGet(0x4A, 1));
}

} /* extern "C" */
