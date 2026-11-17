#include "gamedata/GamePlayerData.h"

extern "C" {
extern int gameFlagIsSet(u32 id);

u32 FUN_0025cc54(void)
{
    PlayerDataIV *player;

    if (gameFlagIsSet(0x410) != 0) {
        player = gameGetPlayerData();
        if (player->equipped.gun != 0 && player->equipped.bullets != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
