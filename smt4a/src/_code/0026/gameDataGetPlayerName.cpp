#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

/* Returns the player's name in the save body. */
u8 *gameDataGetPlayerName(void)
{
    return g_gameDataBlocks.saveBlock->body.runtime.playerName;
}

} /* extern "C" */
