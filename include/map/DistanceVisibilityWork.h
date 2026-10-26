#ifndef MAP_DISTANCEVISIBILITYWORK_H
#define MAP_DISTANCEVISIBILITYWORK_H
#include "map/mapDepart.h"
#include <stddef.h>

struct DistanceVisibilityModel { u32 unk00; u32 flags; };
struct DistanceVisibilityModelOwner { u32 unk00; DistanceVisibilityModel *model; };
/* The actor's map block: its flags, position and graphics link (0x28..0x7c). */
struct DistanceVisibilityBlock {
    u32 flags;
    MapVector position;
    u8 unk38[0x40];
    DistanceVisibilityModelOwner *graphics;
};
/* The actor's trailing block (0x80..): its category. */
struct DistanceVisibilityTail {
    u8 unk00[0xb];
    u8 category;
};
struct DistanceVisibilityActor {
    u8 unk00[0x28];
    DistanceVisibilityBlock block;
    u8 unk7c[4];
    DistanceVisibilityTail tail;
};
struct DistanceVisibilityWork {
    u8 unk00[0xc];
    DistanceVisibilityActor *actor;
    MapVector offset;
    s32 mode;
};
typedef char DistanceVisibilityOffsets[
    offsetof(DistanceVisibilityActor, block.flags) == 0x28 &&
    offsetof(DistanceVisibilityActor, block.position) == 0x2c &&
    offsetof(DistanceVisibilityActor, block.graphics) == 0x78 &&
    offsetof(DistanceVisibilityActor, tail.category) == 0x8b &&
    offsetof(DistanceVisibilityWork, actor) == 0xc &&
    offsetof(DistanceVisibilityWork, offset) == 0x10 &&
    offsetof(DistanceVisibilityWork, mode) == 0x1c ? 1 : -1];
#endif
