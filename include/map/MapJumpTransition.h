#ifndef MAP_MAPJUMPTRANSITION_H
#define MAP_MAPJUMPTRANSITION_H

#include "common.h"
#include <stddef.h>

struct MapJumpRequest {
    MapJumpRequest() : kind(0), map(0), entrance(0), object(0)
    {
        transform[0] = 0.0f;
        transform[1] = 0.0f;
        transform[2] = 0.0f;
    }

    u8 kind;
    u8 map;
    u8 entrance;
    u8 object;
    f32 transform[5];
};
struct MapJumpDestination {
    u16 map;
    u16 entrance;
    u16 object;
};
/* Resets a destination to map 0, entrance 0, object 0. */
static __inline void mapJumpDestinationClear(MapJumpDestination *destination)
{
    destination->map = 0;
    destination->entrance = 0;
    destination->object = 0;
}

struct MapJumpTransition {
    u8 unk00[0x20];
    u32 flags;
    u32 unk24;
    u32 state;
    u32 substate;
    u8 unk30[0xC];
    u16 returnMap;      /* 0x3C: the map a return request goes back to */
    u8 unk3E[2];
    u16 returnEntrance; /* 0x40 */
    MapJumpDestination destination;
};
typedef char MapJumpTransitionLayoutCheck[offsetof(MapJumpTransition, destination) == 0x42 &&
    offsetof(MapJumpTransition, returnMap) == 0x3C && offsetof(MapJumpTransition, returnEntrance) == 0x40 &&
    sizeof(MapJumpDestination) == 6 && sizeof(MapJumpRequest) == 0x18 &&
    offsetof(MapJumpRequest, kind) == 0 && offsetof(MapJumpRequest, map) == 1 &&
    offsetof(MapJumpRequest, entrance) == 2 && offsetof(MapJumpRequest, object) == 3 &&
    offsetof(MapJumpRequest, transform) == 4 ? 1 : -1];

#endif
