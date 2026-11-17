#include "script/ScriptArgs.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 scrCommGetPlayerPadValue(void)
{
    PlayerDataIV *player = gameGetPlayerData();

    scrSetResult((int)player->mp);
    return 1;
}

} /* extern "C" */
