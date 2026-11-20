#ifndef BATTLE_BTL_CAMERA_FOV_SHIFT_H
#define BATTLE_BTL_CAMERA_FOV_SHIFT_H

#include "battle/btlCamera.h"

/* Starts a field-of-view transition on the battle camera. */
extern "C" void btlCameraStartFovShift(BtlCamera *camera, f32 targetFov, u32 frames, s32 mode, s32 preserve);

#endif
