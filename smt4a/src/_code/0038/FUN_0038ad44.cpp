#include "gamedata/MapSaveBlockA.h"

extern "C" {

void scrSetResult(s32 result);

/* Script command: returns the game flags block's float at 0x15C4 as an integer. */
u32 FUN_0038ad44(void)
{
    scrSetResult((s32)gameFlagsGetBlock()->unk15C4);
    return 1;
}

} /* extern "C" */
