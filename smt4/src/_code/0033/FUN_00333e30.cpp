#include "gamedata/GamePlayerData.h"

extern "C" {
extern int gameFlagIsSet(u32 id);

/* Adds `delta` to the player's alignment (clamped to -999..999) unless one of the flags 0x1FD-0x1FF is set. */
void FUN_00333e30(int delta)
{
    PlayerDataIV *player;

    if (((gameFlagIsSet(0x1fd) == 0) && (gameFlagIsSet(0x1fe) == 0)) &&
        (gameFlagIsSet(0x1ff) == 0)) {
        player = gameGetPlayerData();
        delta = player->alignment + delta;
        if (delta < -999) {
            delta = -999;
        } else if (delta >= 1000) {
            delta = 999;
        }
        player->alignment = (s16)delta;
    }
}

} /* extern "C" */
