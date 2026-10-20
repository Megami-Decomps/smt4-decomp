#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable33Type0Count(void)
{
    dataTableGetCount(dataTableGet(0x33, 0));
}

} /* extern "C" */
