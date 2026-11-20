#ifndef BATTLE_BATTLE_EFFECT_PROJECTION_H
#define BATTLE_BATTLE_EFFECT_PROJECTION_H

#include "battle/btlCamera.h"
#include "battle/BtlGlobals.h"

extern "C" f32 FUN_0050dda4(f32 angle);

enum {
    BATTLE_EFFECT_NEAR_PLANE_OFFSET = 15,
    BATTLE_EFFECT_FAR_PLANE_OFFSET = -20
};

/* Computes the scale at the camera plane or one of the two offset planes. */
static __inline f32 battleCameraProjectionScale(s32 plane)
{
    const BtlCameraA *camera = g_btlCamera;
    f32 scale = 0.1f;
    f32 height = camera->basePose.position.z;
    f32 halfAngle = camera->basePose.distance * 0.5f;
    f32 halfTurn = halfAngle / 180.0f;
    f32 angle = halfTurn * 3.1415927f;
    f32 tangent = FUN_0050dda4(angle);
    f32 projected = height / (120.0f / tangent);
    switch (plane) {
    case 0:
        scale = projected;
        break;
    case 1:
        scale = (projected / camera->basePose.projectionDepth) * (camera->basePose.projectionDepth - (f32)BATTLE_EFFECT_NEAR_PLANE_OFFSET);
        break;
    case 2:
        scale = (projected / camera->basePose.projectionDepth) * (camera->basePose.projectionDepth - (f32)BATTLE_EFFECT_FAR_PLANE_OFFSET);
        break;
    }
    return scale;
}

#endif
