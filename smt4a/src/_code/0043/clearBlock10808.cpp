#include "shard/Shard0043.h"

extern "C" {

extern void sysMemClear(void *ptr, u32 size);

void clearBlock10808(void *block)
{
    sysMemClear(block, 0x10808);
}

} /* extern "C" */
