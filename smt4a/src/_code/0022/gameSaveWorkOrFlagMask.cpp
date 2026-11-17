#include "gamedata/GameSaveBlocks.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void gameSaveWorkOrFlagMask(s32 flagIndex, u8 mask)
{
    GameSaveDataA *save = g_gameDataBlocks.saveBlock;
    GameSaveBodyA *body = &save->body;
    body->work.savedFlags[flagIndex] |= mask;
}

} /* extern "C" */
