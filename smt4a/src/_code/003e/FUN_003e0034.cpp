#include "shard/Shard003E.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 FUN_003e0034(void)
{
    return gameGetPlayerData()->mp;
}

} /* extern "C" */
