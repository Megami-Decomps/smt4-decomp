#include "shard/Shard003C.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable5Type9Count(void)
{
    dataTableGetCount(dataTableGet(5, 9));
}

} /* extern "C" */
