#include "shard/PadState.h"
#include "script/ScriptArgs.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

u32 scrCommGetPlayerPadValue(void)
{
    PadState *pad = gameGetPlayerData();

    scrSetResult((int)pad->unk2C);
    return 1;
}

} /* extern "C" */
