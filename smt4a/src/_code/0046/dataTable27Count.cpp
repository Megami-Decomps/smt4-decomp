#include "shard/Shard0046.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable27Count(void)
{
    dataTableGetCount(dataTableGet(0x27, 0));
}

} /* extern "C" */
