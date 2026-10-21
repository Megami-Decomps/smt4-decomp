/* NON_MATCHING: retail tests enabled before calculating the word and mask; compiler schedules it afterward. */
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
    u32 bits = map->flags[flagIndex / 32];
    u32 mask = 1u << (flagIndex % 32);
    if (enabled != 0) {
        bits |= mask;
    } else {
        bits &= ~mask;
    }
    map->flags[flagIndex / 32] = bits;
}
