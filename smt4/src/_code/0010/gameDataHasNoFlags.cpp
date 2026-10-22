#include "shard/GameDataBlocks.h"

extern "C" {

/* Reads the signed byte at offset 2 of the game data block. */
s32 gameDataHasNoFlags(void)
{
    return g_gameDataBlocks.noFlags;
}

} /* extern "C" */
