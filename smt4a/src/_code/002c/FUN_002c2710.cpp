#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "code/Code002c.h"

extern "C" {


/* Returns the address of the member at 0x1EF5C of the game-data table. */
u8 *FUN_002c2710(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.block1EED4;
}

} /* extern "C" */
