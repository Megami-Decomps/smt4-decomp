/* battle/btlCamera.cpp: the battle camera's work block (BtlCamera; Apocalypse: BtlCameraA). */
#ifndef BATTLE_BTLCAMERA_H
#define BATTLE_BTLCAMERA_H

#include "common.h"
#include <stddef.h>

#define BTL_FLAG_NO_ENCOUNT 0x80000 /* BtlCamera.flags: random encounters are suppressed */

struct BtlCameraVector3 {
    f32 x, y, z;
};

struct AsdCamera;

/* One camera pose (0x44 bytes): where the eye sits before the offsets, the direction and distance from it
 * to the point it looks at, and the lens. `eye` and `lookAt` are the world positions the last update produced. */
typedef struct BtlCameraPose {
    /* 0x00 */ BtlCameraVector3 position;
    /* 0x0C */ BtlCameraVector3 eye;
    /* 0x18 */ BtlCameraVector3 direction;
    /* 0x24 */ BtlCameraVector3 lookAt;
    /* 0x30 */ f32 distance;
    /* 0x34 */ f32 orbit;
    /* 0x38 */ f32 yaw;
    /* 0x3C */ f32 roll;
    /* 0x40 */ f32 fov;
} BtlCameraPose;

/* A screen-shake generator (20 bytes; effShakeParticleAdvance steps it, pairSourceGet reads its offset). */
typedef struct BtlCameraShake {
    /* 0x00 */ u32 words[5];
} BtlCameraShake;

/* The battle camera's work block (Shin Megami Tensei IV; g_btlMain at 0x4342c8 points at it, 0x848 bytes).
 * Every channel is a value the per-frame update (btlCameraUpdate) recomputes from a curve (easeEvaluate(mode,
 * duration, frame)) while its bit of `flags` is set, and then adds to the pose. The current pose (0x568-0x5AC)
 * has BtlCameraPose's layout. */
typedef struct BtlCamera {
    union {
        /* 0x000 */ f32 cameraPosition[3];
        /* 0x000 */ BtlCameraVector3 position; /* added to both the eye and the target */
    };
    union {
        /* 0x00C */ f32 vectors[2][3];   /* the two editor poses (btlCameraEditorInitializeList) */
        /* 0x00C */ BtlCameraVector3 movePoints[2]; /* where flag 0x80000 moves `position` from and to */
    };
    /* 0x024 */ s32 editorValue;     /* nonzero: the editor's pose applies (FUN_0024082c) */
    /* 0x028 */ s32 state;           /* 0: idle, 1: updating, 2: finished */
    /* 0x02C */ u8 unk02C[4];
    /* 0x030 */ BtlCameraShake shake;      /* flag 0x40000 */
    /* 0x044 */ BtlCameraShake shakeExtra; /* flag 0x400000 */
    /* 0x058 */ u8 view[0x508];      /* the AsdCamera (0x50C bytes; its last word is debugScalar) */
    /* 0x560 */ f32 debugScalar;     /* the attack camera debug menu's value: the view's lens input */
    /* 0x564 */ f32 debugScalarWide; /* used instead while flag 0x4000000 or 0x8000000 is set */
    /* 0x568 */ BtlCameraVector3 offset; /* z: the camera distance */
    union {
        /* 0x574 */ f32 centerX;
        /* 0x574 */ BtlCameraVector3 eye; /* the eye position of the last update */
    };
    /* 0x580 */ BtlCameraVector3 direction;
    /* 0x58C */ BtlCameraVector3 lookAt; /* the target of the last update, without lookOrigin */
    /* 0x598 */ f32 distance;        /* along direction; the depth the layer widths scale by */
    /* 0x59C */ f32 orbit;           /* turn of the direction about its horizontal normal, in 1/256ths of a turn */
    /* 0x5A0 */ f32 yaw;
    /* 0x5A4 */ f32 roll;
    /* 0x5A8 */ f32 fov;             /* degrees */
    /* 0x5AC */ BtlCameraPose endPose;   /* what the pose blends run towards */
    /* 0x5F0 */ BtlCameraPose startPose; /* and from */
    /* 0x634 */ u32 flags;
    /* 0x638 */ s32 blendDuration;   /* flag 1: FUN_003d62a0 blends the whole pose */
    /* 0x63C */ s32 blendFrame;
    /* 0x640 */ BtlCameraVector3 jitter; /* flag 2: a random offset of the target each frame */
    /* 0x64C */ s32 jitterMode;      /* 0: a fifth of full strength, 1: full strength */
    /* 0x650 */ s32 jitterDuration;
    /* 0x654 */ s32 jitterFrame;
    /* 0x658 */ BtlCameraVector3 eyeSlide; /* flag 4: x runs towards the end pose */
    /* 0x664 */ s32 eyeSlideDuration;
    /* 0x668 */ s32 eyeSlideFrame;
    /* 0x66C */ s32 eyeSlideMode;
    /* 0x670 */ f32 eyeRise;         /* flag 8: added to the eye's z */
    /* 0x674 */ s32 eyeRiseDuration;
    /* 0x678 */ s32 eyeRiseFrame;
    /* 0x67C */ s32 eyeRiseMode;
    /* 0x680 */ s32 poseDuration;    /* flag 0x10: FUN_003d5698 */
    /* 0x684 */ s32 poseFrame;
    /* 0x688 */ BtlCameraVector3 sway; /* flag 0x20: y follows a sine; flags 0x40/0x80 add it to target/eye */
    /* 0x694 */ s32 swayFrame;
    /* 0x698 */ f32 eyeDip;          /* flag 0x200: added to the eye's z */
    /* 0x69C */ s32 eyeDipDuration;
    /* 0x6A0 */ s32 eyeDipFrame;
    /* 0x6A4 */ s32 eyeDipMode;
    /* 0x6A8 */ f32 fovShift;        /* flag 0x400 (0x200000: from the start pose's fov) */
    /* 0x6AC */ s32 fovShiftDuration;
    /* 0x6B0 */ s32 fovShiftFrame;
    /* 0x6B4 */ s32 fovShiftMode;
    /* 0x6B8 */ u8 unk6B8[4];
    /* 0x6BC */ s32 rollDuration;    /* flag 0x800: roll runs to the end pose's */
    /* 0x6C0 */ s32 rollFrame;
    /* 0x6C4 */ s32 rollMode;
    /* 0x6C8 */ u8 unk6C8[4];
    /* 0x6CC */ BtlCameraVector3 eyeShift; /* flag 0x1000 (0x20000: FUN_003d6e20) */
    /* 0x6D8 */ s32 eyeShiftDuration;
    /* 0x6DC */ s32 eyeShiftFrame;
    /* 0x6E0 */ s32 eyeShiftMode;
    /* 0x6E4 */ BtlCameraVector3 lookShift; /* flags 0x2000/0x8000 (0x10000: battleVectorTransitionUpdatePath) */
    /* 0x6F0 */ s32 lookShiftDuration;
    /* 0x6F4 */ s32 lookShiftFrame;
    /* 0x6F8 */ s32 lookShiftMode;
    /* 0x6FC */ BtlCameraVector3 pathStart;
    /* 0x708 */ BtlCameraVector3 pathEnd;
    /* 0x714 */ s32 pathDuration;
    /* 0x718 */ s32 pathFrame;
    /* 0x71C */ s32 pathMode;
    /* 0x720 */ u8 unk720[8];
    /* 0x728 */ s32 moveFrame;       /* flag 0x80000: cameraPosition runs from vectors[0] to vectors[1] */
    /* 0x72C */ s32 moveDuration;
    /* 0x730 */ u8 unk730[8];
    /* 0x738 */ BtlCameraVector3 eyeOrigin;  /* added to the eye (flag 0x800000: FUN_003d681c moves both origins) */
    /* 0x744 */ u8 unk744[0x1C];
    /* 0x760 */ s32 unk760;
    /* 0x764 */ BtlCameraVector3 lookOrigin; /* added to the target */
    /* 0x770 */ u8 unk770[0xC];
    /* 0x77C */ BtlCameraVector3 eyeLocal;   /* the last eye and target without their origins */
    /* 0x788 */ BtlCameraVector3 lookLocal;
    /* The channels of the alternate mode (flag 0x100), timed by the module's statics. */
    /* 0x794 */ f32 altEyeRise;
    /* 0x798 */ u8 unk798[0xC];
    /* 0x7A4 */ s32 altEyeRiseFrame;
    /* 0x7A8 */ u8 unk7A8[4];
    /* 0x7AC */ f32 altFovShift;
    /* 0x7B0 */ u8 unk7B0[8];
    /* 0x7B8 */ s32 altFovShiftDuration;
    /* 0x7BC */ s32 altFovShiftFrame;
    /* 0x7C0 */ s32 altFovShiftMode;
    /* 0x7C4 */ f32 altRoll;
    /* 0x7C8 */ u8 unk7C8[8];
    /* 0x7D0 */ f32 unk7D0;          /* cleared with the alternate channels */
    /* 0x7D4 */ u8 unk7D4[8];
    /* 0x7DC */ s32 altRollDuration;
    /* 0x7E0 */ s32 altRollFrame;
    /* 0x7E4 */ s32 altRollMode;
    /* 0x7E8 */ BtlCameraVector3 altEyeShift;
    /* 0x7F4 */ u8 unk7F4[0x18];
    /* 0x80C */ s32 altEyeShiftDuration;
    /* 0x810 */ s32 altEyeShiftFrame;
    /* 0x814 */ s32 altEyeShiftMode;
    /* 0x818 */ BtlCameraVector3 altLookShift; /* battleCameraBlendTargetOffset */
    /* 0x824 */ u8 unk824[0x1C];
    /* 0x840 */ s32 altLookShiftFrame;
    /* 0x844 */ u8 unk844[4];
} BtlCamera;
typedef char BtlCameraLayoutCheck[
    offsetof(BtlCamera, vectors) == 0xC && offsetof(BtlCamera, editorValue) == 0x24 &&
    offsetof(BtlCamera, debugScalar) == 0x560 && offsetof(BtlCamera, offset) == 0x568 &&
    offsetof(BtlCamera, centerX) == 0x574 && offsetof(BtlCamera, direction) == 0x580 &&
    offsetof(BtlCamera, distance) == 0x598 && offsetof(BtlCamera, yaw) == 0x5A0 &&
    offsetof(BtlCamera, fov) == 0x5A8 && offsetof(BtlCamera, flags) == 0x634 &&
    offsetof(BtlCamera, unk760) == 0x760 ? 1 : -1];
typedef char BtlCameraChannelCheck[
    sizeof(BtlCameraPose) == 0x44 && offsetof(BtlCamera, shake) == 0x30 && offsetof(BtlCamera, view) == 0x58 &&
    offsetof(BtlCamera, startPose) == 0x5F0 && offsetof(BtlCamera, jitter) == 0x640 &&
    offsetof(BtlCamera, eyeRise) == 0x670 && offsetof(BtlCamera, sway) == 0x688 &&
    offsetof(BtlCamera, fovShift) == 0x6A8 && offsetof(BtlCamera, eyeShift) == 0x6CC &&
    offsetof(BtlCamera, lookShift) == 0x6E4 && offsetof(BtlCamera, pathDuration) == 0x714 &&
    offsetof(BtlCamera, moveFrame) == 0x728 && offsetof(BtlCamera, eyeOrigin) == 0x738 &&
    offsetof(BtlCamera, lookOrigin) == 0x764 && offsetof(BtlCamera, eyeLocal) == 0x77C &&
    offsetof(BtlCamera, altEyeRise) == 0x794 && offsetof(BtlCamera, altFovShift) == 0x7AC &&
    offsetof(BtlCamera, altRoll) == 0x7C4 && offsetof(BtlCamera, altEyeShift) == 0x7E8 &&
    offsetof(BtlCamera, altLookShift) == 0x818 && offsetof(BtlCamera, altLookShiftFrame) == 0x840 &&
    sizeof(BtlCamera) == 0x848 ? 1 : -1];

/* The camera's view object. */
static __inline AsdCamera *btlCameraView(BtlCamera *camera)
{
    return (AsdCamera *)camera->view;
}

struct BtlCameraA;

/* The camera module's statics that follow its camera pointer (Shin Megami Tensei IV: g_btlMain at 0x4342c8;
 * Apocalypse: g_btlCamera at 0x571508). Retail reaches them through the pointer's symbol, so the units that
 * touch them declare that symbol with this type instead of including battle/BtlGlobals.h: the pointer users
 * need the plain pointer declaration to keep their code. */
typedef struct BtlCameraStatics {
    /* 0x00 */ void *camera;              /* BtlCamera / BtlCameraA */
    union {
        /* 0x04 */ u8 unk04[0x10];
        struct {
            /* 0x04 */ f32 swayAmplitude; /* of the sway's sine */
            /* 0x08 */ f32 swaySpeed;     /* radians per frame */
            /* 0x0C */ s32 duration;      /* the alternate mode's eye rise */
            /* 0x10 */ s32 mode;
        } alt;
    };
    /* 0x14 */ f32 transitionTarget;      /* the global transition's target (btlStartGlobalTransition) */
    union {
        /* 0x18 */ u8 unk18[0x10];
        /* 0x18 */ s32 altDurations[4];   /* the alternate mode's fov, roll, eye shift and look shift */
    };
    /* 0x28 */ s32 routingMode;           /* 1, 2: vector transitions route through the camera origin */
    /* 0x2C */ f32 scalar;
    /* 0x30 */ f32 scalarDelta;
} BtlCameraStatics;
typedef char BtlCameraStaticsLayoutCheck[
    offsetof(BtlCameraStatics, transitionTarget) == 0x14 && offsetof(BtlCameraStatics, routingMode) == 0x28 &&
    offsetof(BtlCameraStatics, scalar) == 0x2C && offsetof(BtlCameraStatics, scalarDelta) == 0x30 ? 1 : -1];

class CameraBackend {
public:
    virtual void unusedSlot0();
    virtual void release();
};

struct BtlCameraGraphics {
    /* 0x00 */ u32 object;
    /* 0x04 */ u32 aux;
};

struct BtlCameraJobA {
    /* 0x00 */ u32 ownerHandle;
    /* 0x04 */ u8 unk04[0x64];
    /* 0x68 */ u32 drawJob;
};

struct BtlCameraOrientationTransition {
    /* 0x00 */ BtlCameraVector3 current;
    /* 0x0C */ BtlCameraVector3 target;
    /* 0x18 */ s32 duration;
    /* 0x1C */ s32 frame;
    /* 0x20 */ u32 mode;
    union {
        /* 0x24 */ u8 unk24[8];
        struct {
            u32 unk24;
            /* 0x28 */ s32 selection;
        } editor;
    };
    /* 0x2C */ BtlCameraVector3 currentOffset;
    /* 0x38 */ BtlCameraVector3 targetOffset;
};

struct BtlCameraA {
    union {
        /* 0x000 */ f32 vector[3];
        /* 0x000 */ BtlCameraVector3 position;
    };
    /* 0x00c */ f32 unk0C;
    /* 0x010 */ f32 unk10;
    /* 0x014 */ f32 unk14;
    /* 0x018 */ f32 unk18;
    union {
        /* 0x01c */ u8 unk1C[0x1c];
        struct {
            u8 unk1CBeforeDuration[0x18];
            /* 0x034 */ u32 duration;
        } movement;
        struct {
            /* 0x01c */ BtlCameraVector3 from;
            /* 0x028 */ BtlCameraVector3 to;
        } span;
    };
    /* 0x038 */ s32 unk38;
    /* 0x03c */ s32 unk3C;
    /* 0x040 */ u32 job;
    /* 0x044 */ u8 unk044[0x28];
    union {
        /* 0x06c */ u8 registryEntry[0x5E0];
        struct {
            /* 0x06C */ u8 unk06C[0x514];
            /* 0x580 */ BtlCameraVector3 position;
            /* 0x58C */ u8 unk58C[0x28];
            /* 0x5B4 */ f32 angle;
            union {
                /* 0x5B8 */ u8 unk5B8[8];
                /* 0x5B8 */ f32 yaw;
            };
            /* 0x5C0 */ f32 distance;
        } basePose;
        struct {
            /* 0x06C */ u8 unk06c[0x598];
            /* 0x604 */ f32 endFov;
            /* 0x608 */ u8 unk608[0x40];
            /* 0x648 */ f32 startFov;
        } lensPose;
    };
    /* 0x64c */ u32 flags;
    /* 0x650 */ u8 unk650[8];
    /* 0x658 */ CameraBackend *backend;
    /* 0x65c */ u8 unk65c[0x2e];
    /* 0x68a */ u8 enabled;
    /* 0x68b */ u8 unk68b[0x79];
    /* 0x704 */ f32 eyeDip;
    /* 0x708 */ u8 unk708[0xC];
    /* 0x714 */ f32 fovShift;
    /* 0x718 */ s32 fovShiftDuration;
    /* 0x71c */ s32 fovShiftFrame;
    /* 0x720 */ s32 fovShiftMode;
    /* 0x724 */ u8 unk724[0x70];
    /* 0x794 */ u32 settleState;
    /* 0x798 */ u32 settleMode;
    /* 0x79c */ BtlCameraGraphics graphics;
    union {
        /* 0x7a4 */ u8 unk7A4[0x110];
        /* 0x7a4 */ BtlCameraOrientationTransition orientation;
    };
};

typedef char BtlCameraSizeCheck[sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];
typedef char BtlCameraPositionCheck[
    offsetof(BtlCameraA, position) == 0 &&
    offsetof(BtlCameraA, vector) == 0 &&
    sizeof(BtlCameraVector3) == 0xC &&
    sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];
typedef char BtlCameraMovementDurationCheck[offsetof(BtlCameraA, movement.duration) == 0x34 ? 1 : -1];
typedef char BtlCameraRegistryCheck[offsetof(BtlCameraA, registryEntry) == 0x6C ? 1 : -1];
typedef char BtlCameraFlagsCheck[offsetof(BtlCameraA, flags) == 0x64C ? 1 : -1];
typedef char BtlCameraBackendCheck[offsetof(BtlCameraA, backend) == 0x658 ? 1 : -1];
typedef char BtlCameraEnabledCheck[offsetof(BtlCameraA, enabled) == 0x68A ? 1 : -1];
typedef char BtlCameraGraphicsCheck[offsetof(BtlCameraA, graphics) == 0x79C ? 1 : -1];
typedef char BtlCameraALensOffsetsCheck[
    offsetof(BtlCameraA, lensPose.endFov) == 0x604 && offsetof(BtlCameraA, lensPose.startFov) == 0x648 &&
    offsetof(BtlCameraA, eyeDip) == 0x704 && offsetof(BtlCameraA, fovShift) == 0x714 &&
    offsetof(BtlCameraA, fovShiftMode) == 0x720 ? 1 : -1];
typedef char BtlCameraJobSizeCheck[sizeof(BtlCameraJobA) == 0x6C ? 1 : -1];
typedef char BtlCameraJobDrawCheck[offsetof(BtlCameraJobA, drawJob) == 0x68 ? 1 : -1];
typedef char BtlCameraOrientationOffsetCheck[
    offsetof(BtlCameraA, orientation.current) == 0x7A4 &&
    offsetof(BtlCameraA, orientation.target) == 0x7B0 &&
    offsetof(BtlCameraA, orientation.duration) == 0x7BC &&
    offsetof(BtlCameraA, orientation.currentOffset) == 0x7D0 &&
    offsetof(BtlCameraA, orientation.targetOffset) == 0x7DC ? 1 : -1];
typedef char BtlCameraEditorSelectionOffsetCheck[
    offsetof(BtlCameraA, orientation.editor.selection) == 0x7CC &&
    sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];
typedef char BtlCameraBasePoseOffsetCheck[
    offsetof(BtlCameraA, basePose.position) == 0x580 &&
    offsetof(BtlCameraA, basePose.angle) == 0x5B4 &&
    offsetof(BtlCameraA, basePose.distance) == 0x5C0 &&
    sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];
typedef char BtlCameraBaseYawOffsetCheck[
    offsetof(BtlCameraA, basePose.yaw) == 0x5B8 &&
    sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];

#endif
