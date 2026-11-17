#include "gamedata/GameSaveBlocks.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void saveWorkClearFlagMask(s32 flagIndex, u8 mask)
{
    GameSaveBodyA *body = &g_gameDataBlocks.saveBlock->body;
    body->work.savedFlags[flagIndex] &= ~mask;
}

} /* extern "C" */
