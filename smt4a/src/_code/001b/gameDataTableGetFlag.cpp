#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the byte at 0x21610 of the game-data table. */
u8 gameDataTableGetFlag(void)
{
    return g_gameDataBlocks.saveBlock->body.unk21588;
}

} /* extern "C" */
