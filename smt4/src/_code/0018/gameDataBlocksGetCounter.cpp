#include "shard/GameDataBlocks.h"

extern "C" {

u16 gameDataBlocksGetCounter(void)
{
    return *g_gameDataBlocks.smallBlock;
}

} /* extern "C" */
