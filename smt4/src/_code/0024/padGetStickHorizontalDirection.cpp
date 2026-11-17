#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* 5 when pushed left past -8, 4 when pushed right past 8, otherwise 1. */
u32 padGetStickHorizontalDirection(void)
{
    PlayerDataIV *stick = gameGetPlayerData();
    u32 direction;

    if (stick->alignment <= -9) {
        direction = 5;
    } else if (stick->alignment >= 9) {
        direction = 4;
    } else {
        direction = 1;
    }
    return direction;
}

} /* extern "C" */
