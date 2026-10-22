#include "shard/GameDataBlocks.h"

extern "C" {

u32 gameDataGetWorkBlock(void)
{
    return (u32)g_gameDataBlocks.workBlock;
}

} /* extern "C" */
