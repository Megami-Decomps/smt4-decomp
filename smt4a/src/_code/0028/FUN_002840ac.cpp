#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {


/* Returns the address of the member at 0x27EA8 of the game-data table. */
u8 *FUN_002840ac(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.block27E20;
}

} /* extern "C" */
