#include "shard/PadState.h"

extern "C" {

int scrSetResult(int result);
extern PadState *gameGetPlayerData(void);

u32 FUN_002dc09c(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult((int)pad->unk2C);
    return 1;
}

} /* extern "C" */
