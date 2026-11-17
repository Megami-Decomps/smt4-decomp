#include "gamedata/GameSaveBlocks.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

/* Returns the game flag block that follows the map block in the save body. */
u8 *gameFlagBlockGet(void)
{
    return g_gameDataBlocks.saveBlock->body.flagBlock;
}

} /* extern "C" */
