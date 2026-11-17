#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the address of the member at 0x214B0 of the game-data table. */
u8 *saveGetIndexedFlagBytes(void)
{
    return g_gameDataBlocks.saveBlock->body.block21428;
}

} /* extern "C" */
