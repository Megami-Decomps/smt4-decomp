#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Clears byte 2 of the game data blocks and sets the given bits in their flag word. */
void gameDataBlocksOrFlagsClearUnk02(u32 bits)
{
    g_gameDataBlocks.noFlags = 0;
    g_gameDataBlocks.flags |= bits;
}

} /* extern "C" */
