#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

void playerClearFlagMask(u16 mask)
{
    PlayerData *player = gameGetPlayerData();

    player->unk5E &= ~mask;
}

} /* extern "C" */
