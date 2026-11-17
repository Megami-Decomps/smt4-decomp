#include "gamedata/GamePlayerData.h"

extern "C" {

/* Clears the given ailment bits of the player. */
void padClearBits(u16 mask)
{
    PlayerDataIV *player = gameGetPlayerData();

    player->ailments = player->ailments & ~mask;
}

} /* extern "C" */
