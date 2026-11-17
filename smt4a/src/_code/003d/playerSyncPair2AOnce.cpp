#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

void playerSyncPair2AOnce(void)
{
    PlayerDataA *player = gameGetPlayerData();

    player->hp = player->maxHp;
    player->mp = player->maxMp;
}

} /* extern "C" */
