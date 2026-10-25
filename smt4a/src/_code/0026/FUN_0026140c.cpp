#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {


/* Returns the address of the member at 0x21550 of the game-data table. */
u8 *FUN_0026140c(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.block214C8;
}

} /* extern "C" */
