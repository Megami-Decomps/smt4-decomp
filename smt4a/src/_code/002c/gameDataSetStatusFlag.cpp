#include "gamedata/GameSaveBlocks.h"
extern "C" {
/* Writes an indexed game-data flag. */
void gameDataSetStatusFlag(u32 index, s8 value)
{
    GameSaveBodyA *status = &g_gameDataBlocks.saveBlock->body;
    status->status.flags[index] = value;
}
}
