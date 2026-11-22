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
    AsdMdlObject *node;
};
struct MapSingleModelWork {
    /* 0x00 */ s32 state;           /* 1 idle, 2 placed, 3 leaving */
    /* 0x04 */ s32 timer;           /* frames in the current state */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 requested;        /* leave requested */
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ MapSingleModelState model;
};
typedef char MapSingleModelSizeCheck[sizeof(MapSingleModelState) == 0x20 &&
    offsetof(MapSingleModelWork, model) == 0x10 && sizeof(MapSingleModelWork) == 0x30 ? 1 : -1];

#endif
