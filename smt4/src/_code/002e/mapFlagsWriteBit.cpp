#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Sets or clears bit `bit` of the map block's flag bitmap at 0x750. */
void mapFlagsWriteBit(s32 bit, s32 on)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 index = bit / 32;

    if (on != 0) {
        block->savedFlagBits[index] |= 1 << (bit % 32);
    } else {
        block->savedFlagBits[index] &= ~(1 << (bit % 32));
    }
}

} /* extern "C" */
