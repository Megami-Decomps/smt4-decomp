#include "shard/Shard004B.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable33GroupCount(u32 unused, s32 group)
{
    dataTableGetCount(dataTableGet(0x33, group + 1));
}

} /* extern "C" */
