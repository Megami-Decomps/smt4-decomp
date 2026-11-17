#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* Direction 4 (right) triggers at x >= 800, direction 5 (left) at x <= -800. */
u32 padStickDirectionIsDown(int direction)
{
    PlayerDataIV *stick = gameGetPlayerData();

    if (direction != 4) {
        if (direction == 5 && stick->alignment <= -800) {
            return 1;
        }
        return 0;
    }
    if (stick->alignment >= 800) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
