/* NON_MATCHING: the matrix/corner frame is 124 vs retail's 212 bytes; trig and quad-call scheduling differ. */
#include <math.h>
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
#include "map/MapEnemyGlobal.h"
#include "nn/math/MTX34RotXYZFIdx.h"
#include "shard/Shard0036.h"

extern "C" {

void mapRenderApplyPrimary(void);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
void FUN_0019e3d0(f32 x0, f32 y0, f32 z0, RgbaWord color0,
                  f32 x1, f32 y1, f32 z1, RgbaWord color1,
                  f32 x2, f32 y2, f32 z2, RgbaWord color2,
                  f32 x3, f32 y3, f32 z3, RgbaWord color3,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the tracked enemies' blinking, camera-facing markers above their world positions. */
void mapEnemyDrawWorldMarkers(void)
{
    MapEnemyA *list = g_mapEnemy;
    if (list->state != 8 || g_gameState.unk020 != 0 || g_gameState.paused != 0) {
        return;
    }

    f32 halfSize = 20.0f;
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *enemy = &list->entries[index];
        if (!enemy->active) {
            continue;
        }
        enemy->markerVisible = 0;
        enemy->tracking = 0;
        if (!enemy->registered) {
            continue;
        }
        switch (enemy->state) {
        case 6:
        case 7:
        case 8:
        case 13:
        case 14:
        case 15:
        case 21:
        case 26:
        case 28:
            break;
        default:
            continue;
        }
        if (enemy->state == 21 && enemy->elapsed == 0) {
            continue;
        }

        f32 distance = enemy->targetDistance;
        f32 x = enemy->position.x;
        f32 y = enemy->position.y + 220.0f;
        f32 z = enemy->position.z;
        enemy->onRadar = 1;
        enemy->playerDistance = distance;
        enemy->tracking = 1;
        enemy->markerVisible = 1;
        enemy->markerPosition.x = x;
        enemy->markerPosition.y = y;
        enemy->markerPosition.z = z;

        f32 angle = atan2f(g_lmapView->savedEye.x - x, g_lmapView->savedEye.z - z) * 57.32484f;
        nw::math::MTX34 rotation;
        nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, angle * (256.0f / 360.0f), 0.0f);

        nw::math::VEC3 corners[4];
        nw::math::VEC3 corner;
        corner.x = -halfSize;
        corner.y = halfSize;
        corner.z = 0.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&corners[0], &rotation, &corner);
        corner.x = -halfSize;
        corner.y = -halfSize;
        corner.z = 0.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&corners[1], &rotation, &corner);
        corner.x = halfSize;
        corner.y = halfSize;
        corner.z = 0.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&corners[2], &rotation, &corner);
        corner.x = halfSize;
        corner.y = -halfSize;
        corner.z = 0.0f;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&corners[3], &rotation, &corner);
        for (s32 i = 0; i < 4; ++i) {
            corners[i].x += x;
            corners[i].y += y;
            corners[i].z += z;
        }

        f32 u0;
        f32 u1;
        ++enemy->blinkTimer;
        if (enemy->blinkTimer % 20 < 10) {
            u0 = 0.0f;
            u1 = 0.328125f;
        } else {
            u0 = 0.328125f;
            u1 = 0.65625f;
        }
        RgbaWord nearColor;
        RgbaWord farColor;
        if (distance < 400.0f) {
            nearColor.word = 0xef6c3eff;
            farColor.word = 0xfe0b22ff;
        } else if (distance < 800.0f) {
            nearColor.word = 0xfbc30dff;
            farColor.word = 0xff6c2bff;
        } else if (distance < 1200.0f) {
            nearColor.word = 0xfff2c0ff;
            farColor.word = 0xffd52dff;
        } else {
            nearColor.word = 0xffffffff;
            farColor.word = 0x2db5ffff;
        }
        mapRenderApplyPrimary();
        FUN_0019e3d0(corners[0].x, corners[0].y, corners[0].z, nearColor,
                     corners[1].x, corners[1].y, corners[1].z, farColor,
                     corners[2].x, corners[2].y, corners[2].z, nearColor,
                     corners[3].x, corners[3].y, corners[3].z, farColor,
                     u0, 0.0f, u0, 0.65625f, u1, 0.0f, u1, 0.65625f);
        RgbaWord overlayColor;
        overlayColor.word = 0xff;
        FUN_0019e3d0(corners[0].x, corners[0].y, corners[0].z, overlayColor,
                     corners[1].x, corners[1].y, corners[1].z, overlayColor,
                     corners[2].x, corners[2].y, corners[2].z, overlayColor,
                     corners[3].x, corners[3].y, corners[3].z, overlayColor,
                     0.65625f, 0.0f, 0.65625f, 0.65625f, 0.984375f, 0.0f, 0.984375f, 0.65625f);
    }
}

} /* extern "C" */
