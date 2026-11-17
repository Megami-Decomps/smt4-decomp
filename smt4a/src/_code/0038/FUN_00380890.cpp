#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 FUN_002b4e7c(PlayerDataA *player);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_00380890(void)
{
    scrSetResult(FUN_002b4e7c(gameGetPlayerData()));
    return 1;
}
