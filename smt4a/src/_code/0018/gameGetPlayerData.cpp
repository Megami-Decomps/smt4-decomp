#include "gamedata/GamePlayerData.h"
#include "gamedata/GameSaveBlocks.h"

extern "C" {

PlayerDataA *gameGetPlayerData(void)
{
    return &g_gameDataBlocks.saveBlock->body.slots.hero;
}

} /* extern "C" */
