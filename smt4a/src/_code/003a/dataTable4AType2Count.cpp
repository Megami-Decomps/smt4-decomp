#include "shard/Shard003A.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

/* The number of entries of data table 0x4A (type 2). */
u32 dataTable4AType2Count(void)
{
    return dataTableGetCount(dataTableGet(0x4A, 2));
}

} /* extern "C" */
