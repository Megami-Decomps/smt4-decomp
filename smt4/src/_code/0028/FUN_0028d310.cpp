#include "gamedata/GamePlayerData.h"

extern "C" {

int FUN_0028d310(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    return player->hp;
}

} /* extern "C" */
