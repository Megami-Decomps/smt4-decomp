/* NON_MATCHING: the matrix/corner frame, trig register allocation and quad-call scheduling differ. */
#include <math.h>
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"
#include "map/MapEnemyGlobal.h"
#include "nn/math/MTX34RotXYZFIdx.h"

extern "C" {

void mapInterfaceForwardResource(void);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
void FUN_002ba1e0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the tracked enemies' blinking, camera-facing markers above their world positions. */
void mapEnemyDrawWorldMarkers(void)
{
    MapEnemy *list = g_mapEnemy;
    if (list->state != 8 || g_gameState.unk020 != 0) {
        return;
    }

    f32 halfSize = 20.0f;
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *enemy = &list->entries[index];
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

        f32 angle = atan2f(g_mapCamera->savedEye.x - x, g_mapCamera->savedEye.z - z) * 57.32484f;
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
        u32 nearColor;
        u32 farColor;
        if (distance < 400.0f) {
            nearColor = 0xef6c3eff;
            farColor = 0xfe0b22ff;
        } else if (distance < 800.0f) {
            nearColor = 0xfbc30dff;
            farColor = 0xff6c2bff;
        } else if (distance < 1200.0f) {
            nearColor = 0xfff2c0ff;
            farColor = 0xffd52dff;
        } else {
            nearColor = 0xffffffff;
            farColor = 0x2db5ffff;
        }
        mapInterfaceForwardResource();
        FUN_002ba1e0(nearColor, farColor, nearColor, farColor,
                     corners[0].x, corners[0].y, corners[0].z, corners[1].x, corners[1].y, corners[1].z,
                     corners[2].x, corners[2].y, corners[2].z, corners[3].x, corners[3].y, corners[3].z,
                     u0, 0.0f, u0, 0.65625f, u1, 0.0f, u1, 0.65625f);
        FUN_002ba1e0(0xff, 0xff, 0xff, 0xff,
                     corners[0].x, corners[0].y, corners[0].z, corners[1].x, corners[1].y, corners[1].z,
                     corners[2].x, corners[2].y, corners[2].z, corners[3].x, corners[3].y, corners[3].z,
                     0.65625f, 0.0f, 0.65625f, 0.65625f, 0.984375f, 0.0f, 0.984375f, 0.65625f);
    }
}

} /* extern "C" */
