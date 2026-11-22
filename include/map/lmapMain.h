/* map/lmapMain.c: the field map's main loop. */
#ifndef MAP_LMAPMAIN_H
#define MAP_LMAPMAIN_H

#include "common.h"
#include "map/VectorPairTransition.h"
#include <stddef.h>
#include "map/mapDepart.h"
#include "map/MapVector.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

class MoriModelContent;   /* Model/MoriModelContent.h */

struct AsdMdlObject;
class Obj4206e8;
class Obj557af8;
class Obj557c48;

/* The field map's global state (Apocalypse). Only the fields the readable code touches are named. */
typedef struct LmapMain {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s8 unk74;
} LmapMain;

/* An object embedded in the map state; known only through the functions that take it. */
typedef struct LmapObj {
    /* 0x00 */ u8 unk00[1];
} LmapObj;

/* One 0x88-byte slot of the state block's marker and model tables: the marker's pose and its
 * registration and visibility bytes (lmapMainCreate clears 0x84-0x86 of every slot). */
typedef struct LmapMainSlot {
    /* 0x00 */ MapVector position;
    /* 0x0C */ f32 rotation[9];
    /* 0x30 */ f32 scale[3];
    /* 0x3C */ u8 unk3C[0x48];
    /* 0x84 */ s8 registered;     /* its model node is registered with the model manager */
    /* 0x85 */ s8 shown;
    /* 0x86 */ u8 stateB;
    /* 0x87 */ u8 unk87;
} LmapMainSlot;
typedef char LmapMainSlotOffsetCheck[sizeof(LmapMainSlot) == 0x88 && offsetof(LmapMainSlot, scale) == 0x30 &&
    offsetof(LmapMainSlot, registered) == 0x84 && offsetof(LmapMainSlot, shown) == 0x85 ? 1 : -1];

/* The field map's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct LmapMainState {
    /* 0x00 */ u32 job;           /* job that runs the map */
    /* 0x04 */ u32 drawTask;      /* task that draws the map */
    /* 0x08 */ u8 freeOnEnd;      /* 0 = keep the block after the job ends */
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ s8 external;      /* nonzero: lmapRaiseSceneTransition steps the map instead of FUN_0026493c */
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0x2C];
    /* 0x40 */ s32 mapId;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ u32 areaId;
    /* 0x4C */ u16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ f32 angle;
    /* 0x54 */ u8 unk54[0x40];
    /* 0x94 */ u8 angleReset;
    /* 0x95 */ u8 unk95[0x2F];
    /* 0xC4 */ f32 unkC4;
    union {
        /* 0xC8 */ s32 unkC8;     /* float bits */
        /* 0xC8 */ f32 unkC8Float;
    };
    /* 0xCC */ u32 state;     /* lmapMainStateSet */
    /* 0xD0 */ u32 stateStep; /* cleared when the state changes */
    /* 0xD4 */ u32 stateTime; /* cleared when the state changes */
    /* 0xD8 */ u8 unkD8[4];
    /* 0xDC */ f32 unkDC;
    /* 0xE0 */ u8 unkE0;
    /* 0xE1 */ u8 unkE1;
    /* 0xE2 */ u8 unkE2[2];
    /* 0xE4 */ s32 unkE4;
    /* 0xE8 */ f32 unkE8;
    /* 0xEC */ LmapObj obj;
    /* 0xED */ u8 unkED[0x8A3];
    /* 0x990 */ u8 unk990;
    /* 0x991 */ u8 unk991[3];
    /* 0x994 */ s32 unk994;
    /* 0x998 */ u8 unk998;
    /* 0x999 */ s8 bgmSuppressed;  /* nonzero: lmapUpdateMapBgm leaves the BGM alone */
    /* 0x99A */ u8 unk99A[6];
    /* 0x9A0 */ u8 unk9A0;
    /* 0x9A1 */ u8 unk9A1[3];
    /* 0x9A4 */ u32 unk9A4[6];
    /* 0x9BC */ u8 unk9BC[0x28];
    /* 0x9E4 */ u32 unk9E4[4];
    /* 0x9F4 */ u8 unk9F4[0xC];
    /* 0xA00 */ f32 unkA00[3];
    /* 0xA0C */ u32 unkA0C;
    /* 0xA10 */ u32 words[32];
    /* 0xA90 */ u8 unkA90;
    /* 0xA91 */ u8 unkA91[3];
    /* 0xA94 */ u32 unkA94;
    /* 0xA98 */ u32 markerSource;
    /* 0xA9C */ void *markerModels;    /* the marker model's node list */
    /* 0xAA0 */ u8 unkAA0[0xC];
    /* 0xAAC */ LmapMainSlot slots[128];
    /* 0x4EAC */ u32 unk4EAC;
    /* 0x4EB0 */ f32 unk4EB0[3];
    /* 0x4EBC */ u8 unk4EBC[0x44];
    /* 0x4F00 */ u32 unk4F00;
} LmapMainState;
typedef char LmapMainStateLayoutCheck[sizeof(LmapMainState) == 0x4F04 && offsetof(LmapMainState, obj) == 0xEC &&
    offsetof(LmapMainState, slots) == 0xAAC && offsetof(LmapMainState, unk4EAC) == 0x4EAC &&
    offsetof(LmapMainState, unkC8) == 0xC8 && offsetof(LmapMainState, words) == 0xA10 ? 1 : -1];

/* A polymorphic object: slot 1 of its vtable destroys it. */
typedef struct LmapScript {
    /* 0x00 */ void (**vtable)(struct LmapScript *self);
} LmapScript;

/* The field player's pose, embedded in the map scene at 0x1C (lmapSceneGetObj returns it). */
typedef struct LmapScenePose {
    /* 0x00 */ MapVector position;         /* where the player stands */
    /* 0x0C */ MapVector targetPosition;   /* where this step moves it (eased to, or collision-checked) */
    /* 0x18 */ MapVector previousPosition; /* position at the start of the frame */
    /* 0x24 */ MapVector lastPosition;     /* position after the last move */
    /* 0x30 */ f32 heading;                /* facing in degrees */
    /* 0x34 */ f32 targetHeading;          /* facing being eased to, degrees */
} LmapScenePose;
typedef char LmapScenePoseSizeCheck[sizeof(LmapScenePose) == 0x38 ? 1 : -1];

/* A straight-line move of the scene position (lmapSceneBeginPositionTransition). */
typedef struct LmapScenePositionTransition {
    /* 0x00 */ MapVector start;
    /* 0x0C */ MapVector end;
    /* 0x18 */ MapVector step; /* per-frame increment */
} LmapScenePositionTransition;

/* The map scene's block (Shin Megami Tensei IV layout), kept by g_lmapScene. The first 0x164 bytes
 * are laid out as in Apocalypse's LmapSceneA. */
typedef struct LmapScene {
    /* 0x000 */ s32 mode;      /* scene mode (lmapSetSceneId); 28 is the overview */
    /* 0x004 */ s32 state;     /* step within the mode */
    /* 0x008 */ s32 stateTime; /* frames in the step */
    /* 0x00C */ s32 struggleCount; /* mode 31: stick turns and button presses, added to the frames held */
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ f32 unk014;
    /* 0x018 */ u8 unk018[4];
    /* 0x01C */ LmapScenePose pose;
    /* 0x054 */ s32 moveMode;  /* how the position eases toward its target */
    /* 0x058 */ f32 moveSpeed;
    /* 0x05C */ u8 moveActive;
    /* 0x05D */ u8 unk05D[3];
    /* 0x060 */ u32 motionTicks;
    union {
        /* 0x064 */ f32 previousMotionFrame;
        /* 0x064 */ s32 previousMotionFrameBits; /* retail tests frame crossings as signed float bits */
    };
    /* 0x068 */ f32 unk068;
    /* 0x06C */ u8 unk06C;
    /* 0x06D */ u8 unk06D[3];
    /* 0x070 */ u32 unk070;
    /* 0x074 */ f32 unk074[2];
    /* 0x07C */ f32 slideStep;     /* mode 37: distance slid per frame, eased down to 4 */
    /* 0x080 */ f32 unk080;
    /* 0x084 */ u32 unk084;
    /* 0x088 */ u8 unk088;
    /* 0x089 */ u8 unk089[7];
    /* 0x090 */ u32 unk090;
    /* 0x094 */ f32 unk094;
    /* 0x098 */ u8 unk098[0x9C];
    /* 0x134 */ s8 updateModels;
    /* 0x135 */ u8 unk135[3];
    /* 0x138 */ LmapScenePositionTransition transition;
    /* 0x15C */ f32 nearClip;  /* 100 */
    /* 0x160 */ f32 farClip;   /* 1000 */
    /* 0x164 */ struct AsdMdlObject *stageModel; /* the stage's model, swapped with the stage */
    /* 0x168 */ s32 actorMotion;
    /* 0x16C */ s32 appliedActorMotion;
    /* 0x170 */ s32 modelSwapStep;
    union {
        /* 0x174 */ struct AsdMdlObject *models[3];
        struct {
            /* 0x174 */ struct AsdMdlObject *encounterMarker;
            /* 0x178 */ struct AsdMdlObject *mapFile5;
            /* 0x17C */ struct AsdMdlObject *mapFile6;
        } markers;
    };
    union {
        /* 0x180 */ u8 unk180[5];
        struct {
            /* 0x180 */ u8 showFile6;
            /* 0x181 */ u8 restartFile6Motion;
            /* 0x182 */ u8 showFile5;
            /* 0x183 */ u8 restartFile5Motion;
            /* 0x184 */ u8 unk184;
        } markerState;
    };
    /* 0x185 */ u8 unk185[3];
    /* 0x188 */ u32 unk188;
    /* 0x18C */ s32 positionalSound;
    /* 0x190 */ s32 positionalSoundFrames;
    /* 0x194 */ Obj4206e8 *playerModel; /* a derived holder owns the root and three outfit parts */
    /* 0x198 */ s8 restoreChannelValues;
    /* 0x199 */ u8 unk199[3];
    /* 0x19C */ u32 channelValues[3];    /* the player model's three part channels */
    /* 0x1A8 */ u32 requestedChannelValues[3];
    /* 0x1B4 */ u16 equippedHead;
    /* 0x1B6 */ u16 equippedBody;
    /* 0x1B8 */ u16 equippedLegs;
    /* 0x1BA */ u8 unk1BA[2];
} LmapScene;
typedef char LmapSceneOffsetsCheck[offsetof(LmapScene, pose) == 0x1C && offsetof(LmapScene, moveMode) == 0x54 &&
    offsetof(LmapScene, transition) == 0x138 && offsetof(LmapScene, stageModel) == 0x164 &&
    offsetof(LmapScene, playerModel) == 0x194 && offsetof(LmapScene, channelValues) == 0x19C &&
    offsetof(LmapScene, markers.mapFile5) == 0x178 && offsetof(LmapScene, markerState.showFile5) == 0x182 &&
    offsetof(LmapScene, requestedChannelValues) == 0x1A8 && offsetof(LmapScene, equippedLegs) == 0x1B8 ? 1 : -1];

/* The map state block in Apocalypse (0x9370 bytes, allocated by lmapMainCreate). */
typedef struct LmapMainStateA {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u32 drawTask;
    /* 0x0008 */ u8 freeOnEnd;
    /* 0x0009 */ u8 unk009[2];
    /* 0x000B */ s8 external;
    /* 0x000C */ u32 unk00C;
    /* 0x0010 */ u32 unk010;
    /* 0x0014 */ u8 unk014[0x2C];
    /* 0x0040 */ u32 mapId;
    /* 0x0044 */ u32 unk044;
    /* 0x0048 */ u32 areaId;
    /* 0x004C */ u16 unk04C;
    /* 0x004E */ u16 unk04E;
    /* 0x0050 */ u8 unk050[0x74];
    /* 0x00C4 */ f32 scaleA;
    /* 0x00C8 */ s32 unkC8;         /* float bits (1.0 at creation) */
    /* 0x00CC */ u32 state;         /* lmapMainStateSet */
    /* 0x00D0 */ u32 stateStep;     /* cleared when the state changes */
    /* 0x00D4 */ u32 stateTime;     /* cleared when the state changes */
    /* 0x00D8 */ u8 unk0D8[4];
    /* 0x00DC */ f32 unk0DC;
    /* 0x00E0 */ u8 unk0E0;
    /* 0x00E1 */ u8 unk0E1;
    /* 0x00E2 */ u8 unk0E2[2];
    /* 0x00E4 */ s32 unk0E4;
    /* 0x00E8 */ f32 unk0E8;
    /* 0x00EC */ u32 unk0EC;
    /* 0x00F0 */ u32 unk0F0;
    /* 0x00F4 */ LmapObj obj;
    /* 0x00F5 */ u8 unk0F5[0x8E3];
    /* 0x09D8 */ u8 unk9D8;
    /* 0x09D9 */ u8 unk9D9[3];
    /* 0x09DC */ u32 unk9DC;
    /* 0x09E0 */ u8 unk9E0;
    /* 0x09E1 */ s8 bgmBlocked;    /* nonzero: lmapUpdateMapBgm leaves the BGM alone */
    /* 0x09E2 */ u8 unk9E2[6];
    /* 0x09E8 */ u8 unk9E8;
    /* 0x09E9 */ u8 unk9E9[3];
    /* 0x09EC */ u32 unk9EC[6];
    /* 0x0A04 */ u8 unkA04[0x28];
    /* 0x0A2C */ void *scriptCode;        /* the map script's code, strings and process (FUN_002dfa18) */
    /* 0x0A30 */ void *scriptStrings;
    /* 0x0A34 */ struct ScriptProcess *script;
    /* 0x0A38 */ u32 scriptCompletionFlag; /* game flag set when the script finishes, or 0 */
    /* 0x0A3C */ u8 unkA3C[0xC];
    /* 0x0A48 */ f32 unkA48[3];
    /* 0x0A54 */ RegisteredHandle *actors[32]; /* the map's actor models */
    /* 0x0AD4 */ u8 unkAD4;
    /* 0x0AD5 */ u8 unkAD5[3];
    /* 0x0AD8 */ u32 unkAD8;
    /* 0x0ADC */ u32 unkADC;
    /* 0x0AE0 */ u32 unkAE0;
    /* 0x0AE4 */ MoriModelContent *areaModel; /* the area markers' model; its nodes are the markers */
    /* 0x0AE8 */ u8 unkAE8[0xC];
    /* 0x0AF4 */ LmapMainSlot areaSlots[128];
    /* 0x4EF4 */ u32 modelRequest;       /* handed to a rebuilt model content, then cleared */
    /* 0x4EF8 */ MoriModelContent *model;
    /* 0x4EFC */ MoriModelContent *baseModel; /* the content a rebuilt one is linked to */
    /* 0x4F00 */ LmapMainSlot modelSlots[128];
    /* 0x9300 */ u32 unk9300;
    /* 0x9304 */ f32 unk9304[3];
    /* 0x9310 */ u8 unk9310[0x44];
    /* 0x9354 */ s32 scriptState;
    /* 0x9358 */ u32 unk9358;
    /* 0x935C */ u32 unk935C;
    /* 0x9360 */ u8 flags9360[11];
    /* 0x936B */ u8 unk936B;
    /* 0x936C */ Obj557c48 *modelManager; /* g_handleRegistry at creation */
} LmapMainStateA;

/* The field map's camera view (Apocalypse), kept by g_lmapView (and, in the camera module's own
 * functions, through LmapViewHolderA). It holds the look-at camera (eye, target, up), the follow
 * camera's heading and per-preset distances, the camera move, a prioritised request and an optional
 * animated camera clip. */
typedef struct LmapViewA {
    /* 0x000 */ s32 mode;           /* camera mode (lmapCameraSetMode) */
    /* 0x004 */ s32 phase;
    /* 0x008 */ s32 unk008;
    /* 0x00C */ s32 unk00C;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ u32 unk014;
    /* 0x018 */ f32 heading;        /* the follow camera's heading, degrees */
    /* 0x01C */ f32 heightBias;     /* added to the follow camera's heights */
    /* 0x020 */ MapVector up;
    /* 0x02C */ MapVector upCopy;
    /* 0x038 */ MapVector eye;
    /* 0x044 */ MapVector target;
    /* 0x050 */ MapVector savedEye;    /* the applied eye (cameraGetHeadingDegrees) */
    /* 0x05C */ MapVector savedTarget; /* the applied target */
    /* 0x068 */ MapVector lookFrom;    /* FUN_003a7348 measures the direction from here ... */
    /* 0x074 */ MapVector lookTo;      /* ... to here */
    /* 0x080 */ f32 unk080;
    /* 0x084 */ u8 unk084[0x18];
    /* 0x09C */ f32 scale;
    /* 0x0A0 */ f32 parameterA0;
    /* 0x0A4 */ f32 parameterA4;
    /* 0x0A8 */ u8 enabled;
    /* 0x0A9 */ u8 unk0A9[3];
    /* 0x0AC */ u32 state;
    /* 0x0B0 */ s32 contextMode;    /* -3..2 (lmapResolveContextValue); compared with a map-interface record's destination */
    /* 0x0B4 */ u8 flagB4;
    /* 0x0B5 */ u8 flagB5;
    /* 0x0B6 */ u16 timer;
    /* 0x0B8 */ u16 step;
    /* 0x0BA */ u8 unk0BA[2];
    /* 0x0BC */ MapVector axis;
    /* 0x0C8 */ s32 contextValue;   /* the context value lmapResolveContextValue returns */
    /* 0x0CC */ f32 targetHeight[16];    /* follow-camera presets, one column per preset */
    /* 0x10C */ f32 eyeHeight[16];
    /* 0x14C */ f32 lateralDistance[16];
    /* 0x18C */ f32 rearDistance[16];
    /* 0x1CC */ f32 fieldOfView[16];     /* degrees (42, 43) */
    /* 0x20C */ s32 contextOverride;  /* -1: lmapResolveContextValue derives the value from contextMode */
    /* 0x210 */ f32 unk210;
    /* 0x214 */ f32 unk214;
    /* 0x218 */ f32 raised;         /* nonzero while the camera is raised */
    /* 0x21C */ f32 unk21C;
    /* 0x220 */ s8 moving;          /* the camera move below is running */
    /* 0x221 */ u8 unk221[3];
    /* 0x224 */ VectorPairTransitionA move; /* the camera move (vectorPairTransitionStep steps it) */
    /* 0x298 */ f32 unk298;
    /* 0x29C */ MapVector targetOffset; /* added to the target (FUN_00324b68) */
    /* 0x2A8 */ u32 requestActive;  /* a request (lmapRequestTimedEffect) is pending */
    /* 0x2AC */ s32 priority;       /* the pending request's priority */
    /* 0x2B0 */ s16 requestId;
    /* 0x2B2 */ s16 unk2B2;
    /* 0x2B4 */ s16 unk2B4;
    /* 0x2B6 */ s16 unk2B6;
    /* 0x2B8 */ s8 unk2B8;
    /* 0x2B9 */ u8 unk2B9[3];
    /* 0x2BC */ Obj557af8 *clip; /* the animated camera clip (FUN_0035243c), or NULL */
    /* 0x2C0 */ MapVector homeEye;     /* the static pose restored when the clip ends */
    /* 0x2CC */ MapVector homeTarget;
    /* 0x2D8 */ u8 unk2D8[0x2C];
    /* 0x304 */ u8 unk304;
    /* 0x305 */ u8 unk305;
    /* 0x306 */ u8 unk306[2];
    /* 0x308 */ f32 height;
    /* 0x30C */ f32 unk30C;
    /* 0x310 */ f32 unk310;
    /* 0x314 */ Obj557c48 *modelManager; /* g_handleRegistry at reset; its +0x0C takes the camera */
} LmapViewA;
typedef char LmapViewAOffsetsCheck[offsetof(LmapViewA, heading) == 0x18 && offsetof(LmapViewA, up) == 0x20 &&
    offsetof(LmapViewA, savedEye) == 0x50 && offsetof(LmapViewA, lookTo) == 0x74 &&
    offsetof(LmapViewA, state) == 0xAC && offsetof(LmapViewA, contextMode) == 0xB0 &&
    offsetof(LmapViewA, axis) == 0xBC && offsetof(LmapViewA, targetHeight) == 0xCC &&
    offsetof(LmapViewA, fieldOfView) == 0x1CC && offsetof(LmapViewA, contextOverride) == 0x20C &&
    offsetof(LmapViewA, move) == 0x224 && offsetof(LmapViewA, targetOffset) == 0x29C &&
    offsetof(LmapViewA, priority) == 0x2AC && offsetof(LmapViewA, clip) == 0x2BC &&
    offsetof(LmapViewA, unk304) == 0x304 && offsetof(LmapViewA, height) == 0x308 &&
    sizeof(LmapViewA) == 0x318 ? 1 : -1];

/* The camera module's globals at 0x5806a0; the word after is g_lmapView. */
typedef struct LmapViewHolderA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ LmapViewA *view;
} LmapViewHolderA;

/* An actor the Apocalypse map scene drives: its controller handle at 0x04. */
typedef struct LmapActorA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 controller;
} LmapActorA;

/* The map scene's block in Apocalypse, kept by g_lmapScene. Up to 0x164 it is laid out as IV's
 * LmapScene; Apocalypse keeps eight scene models where IV keeps four, and adds the fields past 0x1BC. */
typedef struct LmapSceneA {
    /* 0x000 */ s32 mode;      /* scene mode (mapSetSceneState); 28 is the overview */
    /* 0x004 */ s32 state;     /* step within the mode */
    /* 0x008 */ s32 stateTime; /* frames in the step */
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ f32 unk014;
    /* 0x018 */ u8 unk018[4];
    /* 0x01C */ LmapScenePose pose;
    /* 0x054 */ s32 moveMode;  /* how the position eases toward its target */
    /* 0x058 */ f32 moveSpeed;
    /* 0x05C */ u8 moveActive;
    /* 0x05D */ u8 unk05D[3];
    /* 0x060 */ u32 unk060;
    /* 0x064 */ u8 unk064[4];
    /* 0x068 */ f32 unk068;
    /* 0x06C */ u8 unk06C;
    /* 0x06D */ u8 unk06D[3];
    /* 0x070 */ u32 unk070;
    /* 0x074 */ f32 unk074[4];
    /* 0x084 */ u32 unk084;
    /* 0x088 */ u8 unk088;
    /* 0x089 */ u8 unk089[7];
    /* 0x090 */ u32 unk090;
    /* 0x094 */ f32 unk094;
    /* 0x098 */ u8 unk098[0x9C];
    /* 0x134 */ u8 unk134;
    /* 0x135 */ u8 unk135[3];
    /* 0x138 */ LmapScenePositionTransition transition;
    /* 0x15C */ f32 nearClip;  /* 100 */
    /* 0x160 */ f32 farClip;   /* 1000 */
    /* 0x164 */ s32 unk164;
    /* 0x168 */ s32 unk168;
    /* 0x16C */ s32 modelSwapStep;
    /* 0x170 */ LmapActorA *models[8]; /* [0] is the stage's model, swapped with the stage */
    /* 0x190 */ LmapActorA *actor;
    /* 0x194 */ u8 unk194[5];
    /* 0x199 */ u8 unk199;
    /* 0x19A */ u16 unk19A;
    /* 0x19C */ u16 unk19C;
    /* 0x19E */ u8 unk19E[2];
    /* 0x1A0 */ s32 unk1A0;
    /* 0x1A4 */ u32 unk1A4;
    /* 0x1A8 */ LmapScript *playerModel; /* the player-model holder (an Obj557c58) */
    /* 0x1AC */ u8 restoreChannelValues;
    /* 0x1AD */ u8 unk1AD[3];
    /* 0x1B0 */ u32 channelValues[3];    /* the player model's three part channels */
    /* 0x1BC */ u32 unk1BC;
    /* 0x1C0 */ u32 unk1C0;
    /* 0x1C4 */ u32 unk1C4;
    /* 0x1C8 */ u16 unk1C8;
    /* 0x1CA */ u16 unk1CA;
    /* 0x1CC */ u16 unk1CC;
    /* 0x1CE */ u8 unk1CE[2];
    /* 0x1D0 */ s32 movementState;     /* the scripted movement's state (4: moving to the destination) */
    /* 0x1D4 */ u32 unk1D4;
    /* 0x1D8 */ MapVector movement;      /* the path follower vec3DirectionBetween steps */
    union {
        /* 0x1E4 */ u32 resumeState;  /* saved representation */
        /* 0x1E4 */ f32 movementStepSize;
    };
    /* 0x1E8 */ f32 unk1E8;
    /* 0x1EC */ f32 unk1EC;
    /* 0x1F0 */ MapVector movementCurrent;
    /* 0x1FC */ MapVector movementDestination;
    /* 0x208 */ MapVector unk208;
    /* 0x214 */ s8 unk214;
    /* 0x215 */ u8 unk215[3];
    /* 0x218 */ f32 movementHeading;
    /* 0x21C */ f32 unk21C;
    /* 0x220 */ u8 unk220[4];
    /* 0x224 */ u8 unk224;
    /* 0x225 */ u8 unk225[3];
    /* 0x228 */ s32 unk228;
    /* 0x22C */ u8 unk22C;
    /* 0x22D */ u8 unk22D[3];
    /* 0x230 */ u32 unk230;
    /* 0x234 */ u8 unk234[4];
    /* 0x238 */ s32 unk238;
    /* 0x23C */ u8 unk23C;
    /* 0x23D */ u8 flag23D;
    /* 0x23E */ u8 unk23E[2];
    /* 0x240 */ f32 unk240;
    /* 0x244 */ f32 unk244;
    /* 0x248 */ u32 unk248;
    /* 0x24C */ u32 unk24C;
    /* 0x250 */ s32 unk250;
    /* 0x254 */ MapVector actorDestination;
    /* 0x260 */ f32 actorYaw;     /* degrees */
    /* 0x264 */ u32 unk264;
    /* 0x268 */ u32 unk268;
    /* 0x26C */ u32 unk26C;
    /* 0x270 */ u32 unk270;
    /* 0x274 */ u32 unk274;
    /* 0x278 */ u32 unk278;
    /* 0x27C */ u32 unk27C;
    /* 0x280 */ s32 idleVoiceDuration;
    /* 0x284 */ s32 idleVoiceFrame;
    /* 0x288 */ u32 idleVoicePhase;  /* 3: idleVoice is playing */
    /* 0x28C */ u32 idleVoice;
    /* 0x290 */ u8 unk290;
    /* 0x291 */ u8 unk291;
    /* 0x292 */ u8 unk292[2];
} LmapSceneA;
typedef char LmapSceneAOffsetsCheck[offsetof(LmapSceneA, pose) == 0x1C && offsetof(LmapSceneA, transition) == 0x138 &&
    offsetof(LmapSceneA, models) == 0x170 && offsetof(LmapSceneA, actor) == 0x190 &&
    offsetof(LmapSceneA, playerModel) == 0x1A8 && offsetof(LmapSceneA, channelValues) == 0x1B0 &&
    offsetof(LmapSceneA, movementState) == 0x1D0 && offsetof(LmapSceneA, movementCurrent) == 0x1F0 &&
    offsetof(LmapSceneA, movementHeading) == 0x218 &&
    offsetof(LmapSceneA, actorYaw) == 0x260 && offsetof(LmapSceneA, idleVoice) == 0x28C &&
    sizeof(LmapSceneA) == 0x294 ? 1 : -1];


/* Retail 32-bit layout invariants. */
typedef char LmapMainStateAOffsetsCheck[offsetof(LmapMainStateA, state) == 0xCC &&
    offsetof(LmapMainStateA, obj) == 0xF4 && offsetof(LmapMainStateA, bgmBlocked) == 0x9E1 &&
    offsetof(LmapMainStateA, scriptCode) == 0xA2C && offsetof(LmapMainStateA, actors) == 0xA54 &&
    offsetof(LmapMainStateA, areaModel) == 0xAE4 && offsetof(LmapMainStateA, areaSlots) == 0xAF4 &&
    offsetof(LmapMainStateA, model) == 0x4EF8 && offsetof(LmapMainStateA, modelSlots) == 0x4F00 &&
    offsetof(LmapMainStateA, scriptState) == 0x9354 && sizeof(LmapMainStateA) == 0x9370 ? 1 : -1];

extern "C" {
u32 gameDataCopySaveEntry(u32 index, void *dest);
}

extern "C" {
u32 FUN_002cf854(void);
}

extern "C" {
void FUN_00492ac8(u32 unused, u32 value);
}

#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00492c84(void *arg0);

#ifdef __cplusplus
}
#ifdef __cplusplus
extern "C" {
#endif

u32 sysPlayVoice(u32 param_1);

#ifdef __cplusplus
}
#endif

#endif
