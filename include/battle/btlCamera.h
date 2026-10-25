/* battle/btlCamera.cpp: known fields of Apocalypse's camera work block. */
#ifndef BATTLE_BTLCAMERA_H
#define BATTLE_BTLCAMERA_H

#include "common.h"
#include <stddef.h>

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

struct BtlCameraVector3 {
    f32 x, y, z;
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
    };
    /* 0x64c */ u32 flags;
    /* 0x650 */ u8 unk650[8];
    /* 0x658 */ CameraBackend *backend;
    /* 0x65c */ u8 unk65c[0x2e];
    /* 0x68a */ u8 enabled;
    /* 0x68b */ u8 unk68b[0x109];
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
