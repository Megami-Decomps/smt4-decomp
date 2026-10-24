/* map/lmapMain.c: the field map's main loop. */
#ifndef MAP_LMAPMAIN_H
#define MAP_LMAPMAIN_H

#include "common.h"
#include "map/VectorPairTransition.h"
#include <stddef.h>
#include "map/mapDepart.h"

/* The field map's global state (Apocalypse). Only the fields the readable code touches are named. */
typedef struct LmapMain {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s8 unk74;
} LmapMain;

/* An object embedded in the map state; known only through the functions that take it. */
typedef struct LmapObj {
    /* 0x00 */ u8 unk00[1];
} LmapObj;

/* One 0x88-byte slot of the state block's sprite table; only its two state bytes are named. */
typedef struct LmapMainSlot {
    /* 0x00 */ u8 unk00[0x85];
    /* 0x85 */ u8 stateA;
    /* 0x86 */ u8 stateB;
    /* 0x87 */ u8 unk87;
} LmapMainSlot;

/* The field map's state block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct LmapMainState {
    /* 0x00 */ u32 job;           /* job that runs the map */
    /* 0x04 */ u32 drawTask;      /* task that draws the map */
    /* 0x08 */ u8 freeOnEnd;      /* 0 = keep the block after the job ends */
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0x2C];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u16 unk4C;
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ u8 unk50[0x74];
    /* 0xC4 */ f32 unkC4;
    union {
        /* 0xC8 */ s32 unkC8;     /* float bits */
        /* 0xC8 */ f32 unkC8Float;
    };
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
    /* 0xD4 */ u32 unkD4;
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
    /* 0x994 */ u32 unk994;
    /* 0x998 */ u8 unk998[8];
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
    /* 0xA94 */ u32 unkA94[3];
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

/* World-space scene transform embedded at the scene object's start. */
typedef struct LmapSceneTransform {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 positionSnapshotA[3];
    /* 0x18 */ f32 positionSnapshotB[3];
    /* 0x24 */ u8 unk24[0xC];
    /* 0x30 */ f32 headingDegrees;
    /* 0x34 */ f32 headingCopy;
} LmapSceneTransform;

/* The map scene's block (Shin Megami Tensei IV layout), kept by a module global. */
typedef struct LmapScene {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x18];
    /* 0x01C */ union {
        LmapObj obj;
        LmapSceneTransform transform;
    };
    /* 0x054 */ u8 unk054[0xE0];
    /* 0x134 */ u8 unk134;
    /* 0x135 */ u8 unk135[0x27];
    /* 0x15C */ f32 unk15C;
    /* 0x160 */ f32 unk160;
    /* 0x164 */ u32 handleA;
    /* 0x168 */ u8 unk168[0x0C];
    /* 0x174 */ u32 handleB;
    /* 0x178 */ u32 handleC;
    /* 0x17C */ u32 handleD;
    /* 0x180 */ u8 unk180[0x14];
    /* 0x194 */ LmapScript *script;
    /* 0x198 */ u8 restoreChannelValues;
    /* 0x199 */ u8 unk199[3];
    /* 0x19C */ u32 channelValues[3];
} LmapScene;
typedef char LmapSceneSizeCheck[sizeof(LmapScene) == 0x1A8 ? 1 : -1];
typedef char LmapSceneChannelModeOffsetCheck[offsetof(LmapScene, restoreChannelValues) == 0x198 ? 1 : -1];
typedef char LmapSceneChannelValuesOffsetCheck[offsetof(LmapScene, channelValues) == 0x19C ? 1 : -1];

/* The map state block in Apocalypse. */
typedef struct LmapMainStateA {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;
    /* 0x09 */ u8 unk09[2];
    /* 0x0B */ s8 unk0B;
    /* 0x0C */ u8 unk0C[0x34];
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 unk44[0x84];
    /* 0xC8 */ s32 unkC8;         /* float bits */
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u8 unkD0[0x24];
    /* 0xF4 */ LmapObj obj;
} LmapMainStateA;

/* Another map block (Apocalypse), reached through the word after DAT_005806a0. */
typedef struct LmapExtraA {
    union {
        /* 0x000 */ u8 unk000[0xB0];
        struct {
            /* 0x000 */ s32 mode;
            /* 0x004 */ s32 unk004;
            /* 0x008 */ s32 unk008;
            /* 0x00C */ u8 unk00C[0x14];
            /* 0x020 */ MapVector up;
            /* 0x02C */ MapVector upCopy;
            /* 0x038 */ MapVector eye;
            /* 0x044 */ MapVector target;
            /* 0x050 */ MapVector savedEye;
            /* 0x05C */ MapVector savedTarget;
            /* 0x068 */ u8 unk068[0x38];
            /* 0x0A0 */ f32 parameterA0;
            /* 0x0A4 */ f32 parameterA4;
            /* 0x0A8 */ u8 enabled;
            /* 0x0A9 */ u8 unk0A9[3];
            /* 0x0AC */ u32 state;
        } camera;
        struct {
            u8 unk000[0x18];
            f32 heading;
            f32 heightBias;
        } followPose;
    };
    /* 0x0B0 */ s32 unkB0;
    /* 0x0B4 */ u8 flagB4;
    /* 0x0B5 */ u8 flagB5;
    /* 0x0B6 */ u16 timer;
    /* 0x0B8 */ u16 step;
    /* 0x0BA */ u8 unk0BA[2];
    /* 0x0BC */ MapVector axis;
    /* 0x0C8 */ s32 unkC8;
    union {
        /* 0x0CC */ u8 unk0CC[0x140];
        struct {
            f32 targetHeight[16];
            f32 eyeHeight[16];
            f32 lateralDistance[16];
            f32 rearDistance[16];
        } followPresets;
    };
    /* 0x20C */ s32 unk20C;
    union {
        /* 0x210 */ u8 unk210[0x98];
        struct {
            /* 0x210 */ f32 unk210F;
            /* 0x214 */ f32 unk214F;
            /* 0x218 */ u8 unk218[8];
            /* 0x220 */ u8 flag220;
            /* 0x221 */ u8 unk221[3];
            /* 0x224 */ VectorPairTransitionA parameters;
            /* 0x298 */ f32 unk298;
        } cameraTransition;
    };
    /* 0x2A8 */ u32 unk2A8;
    /* 0x2AC */ s32 priority;
    /* 0x2B0 */ s16 unk2B0;
    /* 0x2B2 */ s16 unk2B2;
    /* 0x2B4 */ s16 unk2B4;
    /* 0x2B6 */ s16 unk2B6;
    /* 0x2B8 */ u8 unk2B8;
    /* 0x2B9 */ u8 unk2B9[3];
    /* 0x2BC */ u32 unk2BC;
    /* 0x2C0 */ u8 unk2C0[0x44];
    /* 0x304 */ u8 unk304;
} LmapExtraA;

typedef char LmapExtraASizeCheck[sizeof(LmapExtraA) == 0x308 ? 1 : -1];
typedef char LmapExtraATransitionOffset[offsetof(LmapExtraA, cameraTransition.parameters) == 0x224 ? 1 : -1];

typedef struct LmapExtraGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ LmapExtraA *extra;
} LmapExtraGlobalsA;

/* The map's event state machine block (Apocalypse layout), kept by a module global. */
typedef struct LmapEventA {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 unk14;
} LmapEventA;



/* An actor the Apocalypse map scene drives: its controller handle at 0x04. */
typedef struct LmapActorA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 controller;
} LmapActorA;

/* The map scene's block in Apocalypse (only the fields read so far are named). */
typedef struct LmapSceneA {
    /* 0x000 */ s32 mainState;
    /* 0x004 */ u32 unk04;
    /* 0x008 */ u32 unk08;
    /* 0x00C */ u8 unk00C[0x10];
    /* 0x01C */ union {
        LmapObj obj;
        LmapSceneTransform transform;
    };
    /* 0x054 */ u32 state;
    /* 0x058 */ f32 time;
    /* 0x05C */ u8 unk05C[0xD8];
    /* 0x134 */ u8 unk134;
    /* 0x135 */ u8 unk135[0x4B];
    /* 0x180 */ LmapActorA *actor180;
    /* 0x184 */ u8 unk184[8];
    /* 0x18C */ LmapActorA *actor18C;
    /* 0x190 */ LmapActorA *actor;
    /* 0x194 */ u8 unk194[0x8];
    /* 0x19C */ u16 unk19C;
    /* 0x19E */ u8 unk19E[0xA];
    /* 0x1A8 */ LmapScript *script;
    /* 0x1AC */ u8 restoreChannelValues;
    /* 0x1AD */ u8 unk1AD[3];
    /* 0x1B0 */ u32 channelValues[3];
    /* 0x1BC */ u8 unk1BC[0x14];
    /* 0x1D0 */ u32 unk1D0;
    /* 0x1D4 */ u32 unk1D4;
    /* 0x1D8 */ u8 unk1D8[0x50];
    /* 0x228 */ u32 unk228;
    /* 0x22C */ u8 unk22C;
    /* 0x22D */ u8 unk22D[0x0B];
    /* 0x238 */ u32 unk238;
    /* 0x23C */ u8 unk23C;
    /* 0x23D */ u8 flag23D;
    /* 0x23E */ u8 unk23E[2];
    /* 0x240 */ f32 unk240;
    /* 0x244 */ u8 unk244[4];
    /* 0x248 */ u32 unk248;
    /* 0x24C */ u32 unk24C;
    /* 0x250 */ u32 unk250;
    /* 0x254 */ f32 actorDestination[3];
    /* 0x260 */ f32 actorYaw;     /* degrees */
    /* 0x264 */ u8 unk264[0x10];
    /* 0x274 */ u32 unk274;
    /* 0x278 */ u32 unk278;
} LmapSceneA;
typedef char LmapSceneAChannelModeOffsetCheck[offsetof(LmapSceneA, restoreChannelValues) == 0x1AC ? 1 : -1];
typedef char LmapSceneAActorOffsetCheck[offsetof(LmapSceneA, actor) == 0x190 ? 1 : -1];
typedef char LmapSceneAActorYawOffsetCheck[offsetof(LmapSceneA, actorYaw) == 0x260 ? 1 : -1];
typedef char LmapSceneAChannelValuesOffsetCheck[offsetof(LmapSceneA, channelValues) == 0x1B0 ? 1 : -1];


/* Retail 32-bit layout invariants. */
typedef char LmapMainStateASizeCheck[sizeof(LmapMainStateA) == 0xF8 ? 1 : -1];
typedef char LmapSceneTransformSizeCheck[sizeof(LmapSceneTransform) == 0x38 ? 1 : -1];
typedef char LmapSceneASizeCheck[sizeof(LmapSceneA) == 0x27C ? 1 : -1];
typedef char LmapExtraASizeCheck[sizeof(LmapExtraA) == 0x308 ? 1 : -1];

typedef char LmapExtraACameraOffsetsCheck[
    offsetof(LmapExtraA, camera.up) == 0x20 &&
    offsetof(LmapExtraA, camera.eye) == 0x38 &&
    offsetof(LmapExtraA, camera.target) == 0x44 &&
    offsetof(LmapExtraA, camera.savedEye) == 0x50 &&
    offsetof(LmapExtraA, camera.savedTarget) == 0x5C &&
    offsetof(LmapExtraA, camera.parameterA0) == 0xA0 &&
    offsetof(LmapExtraA, camera.parameterA4) == 0xA4 &&
    offsetof(LmapExtraA, camera.enabled) == 0xA8 &&
    offsetof(LmapExtraA, camera.state) == 0xAC &&
    offsetof(LmapExtraA, unkB0) == 0xB0 &&
    sizeof(LmapExtraA) == 0x308 ? 1 : -1];
typedef char LmapExtraAFollowOffsetsCheck[
    offsetof(LmapExtraA, followPose.heading) == 0x18 &&
    offsetof(LmapExtraA, followPose.heightBias) == 0x1C &&
    offsetof(LmapExtraA, followPresets.targetHeight) == 0xCC &&
    offsetof(LmapExtraA, followPresets.eyeHeight) == 0x10C &&
    offsetof(LmapExtraA, followPresets.lateralDistance) == 0x14C &&
    offsetof(LmapExtraA, followPresets.rearDistance) == 0x18C ? 1 : -1];

#endif
