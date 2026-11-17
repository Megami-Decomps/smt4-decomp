#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Sets or clears bit `index` of the flag block's flag words. */
void gameFlagsWriteWordBit(s32 index, s32 value)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 shift = index % 32;

    if (value != 0) {
        block->eventBits[word] |= 1 << shift;
    } else {
        block->eventBits[word] &= ~(1 << shift);
    }
}

}
