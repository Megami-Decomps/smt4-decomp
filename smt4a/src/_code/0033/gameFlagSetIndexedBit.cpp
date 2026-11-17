#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Sets or clears one bit of the flag word array at 0xD4C in the game flag block. */
void gameFlagSetIndexedBit(s32 flag, s32 value)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 index = flag / 32;
    s32 bit = flag % 32;
    u32 mask = 1 << bit;

    if (value != 0) {
        block->blockBits[index] |= mask;
    } else {
        block->blockBits[index] &= ~mask;
    }
}

} /* extern "C" */
