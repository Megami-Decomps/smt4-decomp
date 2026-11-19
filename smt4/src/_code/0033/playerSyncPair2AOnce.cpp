#include "gamedata/GamePlayerData.h"

extern "C" {

/* Restores the player's HP and MP to their maximums. */
void playerSyncPair2AOnce(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    player->hp = player->maxHp;
    player->mp = player->maxMp;
}

} /* extern "C" */
