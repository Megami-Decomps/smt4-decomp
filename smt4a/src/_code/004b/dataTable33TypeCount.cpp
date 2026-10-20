#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable33TypeCount(u32 unused, u32 type)
{
    dataTableGetCount(dataTableGet(0x33, type));
}

} /* extern "C" */
