#include "gamedata/GamePlayerData.h"

extern "C" {

int FUN_00333fb0(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    return player->mp;
}

} /* extern "C" */
