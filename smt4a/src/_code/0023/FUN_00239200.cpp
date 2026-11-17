#include "gamedata/GameSaveBlocks.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Returns the address of the block at 0x28390 of the save body. */
u8 *FUN_00239200(void)
{
    return g_gameDataBlocks.saveBlock->body.tail.block28390;
}

} /* extern "C" */
