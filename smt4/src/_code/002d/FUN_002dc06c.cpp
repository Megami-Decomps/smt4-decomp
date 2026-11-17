#include "script/ScriptArgs.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 FUN_002dc06c(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    scrSetResult((int)player->hp);
    return 1;
}

} /* extern "C" */
