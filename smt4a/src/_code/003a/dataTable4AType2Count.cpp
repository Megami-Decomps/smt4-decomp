#include "shard/Shard003A.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable4AType2Count(void)
{
    dataTableGetCount(dataTableGet(0x4A, 2));
}

} /* extern "C" */
