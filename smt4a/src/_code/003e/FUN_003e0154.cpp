#include "shard/Shard003E.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

s32 FUN_003e0154(void)
{
    return gameGetPlayerData()->unk1C;
}

} /* extern "C" */
