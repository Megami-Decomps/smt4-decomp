#include "shard/Shard0049.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

void dataTable17Count(void)
{
    dataTableGetCount(dataTableGet(0x17, 1));
}

} /* extern "C" */
