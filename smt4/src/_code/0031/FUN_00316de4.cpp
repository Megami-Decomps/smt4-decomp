#include "gamedata/MapSaveBlock.h"

extern "C" void FUN_00316de4(s32 index, s32 enabled)
{
    MapSaveBlock *flags = (MapSaveBlock*)gameGetMapBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    if (enabled == 0) {
        flags->testBits[word] &= ~(1 << bit);
    } else if ((flags->testBits[word] & (1 << bit)) == 0) {
        flags->testBits[word] |= 1 << bit;
    }
}
