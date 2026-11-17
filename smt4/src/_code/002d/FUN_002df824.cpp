#include "gamedata/MapSaveBlock.h"

extern "C" {

/* Sets or clears bit `index` of the map block's flag words. */
void FUN_002df824(s32 index, s32 value)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 word = index / 32;

    if (value != 0) {
        block->flagBits[word] |= 1 << (index % 32);
    } else {
        block->flagBits[word] &= ~(1 << (index % 32));
    }
}

}
