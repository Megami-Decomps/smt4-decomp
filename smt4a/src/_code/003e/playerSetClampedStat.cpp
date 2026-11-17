#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

static inline s32 playerClampPositive(s32 value)
{
    if (value < 1)
        value = 1;
    return value;
}

/* Sets the player value to `value` clamped to at least 1, but never above the player's maximum. */
void playerSetClampedStat(s32 value)
{
    PlayerDataA *player = gameGetPlayerData();
    s32 max = player->maxHp;

    player->hp = value <= max ? playerClampPositive(value) : max;
}

} /* extern "C" */
