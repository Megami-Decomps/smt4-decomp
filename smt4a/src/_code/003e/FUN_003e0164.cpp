#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

s32 FUN_003e0164(void)
{
    return gameGetPlayerData()->unk1E;
}

} /* extern "C" */
