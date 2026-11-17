#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Sets or clears bit `bit` of the flag block's bitmap at 0x167c. */
void gameFlagsWriteBit(s32 bit, s32 on)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 index = bit / 32;

    if (on != 0) {
        block->thirdBits[index] |= 1 << (bit % 32);
    } else {
        block->thirdBits[index] &= ~(1 << (bit % 32));
    }
}

} /* extern "C" */
