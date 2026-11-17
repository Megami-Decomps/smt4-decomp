#include "shard/Shard003E.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 FUN_003e0164(void)
{
    return gameGetPlayerData()->maxMp;
}

} /* extern "C" */
