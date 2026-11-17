#include "gamedata/MapSaveBlock.h"

// Set or clear one bit in the map's toggle-flag bank.
extern "C" void FUN_002f364c(s32 flagIndex, s32 enabled)
{
    MapSaveBlock *map = gameGetMapBlock();
    s32 word = flagIndex / 32;
    if (enabled != 0) {
        map->markBits[word] |= 1 << (flagIndex % 32);
    } else {
        map->markBits[word] &= ~(1 << (flagIndex % 32));
    }
}
