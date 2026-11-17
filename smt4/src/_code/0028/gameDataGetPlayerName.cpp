#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

u8 *gameDataGetPlayerName(void)
{
    return g_gameDataBlocks.saveBlock->body.playerName.name;
}

} /* extern "C" */
