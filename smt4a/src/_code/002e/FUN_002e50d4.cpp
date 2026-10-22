#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the word at 0x21E18 of the game-data table. */
u32 FUN_002e50d4(void)
{
    return g_gameDataBlocks.saveBlock->save.sub.runtime.unk21D90;
}

} /* extern "C" */
