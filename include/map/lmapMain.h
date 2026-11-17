/* map/lmapMain.c: the field map's main loop. */
#ifndef MAP_LMAPMAIN_H
#define MAP_LMAPMAIN_H

#include "common.h"
#include "map/VectorPairTransition.h"
#include <stddef.h>
#include "map/mapDepart.h"
#include "map/MapVector.h"

struct AsdMdlObject;

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
    /* 0x164 */ struct AsdMdlObject *stageModel; /* the stage's model, swapped with the stage */
    /* 0x168 */ s32 unk168;
    /* 0x16C */ s32 unk16C;
    /* 0x170 */ s32 modelSwapStep;
    /* 0x174 */ struct AsdMdlObject *models[3];  /* [1], [2]: from map files 5 and 6 */
    /* 0x180 */ u8 unk180[5];
    /* 0x185 */ u8 unk185[3];
    /* 0x188 */ u32 unk188;
    /* 0x18C */ s32 unk18C;
    /* 0x190 */ u32 unk190;
    /* 0x194 */ LmapScript *playerModel; /* the player-model holder (an Obj4207d0) */
    /* 0x198 */ u8 restoreChannelValues;
    /* 0x199 */ u8 unk199[3];
    /* 0x19C */ u32 channelValues[3];    /* the player model's three part channels */
    /* 0x1A8 */ u32 unk1A8;
    /* 0x1AC */ u32 unk1AC;
    /* 0x1B0 */ u32 unk1B0;
    /* 0x1B4 */ u16 unk1B4;
    /* 0x1B6 */ u16 unk1B6;
    /* 0x1B8 */ u16 unk1B8;
    /* 0x1BA */ u8 unk1BA[2];
} LmapScene;
typedef char LmapSceneOffsetsCheck[offsetof(LmapScene, pose) == 0x1C && offsetof(LmapScene, moveMode) == 0x54 &&
    offsetof(LmapScene, transition) == 0x138 && offsetof(LmapScene, stageModel) == 0x164 &&
    offsetof(LmapScene, playerModel) == 0x194 && offsetof(LmapScene, channelValues) == 0x19C &&
    offsetof(LmapScene, unk1B8) == 0x1B8 ? 1 : -1];

/* The map state block in Apocalypse. */
typedef struct LmapMainStateA {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 freeOnEnd;
    /* 0x09 */ u8 unk09[2];
    /* 0x0B */ s8 unk0B;
    /* 0x0C */ u8 unk0C[0x34];
    /* 0x40 */ u32 mapId;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 areaId;
    /* 0x4C */ u8 unk4C[0x7C];
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
    /* 0x1D8 */ MapVector movement;      /* the path follower FUN_003250ac steps */
    /* 0x1E4 */ u32 resumeState;
    /* 0x1E8 */ f32 unk1E8;
    /* 0x1EC */ f32 unk1EC;
    /* 0x1F0 */ MapVector movementCurrent;
    /* 0x1FC */ MapVector movementDestination;
    /* 0x208 */ MapVector unk208;
    /* 0x214 */ u8 unk214;
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
typedef char LmapMainStateASizeCheck[sizeof(LmapMainStateA) == 0xF8 ? 1 : -1];
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
