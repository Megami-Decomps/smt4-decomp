#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

int FUN_00333fb0(void)
{
    PadState *pad = gameGetPlayerData();

    return pad->unk2C;
}

} /* extern "C" */
