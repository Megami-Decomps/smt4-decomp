#include "shard/Shard0038.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2ECount(void)
{
    dataTableGetCount(dataTableGet(0x2E, 2));
}

} /* extern "C" */
