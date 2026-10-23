#ifndef MAP_MAPCIRCLEOBSTACLES_H
#define MAP_MAPCIRCLEOBSTACLES_H

#include "map/mapDepart.h"

struct MapCircleObstacle {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ MapVector position;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ u32 pointOnly;
    /* 0x34 */ u8 unk34[8];
};
struct MapCircleObstacleTable {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ MapCircleObstacle entries[64];
};
typedef char MapCircleObstacleOffsetsCheck[sizeof(MapCircleObstacle) == 0x3C &&
    offsetof(MapCircleObstacle, position) == 0x10 &&
    offsetof(MapCircleObstacleTable, entries) == 0xC ? 1 : -1];

#endif
