#include "gamedata/MapSaveBlockA.h"

extern "C" {

s32 scrGetArg(s32 index);

/* Script command: stores argument 1 into the flag block's 16-bit value table at the index given by argument 0. */
u32 scrCommGameFlagValueSet(void)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    block->timedValues[scrGetArg(0)] = scrGetArg(1);
    return 1;
}

} /* extern "C" */
