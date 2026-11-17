#include "gamedata/GameSaveBlocks.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

u8 gameSaveWorkGetState(void)
{
    GameSaveBodyA *body = &g_gameDataBlocks.saveBlock->body;
    return body->saveState;
}

} /* extern "C" */
