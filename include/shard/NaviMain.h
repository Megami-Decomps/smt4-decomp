/* The navigation screen's state block, held in g_naviMain. */
#ifndef SHARD_NAVIMAIN_H
#define SHARD_NAVIMAIN_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match1_NaviTransitionState.h"

typedef struct NaviMain {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u32 drawTask;       /* "NAVI DOWN" draw task */
    /* 0x0008 */ u8 closeRequested;
    /* 0x0009 */ u8 unk0009[0x1];
    /* 0x000A */ u8 active;
    /* 0x000B */ u8 unk000B[0x1];
    /* 0x000C */ u32 posX;
    /* 0x0010 */ u32 posY;
    /* 0x0014 */ u32 third;
    /* 0x0018 */ f32 argumentValue;
    /* 0x001C */ u8 unk001C[0xC];
    /* 0x0028 */ u32 currentMap;
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ s32 busy;
    /* 0x0034 */ f32 value;
    union {
        /* 0x0038 */ u8 cursorPos[1];
        /* 0x0038 */ f32 unk38f;
    };
    union {
        /* 0x003C */ u32 alternateMap;
        /* 0x003C */ f32 unk3Cf;
    };
    /* 0x0040 */ u32 state[1];
    union {
        /* 0x0044 */ u8 unk0044[0x122F0];
        struct {
            /* 0x0044 */ u8 unk0044BeforeFade[0x122EC];
            /* 0x12330 */ u32 fadeTask; /* "NAVI FADE DRAW" draw task */
        } tasks;
        struct {
            /* 0x0044 */ u8 unk0044BeforeTransition[0x24];
            /* 0x0068 */ NaviTransitionState transition;
        } stateView;
    };
    /* 0x12334 */ u8 settings[1];
} NaviMain;



typedef struct NaviValuePair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
} NaviValuePair;

typedef struct NaviMapRequest {
    /* 0x00 */ s32 mapId;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
} NaviMapRequest;

typedef struct NaviMainA {
    /* 0x00000 */ u32 job;
    /* 0x00004 */ u8 unk00004[4];
    /* 0x00008 */ u8 closeRequested;
    /* 0x00009 */ u8 unk00009;
    /* 0x0000A */ u8 active;
    /* 0x0000B */ u8 unk0000B;
    /* 0x0000C */ u32 posX;
    /* 0x00010 */ u32 posY;
    /* 0x00014 */ u32 thirdValue;
    /* 0x00018 */ u8 unk00018[0x10];
    /* 0x00028 */ u32 currentMap;
    /* 0x0002C */ u32 unk2C;
    /* 0x00030 */ NaviMapRequest mapRequest;
    /* 0x0003C */ u32 alternateMap;
    /* 0x00040 */ u8 unk00040[0x18];
    /* 0x00058 */ s32 busy;
    /* 0x0005C */ u8 unk0005C[4];
    /* 0x00060 */ NaviValuePair value;
    /* 0x00068 */ union {
        u8 panel[0x20654];
        u32 request[1];
        NaviTransitionState transition;
    };
    /* 0x206BC */ u8 slider[1];
} NaviMainA;


/* Retail 32-bit layout invariants. */
typedef char NaviMainSizeCheck[sizeof(NaviMain) == 0x12338 &&
    offsetof(NaviMain, third) == 0x14 &&
    offsetof(NaviMain, argumentValue) == 0x18 &&
    offsetof(NaviMain, unk38f) == 0x38 &&
    offsetof(NaviMain, unk3Cf) == 0x3c &&
    offsetof(NaviMain, tasks.fadeTask) == 0x12330 ? 1 : -1];
typedef char NaviMainASizeCheck[sizeof(NaviMainA) == 0x206C0 ? 1 : -1];

#endif
