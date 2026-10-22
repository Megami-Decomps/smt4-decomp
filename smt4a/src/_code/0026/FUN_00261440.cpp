#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the address of the member at 0x214B0 of the game-data table. */
u8 *FUN_00261440(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.block21428;
}

} /* extern "C" */
