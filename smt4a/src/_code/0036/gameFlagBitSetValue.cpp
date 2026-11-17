#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Sets or clears bit `index` of the bit set. */
void gameFlagBitSetValue(s32 index, s32 value)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->bits156C[word] |= 1 << (index % 32);
    } else {
        block->bits156C[word] &= ~(1 << (index % 32));
    }
}

} /* extern "C" */
