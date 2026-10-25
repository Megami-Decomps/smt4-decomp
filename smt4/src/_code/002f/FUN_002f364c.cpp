#include "common.h"

struct MapToggleFlags {
    u8 unk000[0xc98]; // 0x000
    u32 flags[1];      // 0xc98
};

extern "C" MapToggleFlags* gameGetMapBlock();

// Set or clear one bit in the map's toggle-flag bank.
extern "C" void FUN_002f364c(s32 flagIndex, s32 enabled)
{
    MapToggleFlags* map = gameGetMapBlock();
    s32 word = flagIndex / 32;
    if (enabled != 0) {
        map->flags[word] |= 1 << (flagIndex % 32);
    } else {
        map->flags[word] &= ~(1 << (flagIndex % 32));
    }
}
