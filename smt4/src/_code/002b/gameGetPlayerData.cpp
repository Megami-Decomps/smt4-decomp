#include "gamedata/GamePlayerData.h"

extern "C" {

PlayerDataIV *gameGetPlayerData(void)
{
    return &g_gameDataBlocks.saveBlock->body.slots.player;
}

} /* extern "C" */
