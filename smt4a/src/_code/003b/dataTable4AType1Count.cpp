#include "shard/Shard003B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable4AType1Count(void)
{
    dataTableGetCount(dataTableGet(0x4A, 1));
}

} /* extern "C" */
