#include "shard/Shard003C.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable2FType2Count(void)
{
    dataTableGetCount(dataTableGet(0x2F, 2));
}

} /* extern "C" */
