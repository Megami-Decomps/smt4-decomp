#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "util/FUN_002e5c2c.h"

extern "C" {


/* Returns the word at 0x2DB8 of the game-data table. */
u32 FUN_002e5c2c(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.unk02D30;
}

} /* extern "C" */
