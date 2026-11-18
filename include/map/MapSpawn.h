#ifndef MAP_MAPSPAWN_H
#define MAP_MAPSPAWN_H
#include "common.h"
#include <stddef.h>
struct MapSpawnPoint {
    u8 unk00[8];
    s8 x;
    s8 z;
    s16 heading;
    u8 unk0C[0x38];
};
struct MapHeadingState { u8 prefix[0x18]; f32 heading; };
typedef char MapSpawnOffsets[sizeof(MapSpawnPoint) == 0x44 && offsetof(MapSpawnPoint, x) == 8 && offsetof(MapHeadingState, heading) == 0x18 ? 1 : -1];
extern "C" {
u8 mapGetDepartureIndex(void);
/* The full-width index is narrowed only when stored in the save block. */
void mapSetDepartureIndex(s32 value);
}

#endif
