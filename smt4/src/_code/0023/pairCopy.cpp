#include "common.h"
#include "shard/W6_W6Match3_BattleQueue.h"

extern "C" {

void pairCopy(u32 *src, u32 *dst)
{
    dst[0] = src[0];
    dst[1] = src[1];
}

} /* extern "C" */
