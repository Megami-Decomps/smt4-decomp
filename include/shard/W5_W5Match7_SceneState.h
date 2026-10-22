#ifndef SHARD_W5_W5MATCH7_SCENESTATE_H
#define SHARD_W5_W5MATCH7_SCENESTATE_H

#include "map/mapDepart.h"
#include <stddef.h>


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
    /* 0x028 */ MapVector targetPosition;
    /* 0x034 */ u8 unk034[0x18];
    /* 0x04c */ f32 heading;
    /* 0x050 */ f32 targetHeading;
    union {
        /* 0x054 */ u8 unk054[0x200];
        struct {
            /* 0x054 */ u8 unk054BeforeTransition[0xe4];
            /* 0x138 */ MapVector start;
            /* 0x144 */ MapVector end;
            /* 0x150 */ MapVector step;
            /* 0x15c */ u8 unk15c[0xf8];
        } transition;
        struct {
            /* 0x054 */ u8 unk054BeforeEntry[0x17c];
            /* 0x1d0 */ s32 entryMode;
            /* 0x1d4 */ u32 unk1d4;
            /* 0x1d8 */ u8 unk1d8[0x50];
            /* 0x228 */ s32 unk228;
            /* 0x22c */ u8 unk22c;
            /* 0x22d */ u8 unk22d[0xb];
            /* 0x238 */ s32 unk238;
            /* 0x23c */ u8 unk23c;
            /* 0x23d */ u8 unk23d[3];
            /* 0x240 */ f32 unk240;
            /* 0x244 */ u8 unk244[0x10];
        } entry;
    };
    /* 0x254 */ f32 effectPosition[4];
};

typedef char LmapSceneEntryOffsetsCheck[offsetof(LmapScene, entry.entryMode) == 0x1d0 &&
    offsetof(LmapScene, entry.unk238) == 0x238 && offsetof(LmapScene, entry.unk240) == 0x240 &&
    sizeof(LmapScene) == 0x264 ? 1 : -1];

extern "C" {
extern MapEntry g_mapEntries[];
extern GameStateA g_gameState;
extern MapGimic *g_mapGimic;
extern LmapScene *g_lmapScene;
}

#endif
