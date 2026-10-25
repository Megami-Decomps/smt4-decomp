#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "shard/FUN_00333574.h"

extern "C" {


/* Clears byte 2 of the game data blocks and sets the given bits in their flag word. */
void FUN_00333574(u32 bits)
{
    g_gameDataBlocks.unk02 = 0;
    g_gameDataBlocks.flags |= bits;
}

} /* extern "C" */
