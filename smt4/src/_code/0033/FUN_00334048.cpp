#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

int FUN_00334048(void)
{
    PadState *pad = gameGetPlayerData();

    return pad->unk1E;
}

} /* extern "C" */
