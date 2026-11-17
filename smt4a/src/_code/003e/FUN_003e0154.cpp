#include "shard/Shard003E.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 FUN_003e0154(void)
{
    return gameGetPlayerData()->maxHp;
}

} /* extern "C" */
