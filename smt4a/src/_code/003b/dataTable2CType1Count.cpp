#include "shard/Shard003B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2CType1Count(void)
{
    dataTableGetCount(dataTableGet(0x2C, 1));
}

} /* extern "C" */
