#include "gamedata/GamePlayerData.h"

extern "C" {

/* Restores the player's HP and MP to their maximums. */
void FUN_00333edc(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    player->hp = player->maxHp;
    player->mp = player->maxMp;
}

} /* extern "C" */
