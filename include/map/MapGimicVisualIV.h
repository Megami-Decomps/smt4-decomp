#ifndef MAP_MAPGIMICVISUALIV_H
#define MAP_MAPGIMICVISUALIV_H
#include "common.h"
#include <stddef.h>
struct MapGimicVisualRecordIV {
    u8 active;
    u8 unk01[3];
    f32 position[4];
    u8 unk14[2];
    u16 kind;
    u8 unk18[4];
    u32 handle;
    u8 unk20[8];
};
struct MapGimicVisualStateIV {
    u8 unk00[0x1C];
    MapGimicVisualRecordIV records[24];
};
typedef char MapGimicVisualRecordIVLayoutCheck[(sizeof(MapGimicVisualRecordIV) == 0x28 && offsetof(MapGimicVisualRecordIV, kind) == 0x16 && offsetof(MapGimicVisualRecordIV, handle) == 0x1C && offsetof(MapGimicVisualStateIV, records) == 0x1C) ? 1 : -1];
#endif
