#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Sets or clears bit `index` of the bit set. */
void mapBlockBitSet(s32 index, s32 value)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->blockBits[word] |= 1 << (index % 32);
    } else {
        block->blockBits[word] &= ~(1 << (index % 32));
    }
}

} /* extern "C" */
