#include "shard/Shard004B.h"
#include "shard/dataTable33TypeCount.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

s32 dataTable33TypeCount(u8 *unused, s32 type)
{
    dataTableGetCount(dataTableGet(0x33, type));
}

} /* extern "C" */
