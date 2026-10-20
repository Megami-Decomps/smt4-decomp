#include "shard/Shard003A.h"

extern "C" {

extern u32 dataTableFree(u32 id);

void FUN_003a76b8(void)
{
    dataTableFree(0x44);
}

} /* extern "C" */
