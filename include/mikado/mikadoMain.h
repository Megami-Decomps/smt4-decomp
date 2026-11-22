/* mikado/mikadoMain.c: the mikado (field camera / event stage) controller. */
#ifndef MIKADO_MIKADOMAIN_H
#define MIKADO_MIKADOMAIN_H

#include "common.h"
#include <stddef.h>
#include "classes/FloatState.h"
#include "classes/Obj55ca08.h"
#include "classes/SelectionState.h"
#include "classes/UShortVec3.h"
#include "shard/S1Mover.h"
#include "map/MapVector.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* The talk window's work object (0x17F0 bytes); a floating-point state sub-object sits at 0x4CC. */
class MikadoTalkWork {
public:
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void operator delete(void *block);
    u8 unk000[0x4CC];
    FloatState state;
    u8 unk52C[0x17F0 - 0x4CC - sizeof(FloatState)];
};

/* The position and angle data for a camera route node. */
struct MikadoRouteNodeA {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Vec3f position;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ Vec3f *angles;
};
struct MikadoRouteTableA {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ MikadoRouteNodeA **nodes;
};
struct MikadoRouteResourceA {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ MikadoRouteTableA *table;
};
class Obj557b18;
struct MikadoRouteActorA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj557b18 *controller;
};

/* Apocalypse's counterpart (0x7A0 bytes, mikado/moveCamera/MoveCameraCtrl.cpp): the scene's camera
 * controller; its floating-point state sits at 0x4F0. The controller's own functions (moveCameraCtrlSetup,
 * moveCameraCtrlSnapToNode, the track loader) use the fuller layout MoveCameraCtrlWork in gfx/MoveCameraCtrl.h:
 * nodeCount/selectedNode/routeMode are its frameCount/frame/selectedKey, actor its pointModel and the actor
 * destinations its point positions. */
class MikadoTalkWorkA {
public:
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void operator delete(void *block);
    /* 0x000 */ s32 nodeCount;
    /* 0x004 */ s32 selectedNode;
    /* 0x008 */ u8 unk008[8];
    /* 0x010 */ u32 elapsed;
    /* 0x014 */ u8 moving;
    /* 0x015 */ u8 hasActorDestination;
    /* 0x016 */ u8 unk016[6];
    /* 0x01C */ MikadoRouteActorA *actor;
    /* 0x020 */ u8 unk020[0x4D0];
    /* 0x4F0 */ FloatState state;
    /* 0x550 */ u8 unk550[0x44];
    /* 0x594 */ MikadoRouteResourceA *route;
    /* 0x598 */ s32 routeMode;
    /* 0x59C */ u8 unk59C[0x18];
    /* 0x5B4 */ Vec3f position;
    /* 0x5C0 */ Vec3f angles;
    /* 0x5CC */ u8 unk5CC[0x3C];
    /* 0x608 */ MapVector actorDestination;
    /* 0x614 */ MapVector savedActorDestination;
    /* 0x620 */ u8 unk620[0x180];
};

typedef char MikadoRouteOffsetCheck[
    offsetof(MikadoRouteNodeA, position) == 0x1C && offsetof(MikadoRouteNodeA, angles) == 0x30 &&
    offsetof(MikadoTalkWorkA, actor) == 0x1C && offsetof(MikadoTalkWorkA, route) == 0x594 &&
    offsetof(MikadoTalkWorkA, position) == 0x5B4 && offsetof(MikadoTalkWorkA, angles) == 0x5C0 &&
    offsetof(MikadoTalkWorkA, actorDestination) == 0x608 ? 1 : -1];

extern "C" void moveCameraCtrlSnapToNode(MikadoTalkWorkA *camera, s32 index, s32 mode);

/* A row of data table 33's type list (a mikado location): 0x88 bytes in both games. */
struct MikadoRecord {
    /* 0x00 */ s8 id;
    /* 0x01 */ s8 group;
    /* 0x02 */ u8 name[0x3D];      /* shown in the place window */
    /* 0x3F */ u8 messageId;       /* its line in mikado/talk.mbm */
    /* 0x40 */ char image[0x20];   /* scene file under mikado/, "0" for none */
    /* 0x60 */ s32 modelSet;       /* data table 33 list of its models, negative for none */
    /* 0x64 */ u16 altFlagA;       /* either flag set: the alternate scene file is loaded too */
    /* 0x66 */ u16 altFlagB;
    /* 0x68 */ char altImage[0x20];
};
typedef char MikadoRecordLayoutCheck[sizeof(MikadoRecord) == 0x88 && offsetof(MikadoRecord, messageId) == 0x3F &&
    offsetof(MikadoRecord, modelSet) == 0x60 && offsetof(MikadoRecord, altImage) == 0x68 &&
    sizeof(MikadoTalkWorkA) == 0x7A0 && offsetof(MikadoTalkWorkA, state) == 0x4F0 ? 1 : -1];

/* The mikado camera object (0xEB0 bytes). Its constructor is inline: it clears a few fields and
 * constructs the members that have constructors. */
class MikadoCamera {
public:
    MikadoCamera() : unk00(0), unk10(0), flags(0) {}
    static void operator delete(void *block);
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }

    /* Loads the scene resources (talk/check windows, button help, sprite tables) and clears the state. */
    void initialize();

    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0xF];
    /* 0x20 */ u32 flags;                  /* 0x80 = ... */
    /* 0x24 */ u8 ready;                  /* set once the scene finished loading */
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 state;
    /* 0x2C */ u32 step;                   /* step within the state */
    /* 0x30 */ s32 frame;                  /* frames counted by the step */
    /* 0x34 */ s32 unk34;
    /* 0x38 */ u8 unk38[4];
    /* 0x3C */ UShortVec3 positionA;
    /* 0x42 */ UShortVec3 positionB;
    /* 0x48 */ u8 exitRequest[4];          /* how to leave with the camp's resources kept: [0] map selection
                                            * 100-199, [1] below 100, [2] 200 and up, [3] save mode 2 */
    /* 0x4C */ u16 menuTotal;              /* flaggedValueHolderGetTotal of the menu */
    /* 0x4E */ u16 unk4E;
    /* 0x50 */ u8 unk50[8];
    /* 0x58 */ f32 unk58;
    /* 0x5C */ f32 unk5C;
    /* 0x60 */ u8 unk60[0x3C];
    /* 0x9C */ SelectionFlags selectionFlags;
    /* 0xAB */ u8 unkAB[0x65];
    /* 0x110 */ Obj55ca08 sub;             /* secondary base object (the camera is deleted through it) */
    /* 0x14C */ u8 unk14C[0x6CC - 0x14C];
    /* 0x6CC */ u8 menuLocked;             /* set while the scene leaves for the camp */
    /* 0x6CD */ u8 unk6CD[0xD58 - 0x6CD];
    /* 0xD58 */ u32 unkD58;
    /* 0xD5C */ const MikadoRecord *record; /* the location shown */
    /* 0xD60 */ u8 unkD60[4];
    /* 0xD64 */ s32 group;
    /* 0xD68 */ u8 unkD68[4];
    /* 0xD6C */ u32 unkD6C;
    /* 0xD70 */ u32 unkD70;
    /* 0xD74 */ u32 unkD74;
    /* 0xD78 */ u32 unkD78;
    /* 0xD7C */ u32 talkBf;                /* "mikado/talk.bf" */
    /* 0xD80 */ u32 talkMbm;               /* "mikado/talk.mbm" */
    /* 0xD84 */ u32 unkD84;
    /* 0xD88 */ u32 checkBf;               /* "mikado/check.bf" */
    /* 0xD8C */ u32 checkMbm;              /* "mikado/check.mbm" */
    /* 0xD90 */ u8 unkD90[0xDAC - 0xD90];
    /* 0xDAC */ s8 keepUi;                 /* the camp asked to keep the scene's windows closed */
    /* 0xDAD */ u8 unkDAD[3];
    /* 0xDB0 */ u32 unkDB0;
    /* 0xDB4 */ u8 unkDB4[0xE58 - 0xDB4];
    /* 0xE58 */ s8 cacheLoaded;            /* the location has a scene: talkWork and the model files exist */
    /* 0xE59 */ u8 unkE59[3];
    /* 0xE5C */ MikadoTalkWork *talkWork;
    /* 0xE60 */ void *modelFiles[10];      /* the location's model set, loaded from mikado/NAME.bam */
    /* 0xE88 */ u32 modelFileSizes[10];
};

/* The mikado controller's work area. */
typedef struct MikadoWork {
    /* 0x00 */ u32 task;                   /* the controller's task handle */
    /* 0x04 */ u8 done;                    /* the task has finished */
    /* 0x05 */ u8 state;                   /* 0 = create the camera, 1 = running, 2 = tear down, 3 = finished */
    /* 0x06 */ u8 unk06[0x2];
    /* 0x08 */ MikadoCamera *camera;
} MikadoWork;

typedef struct MikadoGlobals {
    union {
        /* 0x00 */ u32 unk00;
        struct {
            /* 0x00 */ u8 active;
            /* 0x01 */ u8 reserved01[3];
        } flags;
    };
    /* 0x04 */ MikadoWork *work;
    /* 0x08 */ u32 cameraStartA;           /* initial camera position components */
    /* 0x0C */ u32 cameraStartC;
} MikadoGlobals;

typedef char MikadoCameraLayoutCheck[sizeof(MikadoCamera) == 0xEB0 && offsetof(MikadoCamera, menuLocked) == 0x6CC &&
    offsetof(MikadoCamera, record) == 0xD5C && offsetof(MikadoCamera, group) == 0xD64 &&
    offsetof(MikadoCamera, talkMbm) == 0xD80 && offsetof(MikadoCamera, keepUi) == 0xDAC &&
    offsetof(MikadoCamera, cacheLoaded) == 0xE58 && offsetof(MikadoCamera, talkWork) == 0xE5C &&
    offsetof(MikadoCamera, modelFileSizes) == 0xE88 ? 1 : -1];
typedef char MikadoWorkLayoutCheck[sizeof(MikadoWork) == 0xC &&
    offsetof(MikadoWork, camera) == 8 ? 1 : -1];
typedef char MikadoGlobalsLayoutCheck[sizeof(MikadoGlobals) == 0x10 &&
    offsetof(MikadoGlobals, work) == 4 && offsetof(MikadoGlobals, flags.active) == 0 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void mikadoLoadSceneResources(MikadoCamera *camera);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 bgmReleaseStopped(void);

#ifdef __cplusplus
}
#endif

#endif
