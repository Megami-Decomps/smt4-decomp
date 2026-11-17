#include "shard/Shard003D.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* 5 when the player's value at +0x60 is at most -9, 4 when at least 9, else 1. */
u32 playerAlignmentClass(void)
{
    PlayerDataA *player = gameGetPlayerData();
    u32 result;

    if (player->alignment <= -9) {
        result = 5;
    } else if (player->alignment >= 9) {
        result = 4;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
