#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the address of the member at 0x28418 of the game-data table. */
u8 *FUN_00239200(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.block28390;
}

} /* extern "C" */
