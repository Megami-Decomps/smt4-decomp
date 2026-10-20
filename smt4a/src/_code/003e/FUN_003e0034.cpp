#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

s32 FUN_003e0034(void)
{
    return gameGetPlayerData()->unk2C;
}

} /* extern "C" */
