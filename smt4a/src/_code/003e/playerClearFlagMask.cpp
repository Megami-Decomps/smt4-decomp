#include "shard/Shard003E.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

void playerClearFlagMask(u16 mask)
{
    PlayerDataA *player = gameGetPlayerData();

    player->ailments &= ~mask;
}

} /* extern "C" */
