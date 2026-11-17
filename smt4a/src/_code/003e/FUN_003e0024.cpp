#include "shard/Shard003E.h"
#include "code/Code003e.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

s32 FUN_003e0024(void)
{
    return gameGetPlayerData()->hp;
}

} /* extern "C" */
