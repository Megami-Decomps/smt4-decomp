#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* Adds `delta` to the player's halfword at +0x60, clamped to -999..999. */
void FUN_003dfdb4(s32 delta)
{
    PlayerDataA *player = gameGetPlayerData();

    delta = player->alignment + delta;
    if (delta < -999) {
        delta = -999;
    } else if (delta >= 1000) {
        delta = 999;
    }
    player->alignment = delta;
}

} /* extern "C" */
