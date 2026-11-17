#include "gamedata/MapSaveBlockA.h"

extern "C" {
// Set or clear one bit in the first game flag bank.
void FUN_00352e54(s32 bit, s32 enabled)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    s32 word = bit / 32;
    s32 shift = bit % 32;
    if (enabled != 0) {
        flags->flagBits[word] |= 1 << shift;
    } else {
        flags->flagBits[word] &= ~(1 << shift);
    }
}
}
