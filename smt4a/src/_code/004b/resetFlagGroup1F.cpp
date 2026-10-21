#include "shard/Shard004B.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);
extern void asdTMTexLoadMainHeap(s32 id, s32 index);

void resetFlagGroup1F(void)
{
    asdTMTexTableLoadSprites(0x1F);
    asdTMTexLoadMainHeap(0x1F, 0);
}

} /* extern "C" */
