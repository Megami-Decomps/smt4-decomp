#include "shard/GameDataBlocks.h"

extern "C" {

u16 *gameDataBlocksGetCounterPtr(void)
{
    return g_gameDataBlocks.smallBlock;
}

} /* extern "C" */
