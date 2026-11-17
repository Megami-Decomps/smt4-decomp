#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Returns whether flag `flag` is set. */
u8 gameFlagIsSetByBlock(s32 flag)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;

    return (block->clearedGroups[index] & (1 << bit)) != 0;
}

} /* extern "C" */
