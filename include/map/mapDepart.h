/* map/mapDepart.c: leaving a map. */
#ifndef MAP_MAPDEPART_H
#define MAP_MAPDEPART_H

#include "common.h"
#include <stddef.h>

/* The departure block, kept by a module global. */
typedef struct MapDepart {
    /* 0x00 */ u32 job;          /* job that runs the departure */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;     /* 0 = keep the block after the job ends */
} MapDepart;

/* Resources kept while departing (Shin Megami Tensei IV), one block behind a module global. */
typedef struct MapDepartWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 handleA;
    /* 0x10 */ u32 handleB;
    /* 0x14 */ s16 state;
    /* 0x16 */ u8 unk16[10];
    /* 0x20 */ void *dataA;      /* heap block */
    /* 0x24 */ u32 sizeA;
    /* 0x28 */ void *dataB;      /* heap block */
    /* 0x2C */ u32 sizeB;
} MapDepartWork;

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct MapDepartObject {
    /* 0x00 */ void (**vtable)(struct MapDepartObject *self);
} MapDepartObject;

/* Resources kept while departing (Apocalypse). */
typedef struct MapDepartWorkA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ MapDepartObject *objectA;   /* destroyed through their vtables */
    /* 0x10 */ MapDepartObject *objectB;
    /* 0x14 */ MapDepartObject *objectC;
    /* 0x18 */ s16 state;
} MapDepartWorkA;

/* Another block the departure keeps (Apocalypse). */
typedef struct MapDepartExtraA {
    /* 0x000 */ u8 unk000[0xF42];
    /* 0xF42 */ u16 unkF42;
    /* 0xF44 */ u16 unkF44;
} MapDepartExtraA;

/* Another block the departure keeps (Shin Megami Tensei IV). */
typedef struct MapDepartExtra {
    /* 0x000 */ u8 unk000[0xE3E];
    /* 0xE3E */ u16 unkE3E;
    /* 0xE40 */ u16 unkE40;
} MapDepartExtra;

struct MapVector {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

typedef __packed struct GameStateRecord {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 unk1A;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u32 unk1E;
    /* 0x22 */ u32 unk22;
    /* 0x26 */ u32 unk26;
    /* 0x2A */ u32 unk2A;
    /* 0x2E */ u32 unk2E;
    /* 0x32 */ u32 unk32;
} GameStateRecord;

/* The global game state block (Shin Megami Tensei IV). Only the fields read so far are named. */
typedef struct GameState {
    /* 0x000 */ s32 unk000;
    union {
        /* 0x004 */ u8 unk004[4];
        /* 0x004 */ u32 unk004Value;
    };
    /* 0x008 */ u32 currentObjectId;
    /* 0x00C */ u8 unk00C[0xC];
    /* 0x018 */ s8 unk18;
    union {
        /* 0x019 */ u8 unk019[0xD];
        struct {
            /* 0x019 */ u8 unk019BeforeModels[9];
            /* 0x022 */ u8 mapRangeModelsHidden;
        } controllerFlags;
    };
    /* 0x026 */ s8 unk26;
    /* 0x027 */ s8 unk27;
    /* 0x028 */ u8 unk028[0x2C];
    /* 0x054 */ s32 unk54;
    /* 0x058 */ u8 unk058[0x38];
    union {
        /* 0x090 */ u32 unk90;
        /* 0x090 */ f32 unk90Scalar;
    };
    /* 0x094 */ MapVector position;
    /* 0x0A0 */ f32 unkA0;
    /* 0x0A4 */ u32 unkA4;
    /* 0x0A8 */ u32 unkA8;
    /* 0x0AC */ u8 unk0AC[0x99];
    /* 0x145 */ u8 scriptPending;
    /* 0x146 */ u8 unk146[2];
    /* 0x148 */ u32 scriptId;
    /* 0x14C */ char scriptName[0x48];
    /* 0x194 */ s16 encounterDelay;
    /* 0x196 */ s16 encounterEnemyIndex;
    /* 0x198 */ u8 encounterForced;
    /* 0x199 */ u8 encounterApproach;
    /* 0x19A */ u8 encounterBackAttack;
    /* 0x19B */ u8 encounterHasMarker;
    /* 0x19C */ s16 encounterMarkerX;
    /* 0x19E */ s16 encounterMarkerY;
    /* 0x1A0 */ u8 unk1A0[0x18];
    /* 0x1B8 */ s32 encounterCount;
    /* 0x1BC */ u32 encounterValue;
    /* 0x1C0 */ u8 unk1C0[0x91];
    /* 0x251 */ u8 bgResetPending; /* set when the common background must be rebuilt */
    /* 0x252 */ u8 unk252[0x32];
    /* 0x284 */ u8 unk284;
    /* 0x285 */ u8 unk285[0x73];
    union {
        /* 0x2F8 */ s8 unk2F8;
        /* 0x2F8 */ u8 unk2F8Byte;
    };
    /* 0x2F9 */ u8 unk2F9[3];
    /* 0x2FC */ s32 savedMapId;
    /* 0x300 */ s32 savedAreaId;
    /* 0x304 */ u32 savedObjectId;
    /* 0x308 */ MapVector savedPosition;
    /* 0x314 */ f32 unk314;
    /* 0x318 */ f32 unk318;
    /* 0x31C */ u32 targetMapId;
    /* 0x320 */ u32 targetAreaId;
    /* 0x324 */ MapVector targetPosition;
    union {
        /* 0x330 */ u32 unk330;
        /* 0x330 */ f32 unk330Scalar;
    };
    union {
        /* 0x334 */ u32 unk334;
        /* 0x334 */ f32 unk334Scalar;
    };
    /* 0x338 */ u8 unk338[0x2C];
    /* 0x364 */ s32 encounterBlocked;
    /* 0x368 */ u32 unk368;
    /* 0x36C */ s32 encounterChangeMapId;
    /* 0x370 */ u8 unk370[0x308];
} GameState;

/* The global game state block (Apocalypse). Only the fields read so far are named. */

struct GameStateA {
    /* 0x000 */ s32 mode;
    union {
        /* 0x004 */ u8 unk004[4];
        /* 0x004 */ s32 submode;
    };
    /* 0x008 */ u32 currentObjectId;
    union {
        /* 0x00c */ u8 unk00c[0xc];
        struct {
            /* 0x00c */ u8 unk00cBeforeResume[0x8];
            /* 0x014 */ s32 mode; /* 1-3: what the resume point records */
        } resume;
    };
    /* 0x018 */ u8 inputBlocked;
    /* 0x019 */ union {
        /* 0x019 */ u8 unk019[0xe];
        struct {
            /* 0x019 */ u8 unk019[8];
            u8 primary;   /* 0x021 */
            /* 0x022 */ u8 unk022;
            u8 secondary; /* 0x023 */
            /* 0x024 */ u8 unk024[3];
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
            /* 0x034 */ u8 unk034[0x36E];
            /* 0x3A2 */ s8 unk3A2;
            /* 0x3A3 */ s8 unk3A3;
        } collision;
        struct {
            /* 0x034 */ u8 unk034BeforeFlags[0x229];
            /* 0x25D */ u8 unk25D;
            /* 0x25E */ u8 unk25E;
            /* 0x25F */ u8 unk25F[2];
            /* 0x261 */ u8 unk261;
            /* 0x262 */ u8 unk262[0x1E];
            /* 0x280 */ u8 unk280;
            /* 0x281 */ u8 unk281[5];
            /* 0x286 */ u16 unk286;
            /* 0x288 */ u8 unk288[4];
            /* 0x28C */ s32 requestState;
            /* 0x290 */ u8 requestOption;
        } request;
        struct {
            /* 0x034 */ u8 unk034BeforeClear[0x28];
            /* 0x05C */ u32 unk5C;
        } clear;
        struct {
            /* 0x034 */ u8 unk034BeforeTable[0xA0];
            /* 0x0D4 */ s32 type; /* 1-3: data table 0x2F type 0-2 */
            /* 0x0D8 */ u32 id;
        } table2F;
        struct {
            /* 0x034 */ u8 unk034BeforePoint[0x8C];
            /* 0x0C0 */ f32 scale;
            /* 0x0C4 */ u8 unk0C4[0xC];
            /* 0x0D0 */ f32 heading;
        } point;
        struct {
            /* 0x034 */ u8 unk034BeforeMapFlags[0x261];
            /* 0x295 */ u8 unk295;
            /* 0x296 */ u8 unk296[0x33];
            /* 0x2C9 */ u8 unk2C9;
            /* 0x2CA */ u8 unk2CA[0x3E];
            /* 0x308 */ u32 unk308;
            union {
                /* 0x30C */ u8 unk30C[0x148];
                /* 0x30C */ s32 popupElapsedFrames;
            };
            /* 0x454 */ s32 unk454;
            /* 0x458 */ u8 unk458[0x2C];
            /* 0x484 */ u32 unk484;
        } mapFlags;

        struct {
            /* 0x034 */ u8 unk034BeforeNavi[0x42c];
            /* 0x460 */ u8 alternateNaviMap;
            /* 0x461 */ u8 unk461;
            /* 0x462 */ u8 naviMapPending;
        } navigation;
        struct {
            /* 0x034 */ u8 unk034BeforePositionRequest[0x431];
            /* 0x465 */ u8 pending;
            /* 0x466 */ u8 unk466[2];
            /* 0x468 */ MapVector position;
            /* 0x474 */ s32 parameters[4];
        } scriptPositionRequest;
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
            /* 0x034 */ u8 unk034[0x111];
            u8 scriptPending; // 0x145
            /* 0x146 */ u8 unk146[2];
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
            /* 0x1A0 */ u8 unk1a0[0x18];
            s32 count; // 0x1b8
            u32 value; // 0x1bc
            /* 0x1C0 */ u8 unk1c0[0x1a4];
            s32 blocked; // 0x364
            /* 0x368 */ u32 unk368;
            s32 changeMapId; // 0x36c
        } encounter;
    };
    /* 0x4cc */ u8 mapRequested;
    /* 0x4cd */ u8 unk4cd[3];
    /* 0x4d0 */ void *current;
    /* 0x4d4 */ void *target;
    /* 0x4D8 */ u8 unk4D8[0x24];
    /* 0x4FC */ s32 modeCounter;
    /* 0x500 */ u8 overrideMapName;
    /* 0x501 */ u8 unk501[3];
    /* 0x504 */ u32 mapNameId;
    /* 0x508 */ u8 unk508[4];
    /* 0x50C */ u32 unk50C;
    /* 0x510 */ u8 unk510[0x64];
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
    /* 0x5B0 */ u8 unk5b0[0x18];
    /* 0x5C8 */ u8 unk5C8;
    /* 0x5C9 */ u8 unk5C9[0xAD];
    /* 0x676 */ u8 scriptOverride;
    /* 0x677 */ u8 unk677[0x1E];
    /* 0x695 */ u8 transitionPending;
};

typedef char GameStateLayoutCheck[sizeof(GameState) == 0x678 && sizeof(GameStateA) == 0x698 ? 1 : -1];

typedef char GameStateScriptPositionRequestCheck[offsetof(GameStateA, scriptPositionRequest.pending) == 0x465 && offsetof(GameStateA, scriptPositionRequest.position) == 0x468 && offsetof(GameStateA, scriptPositionRequest.parameters) == 0x474 ? 1 : -1];

typedef char GameStateOffsets[offsetof(GameState, position) == 0x94 && offsetof(GameState, unk284) == 0x284 && offsetof(GameState, savedMapId) == 0x2FC && offsetof(GameState, targetPosition) == 0x324 && offsetof(GameStateA, request.unk25D) == 0x25D && offsetof(GameStateA, request.requestState) == 0x28C && offsetof(GameStateA, unk50C) == 0x50C && offsetof(GameStateA, transitionPending) == 0x695 ? 1 : -1];
typedef char GameStateBgResetPendingOffset[offsetof(GameState, bgResetPending) == 0x251 ? 1 : -1];
typedef char GameStateDepartOffsets[offsetof(GameState, unk004Value) == 0x4 && offsetof(GameState, unkA8) == 0xA8 && offsetof(GameState, scriptPending) == 0x145 ? 1 : -1];
typedef char GameStateATable2FOffsets[offsetof(GameStateA, table2F.type) == 0xD4 && offsetof(GameStateA, table2F.id) == 0xD8 ? 1 : -1];
typedef char GameStateAPointOffsets[offsetof(GameStateA, point.scale) == 0xC0 && offsetof(GameStateA, point.heading) == 0xD0 ? 1 : -1];

#endif
