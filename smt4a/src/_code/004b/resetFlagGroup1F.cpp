#include "shard/Shard004B.h"
#include "shard/asdTMTexLoadMainHeap.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);

void resetFlagGroup1F(void)
{
    asdTMTexTableLoadSprites(0x1F);
    asdTMTexLoadMainHeap(0x1F, 0);
}

} /* extern "C" */
