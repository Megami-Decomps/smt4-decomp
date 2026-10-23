#ifndef MAP_SINGLEMODELSTATE_H
#define MAP_SINGLEMODELSTATE_H

#include "common.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"

struct MapSingleModelState {
    u8 active;
    u8 unk01[3];
    MapVector position;
    f32 heading;
    u32 motion;
    u8 changed;
    u8 unk19[3];
    NodeEnableNode *node;
};
struct MapSingleModelWork {
    u8 prefix[0x10];
    MapSingleModelState model;
};
typedef char MapSingleModelSizeCheck[sizeof(MapSingleModelState) == 0x20 &&
    offsetof(MapSingleModelWork, model) == 0x10 && sizeof(MapSingleModelWork) == 0x30 ? 1 : -1];

#endif
