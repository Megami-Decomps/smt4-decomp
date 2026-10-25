#include "shard/PadState.h"
#include "script/ScriptArgs.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

u32 FUN_002f7bf0(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult((int)pad->unk1E);
    return 1;
}

} /* extern "C" */
