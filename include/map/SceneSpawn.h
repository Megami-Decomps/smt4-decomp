#ifndef MAP_SCENESPAWN_H
#define MAP_SCENESPAWN_H

#include "common.h"
#include <stddef.h>

struct SceneSpawnRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 x;
    /* 0x06 */ s16 y;
    /* 0x08 */ s16 z;
    /* 0x0A */ s16 heading;
};
struct SceneViewHeading {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
};

struct SceneSpawnTableRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ SceneSpawnRecord point;
};
typedef char SceneSpawnTableRecordLayoutCheck[
    offsetof(SceneSpawnTableRecord, point.x) == 0x14 &&
    offsetof(SceneSpawnTableRecord, point.heading) == 0x1A &&
    sizeof(SceneSpawnTableRecord) == 0x1C ? 1 : -1];

#endif
