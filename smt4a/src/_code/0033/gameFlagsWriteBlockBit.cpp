#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Sets or clears flag bit `index`. */
void gameFlagsWriteBlockBit(s32 index, s32 set)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    if (set != 0) {
        block->bits14A8[word] |= 1 << shift;
    } else {
        block->bits14A8[word] &= ~(1 << shift);
    }
}

}
