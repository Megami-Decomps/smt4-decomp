#ifndef MAP_REGION_BOUNDS_H
#define MAP_REGION_BOUNDS_H
#include "common.h"
#include <stddef.h>

struct RegionBounds {
    f32 minimumX; // 0x00
    u8 unk04[4]; // 0x04
    f32 minimumZ; // 0x08
    f32 maximumX; // 0x0C
    u8 unk10[4]; // 0x10
    f32 maximumZ; // 0x14
    u32 kind; // 0x18
};
struct RegionBoundsTable {
    RegionBounds regions[128]; // 0x000
    s32 count; // 0xE00
};
typedef char RegionBoundsSizeCheck[sizeof(RegionBounds) == 0x1C ? 1 : -1];
typedef char RegionBoundsCountCheck[offsetof(RegionBoundsTable, count) == 0xE00 ? 1 : -1];
#endif
