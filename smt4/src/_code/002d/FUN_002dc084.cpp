#include "shard/PadState.h"

extern "C" {

int scrSetResult(int result);
extern PadState *gameGetPlayerData(void);

u32 FUN_002dc084(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult(pad->unk76);
    return 1;
}

} /* extern "C" */
