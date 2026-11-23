#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 btlPlayerMaxHp(PlayerDataA *player);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_00380890(void)
{
    scrSetResult(btlPlayerMaxHp(gameGetPlayerData()));
    return 1;
}
