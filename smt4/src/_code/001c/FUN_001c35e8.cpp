#include "shard/GameDataBlocks.h"

extern "C" {

u8 *FUN_001c35e8(void)
{
    return g_gameDataBlocks.saveBlock->block1EB80;
}

} /* extern "C" */
