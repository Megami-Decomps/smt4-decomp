#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

int FUN_00334038(void)
{
    PadState *pad = gameGetPlayerData();

    return pad->unk1C;
}

} /* extern "C" */
