#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* Copies the player's +0x1C/+0x1E pair to +0x2A/+0x2C (for both fetches) after clearing +0x5E. */
void playerSyncPair2A(void)
{
    PlayerDataA *first = gameGetPlayerData();
    PlayerDataA *second;

    first->ailments = 0;
    second = gameGetPlayerData();
    second->hp = second->maxHp;
    second->mp = second->maxMp;
    first->hp = first->maxHp;
    first->mp = first->maxMp;
}

} /* extern "C" */
