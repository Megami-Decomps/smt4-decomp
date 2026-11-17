#include "gamedata/GamePlayerData.h"

extern "C" {

int FUN_00334038(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    return player->maxHp;
}

} /* extern "C" */
