#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *FUN_001801a4(void);

void playerSyncPair2AOnce(void)
{
    PlayerData *player = FUN_001801a4();

    player->unk2A = player->unk1C;
    player->unk2C = player->unk1E;
}

} /* extern "C" */
