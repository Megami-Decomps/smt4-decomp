#include "shard/Shard0034.h"

extern "C" {

extern u32 dataTableFree(u32 id);

void helpReleaseDataTable(void)
{
    dataTableFree(0xE);
}

} /* extern "C" */
