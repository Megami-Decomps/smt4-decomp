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

struct BtlCameraA {
    /* 0x000 */ f32 vector[3];
    /* 0x00c */ f32 unk0C;
    /* 0x010 */ f32 unk10;
    /* 0x014 */ f32 unk14;
    /* 0x018 */ f32 unk18;
    /* 0x01c */ u8 unk1C[0x1c];
    /* 0x038 */ s32 unk38;
    /* 0x03c */ s32 unk3C;
    /* 0x040 */ u32 job;
    /* 0x044 */ u8 unk044[0x28];
    /* 0x06c */ u8 registryEntry[0x5E0];
    /* 0x64c */ u32 flags;
    /* 0x650 */ u8 unk650[8];
    /* 0x658 */ CameraBackend *backend;
    /* 0x65c */ u8 unk65c[0x2e];
    /* 0x68a */ u8 enabled;
    /* 0x68b */ u8 unk68b[0x111];
    /* 0x79c */ BtlCameraGraphics graphics;
    /* 0x7a4 */ u8 unk7A4[0x110];
};

typedef char BtlCameraSizeCheck[sizeof(BtlCameraA) == 0x8B4 ? 1 : -1];
typedef char BtlCameraRegistryCheck[offsetof(BtlCameraA, registryEntry) == 0x6C ? 1 : -1];
typedef char BtlCameraFlagsCheck[offsetof(BtlCameraA, flags) == 0x64C ? 1 : -1];
typedef char BtlCameraBackendCheck[offsetof(BtlCameraA, backend) == 0x658 ? 1 : -1];
typedef char BtlCameraEnabledCheck[offsetof(BtlCameraA, enabled) == 0x68A ? 1 : -1];
typedef char BtlCameraGraphicsCheck[offsetof(BtlCameraA, graphics) == 0x79C ? 1 : -1];
typedef char BtlCameraJobSizeCheck[sizeof(BtlCameraJobA) == 0x6C ? 1 : -1];
typedef char BtlCameraJobDrawCheck[offsetof(BtlCameraJobA, drawJob) == 0x68 ? 1 : -1];

#endif
