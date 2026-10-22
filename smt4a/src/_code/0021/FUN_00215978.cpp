#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Stores `value` in the byte at 0x21610 of the game-data table. */
void FUN_00215978(u8 value)
{
    g_gameDataBlocks.saveBlock->save.sub.unk21588 = value;
}

} /* extern "C" */
