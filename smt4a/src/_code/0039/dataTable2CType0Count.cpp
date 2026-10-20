#include "shard/Shard0039.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2CType0Count(void)
{
    dataTableGetCount(dataTableGet(0x2C, 0));
}

} /* extern "C" */
