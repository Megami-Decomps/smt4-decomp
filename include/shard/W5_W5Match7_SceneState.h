#ifndef SHARD_W5_W5MATCH7_SCENESTATE_H
#define SHARD_W5_W5MATCH7_SCENESTATE_H

#include "common.h"

struct MapVector {
    f32 x, y, z;
};

struct MapEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 kind;
    /* 0x08 */ MapVector origin;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 flags;
    /* 0x1c */ MapVector position;
    /* 0x28 */ f32 value;
    /* 0x2c */ s32 status;
};

struct GameState {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 currentObjectId;
    /* 0x00c */ u8 unk00c[0x26];
    /* 0x032 */ s8 eventKind;
    /* 0x033 */ u8 unk033[0x499];
    /* 0x4cc */ u8 mapRequested;
    /* 0x4cd */ u8 unk4cd[3];
    /* 0x4d0 */ void *current;
    /* 0x4d4 */ void *target;
    /* 0x4d8 */ u8 unk4d8[0x9c];
    /* 0x574 */ u8 transitionActive;
    /* 0x575 */ u8 unk575[3];
    /* 0x578 */ u32 sourceMap;
    /* 0x57c */ u32 sourceArea;
    /* 0x580 */ u32 sourceObjectId;
    /* 0x584 */ MapVector sourcePosition;
    /* 0x590 */ f32 sourceHeading;
    /* 0x594 */ u32 unk594;
    /* 0x598 */ u32 destinationMap;
    /* 0x59c */ u32 destinationArea;
    /* 0x5a0 */ MapVector destinationPosition;
    /* 0x5ac */ f32 destinationHeading;
};

struct MapGimicResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};

struct MapGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x13];
    /* 0x14 */ MapGimicResource *resource;
    /* 0x18 */ u8 unk18[0x10];
    /* 0x28 */ s32 value;
};

struct MapGimic {
    /* 0x000 */ u8 unk000[0x9b4];
    /* 0x9b4 */ MapGimicEntry entry;
};

struct LmapScene {
    /* 0x000 */ u8 unk000[0x1c];
    /* 0x01c */ MapVector position;
    /* 0x028 */ u8 unk028[0x24];
    /* 0x04c */ f32 heading;
    /* 0x050 */ u8 unk050[0x204];
    /* 0x254 */ f32 effectPosition[4];
};

extern "C" {
extern MapEntry g_mapEntries[];
extern GameState g_gameState;
extern MapGimic *g_mapGimic;
extern LmapScene *g_lmapScene;
}

#endif
