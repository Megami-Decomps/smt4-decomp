#ifndef MAP_DISTANCEVISIBILITYWORK_H
#define MAP_DISTANCEVISIBILITYWORK_H
#include "map/mapDepart.h"
#include <stddef.h>

struct DistanceVisibilityModel { u32 unk00; u32 flags; };
struct DistanceVisibilityModelOwner { u32 unk00; DistanceVisibilityModel *model; };
struct DistanceVisibilityActor {
    u8 unk00[0x28];
    u32 flags;
    MapVector position;
    u8 unk38[0x40];
    DistanceVisibilityModelOwner *graphics;
    u8 unk7c[0xf];
    u8 category;
};
struct DistanceVisibilityWork {
    u8 unk00[0xc];
    DistanceVisibilityActor *actor;
    MapVector offset;
    s32 mode;
};
typedef char DistanceVisibilityOffsets[
    offsetof(DistanceVisibilityActor, flags) == 0x28 &&
    offsetof(DistanceVisibilityActor, position) == 0x2c &&
    offsetof(DistanceVisibilityActor, graphics) == 0x78 &&
    offsetof(DistanceVisibilityActor, category) == 0x8b &&
    offsetof(DistanceVisibilityWork, actor) == 0xc &&
    offsetof(DistanceVisibilityWork, offset) == 0x10 &&
    offsetof(DistanceVisibilityWork, mode) == 0x1c ? 1 : -1];
#endif
