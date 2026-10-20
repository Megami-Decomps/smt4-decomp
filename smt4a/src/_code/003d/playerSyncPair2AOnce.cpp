#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

void playerSyncPair2AOnce(void)
{
    PlayerData *player = gameGetPlayerData();

    player->unk2A = player->unk1C;
    player->unk2C = player->unk1E;
}

} /* extern "C" */
