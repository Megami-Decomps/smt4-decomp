#ifndef BATTLE_CAMERA_SCALAR_TRANSITION_H
#define BATTLE_CAMERA_SCALAR_TRANSITION_H

#include "battle/btlCamera.h"

/* The timeline callback's frame counter. */
struct BtlCameraCueWork {
    /* 0x000 */ u8 unk000[0x56C];
    /* 0x56C */ u32 frame;
};

/* Fields of the camera command that starts a lens transition (command 10). */
struct BtlCameraLensCommand {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ s16 fov;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 frames;
    /* 0x2C */ u8 unk2c[0x1C];
    /* 0x48 */ s16 mode;
};

typedef char BtlCameraCueLayoutCheck[offsetof(BtlCameraCueWork, frame) == 0x56C &&
    offsetof(BtlCameraLensCommand, fov) == 0x24 && offsetof(BtlCameraLensCommand, frames) == 0x28 &&
    offsetof(BtlCameraLensCommand, mode) == 0x48 ? 1 : -1];

/* btlCameraStartFovShift takes each game's own camera type, so it is declared per game. */
#include "battle/BtlCameraFovShift.h"

#endif
