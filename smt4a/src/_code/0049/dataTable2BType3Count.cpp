#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2BType3Count(void)
{
    dataTableGetCount(dataTableGet(0x2B, 3));
}

} /* extern "C" */
