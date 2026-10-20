#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

int FUN_0028d310(void)
{
    PadState *pad = gameGetPlayerData();

    return pad->unk2A;
}

} /* extern "C" */
