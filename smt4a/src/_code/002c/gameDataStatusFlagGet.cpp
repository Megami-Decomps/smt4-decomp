#include "gamedata/GameSaveBlocks.h"
#include "code/Code002c_Smt4a.h"
extern "C" {
/* Reads an indexed game-data flag. */
s32 gameDataStatusFlagGet(u32 index)
{
    GameSaveBodyA *status = &g_gameDataBlocks.saveBlock->body;

    return status->status.flags[index];
}
}
