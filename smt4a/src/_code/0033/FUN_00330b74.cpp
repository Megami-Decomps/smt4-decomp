#include "shard/Shard0033.h"

extern "C" {

extern u32 dataTableFree(u32 id);

void FUN_00330b74(void)
{
    dataTableFree(0x46);
}

} /* extern "C" */
