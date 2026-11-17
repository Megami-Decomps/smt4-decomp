#include "shard/GameDataBlocks.h"

extern "C" {

u8 *saveGetIndexedFlagBytes(void)
{
    return g_gameDataBlocks.saveBlock->body.indexedFlags;
}

} /* extern "C" */
