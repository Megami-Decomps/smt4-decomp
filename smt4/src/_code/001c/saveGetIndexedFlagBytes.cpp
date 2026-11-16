#include "shard/GameDataBlocks.h"

extern "C" {

u8 *saveGetIndexedFlagBytes(void)
{
    return g_gameDataBlocks.saveBlock->block1EB80;
}

} /* extern "C" */
