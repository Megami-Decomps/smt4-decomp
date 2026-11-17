#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x27EC4 of the game-data table. */
void gameDataSetTableFlag(u8 value)
{
    g_gameDataBlocks.saveBlock->body.tableFlag = value;
}

} /* extern "C" */
