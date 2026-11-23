#include "shard/Shard003E.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 playerGetMaxMp(void)
{
    return gameGetPlayerData()->maxMp;
}

} /* extern "C" */
