#include "shard/Shard0049.h"
#include "map/mapDepart.h"

extern "C" {

extern void *dataTableGet(u32 index, u32 type);
extern u32 dataTableGetCount(void *table);

/* Number of entries in data table 0x2B/1; callers pass a view that is not read. */
s32 dataTable2BType1Count(void *unused)
{
    return dataTableGetCount(dataTableGet(0x2B, 1));
}

} /* extern "C" */
