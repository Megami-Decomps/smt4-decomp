#include "shard/PadState.h"
#include "script/ScriptArgs.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

u32 FUN_002dc06c(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult((int)pad->unk2A);
    return 1;
}

} /* extern "C" */
