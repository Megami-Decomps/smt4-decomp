#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable3Type0Count(void)
{
    dataTableGetCount(dataTableGet(3, 0));
}

} /* extern "C" */
