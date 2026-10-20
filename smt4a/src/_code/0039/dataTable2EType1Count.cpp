#include "shard/Shard0039.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2EType1Count(void)
{
    dataTableGetCount(dataTableGet(0x2E, 1));
}

} /* extern "C" */
