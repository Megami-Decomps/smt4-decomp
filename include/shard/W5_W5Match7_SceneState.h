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
    /* 0x000 */ s32 mode;
    union {
        /* 0x004 */ u8 unk004[4];
        /* 0x004 */ s32 submode;
    };
    /* 0x008 */ u32 currentObjectId;
    /* 0x00c */ u8 unk00c[0xc];
    /* 0x018 */ u8 inputBlocked;
    /* 0x019 */ union {
        u8 unk019[0xe];
        struct {
            u8 unk019[8];
            u8 primary;   /* 0x021 */
            u8 unk022;
            u8 secondary; /* 0x023 */
            u8 unk024[3];
        } controllerFlags;
    };
    /* 0x027 */ s8 progressEnabled;
    /* 0x028 */ u8 unk028[4];
    /* 0x02c */ u16 defaultKind;
    /* 0x02e */ s8 selectedKind;
    /* 0x02f */ s8 overrideKinds[3];
    /* 0x032 */ s8 eventKind;
    /* 0x033 */ s8 overrideKind;
    union {
        /* 0x034 */ u8 unk034[0x498];
        struct {
            /* 0x034 */ u8 unk034BeforeNavi[0x42c];
            /* 0x460 */ u8 alternateNaviMap;
            /* 0x461 */ u8 unk461;
            /* 0x462 */ u8 naviMapPending;
        } navigation;
        struct {
            /* 0x034 */ u8 unk034BeforeRequest[0x3c1];
            /* 0x3f5 */ u8 pending;
            /* 0x3f6 */ u8 unk3f6[2];
            /* 0x3f8 */ u32 first;
            /* 0x3fc */ u32 second;
            /* 0x400 */ u32 third;
        } scriptRequest;
        struct {
            /* 0x034 */ u8 unk034BeforeScriptEntry[0xfe];
            /* 0x132 */ s16 entry;
        } scriptEntry;
        struct {
            /* 0x034 */ u8 unk034BeforePendingEntries[0x2dc];
            /* 0x310 */ u32 ids[32];
        } pendingEntries;
        struct {
            u8 unk034[0x111];
            u8 scriptPending; // 0x145
            u8 unk146[2];
            u32 scriptId; // 0x148
            char scriptName[0x48]; // 0x14c
            s16 delay; // 0x194
            s16 enemyIndex; // 0x196
            u8 forced; // 0x198
            u8 approach; // 0x199
            u8 backAttack; // 0x19a
            u8 hasMarker; // 0x19b
            s16 markerX; // 0x19c
            s16 markerY; // 0x19e
            u8 unk1a0[0x18];
            s32 count; // 0x1b8
            u32 value; // 0x1bc
            u8 unk1c0[0x1a4];
            s32 blocked; // 0x364
            u32 unk368;
            s32 changeMapId; // 0x36c
        } encounter;
    };
    /* 0x4cc */ u8 mapRequested;
    /* 0x4cd */ u8 unk4cd[3];
    /* 0x4d0 */ void *current;
    /* 0x4d4 */ void *target;
    /* 0x4d8 */ u8 unk4d8[0x28];
    /* 0x500 */ u8 overrideMapName;
    /* 0x501 */ u8 unk501[3];
    /* 0x504 */ u32 mapNameId;
    /* 0x508 */ u8 unk508[0x6c];
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
    /* 0x5b0 */ u8 unk5b0[0xc6];
    /* 0x676 */ u8 scriptOverride;
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
    };
    /* 0x254 */ f32 effectPosition[4];
};

extern "C" {
extern MapEntry g_mapEntries[];
extern GameState g_gameState;
extern MapGimic *g_mapGimic;
extern LmapScene *g_lmapScene;
}

#endif
