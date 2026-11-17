#include "gamedata/MapSaveBlockA.h"

// Sets or clears a signed-index bit in the flag-work bank at 0x1670.
extern "C" void gameFlagsWriteBankBit(s32 id, s32 enabled)
{
    MapSaveBlockA* flags = gameFlagsGetBlock();
    s32 word = id / 32;
    s32 shift = id % 32;

    if (enabled != 0) {
        flags->bits1670[word] |= 1 << shift;
    } else {
        flags->bits1670[word] &= ~(1 << shift);
    }
}
