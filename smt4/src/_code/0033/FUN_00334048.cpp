#include "gamedata/GamePlayerData.h"

extern "C" {

int FUN_00334048(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    return player->maxMp;
}

} /* extern "C" */
