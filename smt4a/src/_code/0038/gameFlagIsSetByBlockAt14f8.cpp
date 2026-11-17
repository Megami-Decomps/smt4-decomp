#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Returns whether flag `flag` is set (0 for flag numbers below 1). */
u32 gameFlagIsSetByBlockAt14f8(s32 flag)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 index;
    s32 bit;

    if (flag <= 0) {
        return 0;
    }
    index = flag / 32;
    bit = flag % 32;
    return (block->bits14F8[index] & (1 << bit)) != 0;
}

} /* extern "C" */
