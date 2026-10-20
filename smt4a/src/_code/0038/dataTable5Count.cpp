#include "shard/Shard0038.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable5Count(void)
{
    dataTableGetCount(dataTableGet(5, 4));
}

} /* extern "C" */
