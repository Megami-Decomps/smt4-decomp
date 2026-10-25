#ifndef MAP_MAPJUMPTRANSITION_H
#define MAP_MAPJUMPTRANSITION_H

#include "common.h"
#include <stddef.h>

struct MapJumpRequest {
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
    u8 unk30[0x12];
    MapJumpDestination destination;
};
typedef char MapJumpTransitionLayoutCheck[offsetof(MapJumpTransition, destination) == 0x42 &&
    sizeof(MapJumpDestination) == 6 && sizeof(MapJumpRequest) == 0x18 ? 1 : -1];

#endif
