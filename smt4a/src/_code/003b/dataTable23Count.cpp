#include "shard/Shard003B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable23Count(void)
{
    dataTableGetCount(dataTableGet(0x23, 9));
}

} /* extern "C" */
