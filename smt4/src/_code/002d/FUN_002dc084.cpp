#include "shard/PadState.h"
#include "script/ScriptArgs.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

u32 FUN_002dc084(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult(pad->unk76);
    return 1;
}

} /* extern "C" */
