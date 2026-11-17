#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the byte at 0x27E32 of the game data table's block at 0x88. */
u8 FUN_002a46b8(void)
{

    GameSaveBodyA *save = &g_gameDataBlocks.saveBlock->body;
    return save->unk27E32;
}

} /* extern "C" */
