/* Structs shared by the helper functions in code shard 0048. */
#ifndef SHARD_SHARD0048_H
#define SHARD_SHARD0048_H

#include "common.h"

#include "shard/Shard0047.h"
#include "gamedata/MapNaviCategories.h"

typedef struct StateSetter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 flags;
} StateSetter;

typedef struct TwoObjects {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ Object *first;
    /* 0x9C */ Object *second;
} TwoObjects;

/* The navigation work's marker slots, including markers bound to map positions. */
typedef struct Block66Owner {
    /* 0x000 */ u8 unk000[0x66];
    /* 0x066 */ MapNaviMarker primaryMarkers[16];
    /* 0x166 */ MapNaviMarker spatialMarkers[40];
    /* 0x3E6 */ MapNaviMarker secondaryMarkers[10];
} Block66Owner;

typedef char Block66OwnerLayoutCheck[
    offsetof(Block66Owner, primaryMarkers) == 0x66 &&
    offsetof(Block66Owner, spatialMarkers) == 0x166 &&
    offsetof(Block66Owner, secondaryMarkers) == 0x3e6 &&
    sizeof(Block66Owner) == 0x486 ? 1 : -1];

extern "C" void naviSetSpatialMarkerSlot(Block66Owner *owner, s32 slot, s32 active, s32 mapId,
                             f32 x, f32 y, f32 z, s32 section, s32 enabled);

#endif
