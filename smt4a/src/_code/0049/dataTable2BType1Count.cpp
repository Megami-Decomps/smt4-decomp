#include "shard/Shard0049.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2BType1Count(void)
{
    dataTableGetCount(dataTableGet(0x2B, 1));
}

} /* extern "C" */
