#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

s32 FUN_003e0024(void)
{
    return gameGetPlayerData()->unk2A;
}

} /* extern "C" */
