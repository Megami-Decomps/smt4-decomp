#include "shard/Shard0043.h"

extern "C" {

extern void sysMemClear(void *ptr, u32 size);

void initBlockE30(u16 *block)
{
    sysMemClear(block, 0xE30);
    *block = 3;
}

} /* extern "C" */
