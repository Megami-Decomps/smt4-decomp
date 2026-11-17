#include "script/ScriptArgs.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 FUN_002dc084(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    scrSetResult(player->level);
    return 1;
}

} /* extern "C" */
