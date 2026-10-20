#include "shard/Shard0035.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable4ACount(void)
{
    dataTableGetCount(dataTableGet(0x4A, 3));
}

} /* extern "C" */
