#include "script/ScriptArgs.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 FUN_002f7bf0(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    scrSetResult((int)player->maxMp);
    return 1;
}

} /* extern "C" */
