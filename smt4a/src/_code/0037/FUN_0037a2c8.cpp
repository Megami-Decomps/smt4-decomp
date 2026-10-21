#include "shard/Shard0037.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);
extern void asdTMTexLoadMainHeap(s32 id, s32 value);

void FUN_0037a2c8(void)
{
    asdTMTexTableLoadSprites(0x24);
    asdTMTexLoadMainHeap(0x24, 0);
}

} /* extern "C" */
