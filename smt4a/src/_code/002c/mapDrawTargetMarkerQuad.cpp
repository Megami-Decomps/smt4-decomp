/* NON_MATCHING: complete (341 raw / 271 shape lines). The 208-byte frame and the saved registers are retail's; inside it retail orders the locals corner 36, corners 64, rotation 144 (build 76, 16, 120) around the same 84 unused bytes, loads the target's y before adding 220 and passes that copy to distSpatial, and schedules FUN_0019e3d0's four stack words between the register moves (as in frameTexDrawXfadeCapture: the callee's real parameter order is not settled; its definition lists each vertex as x, y, z, colour, which gives 313 raw here). halfSize is not const: retail negates it at run time (`vneg s21, s18`). */
#include "battle/btlView.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include <math.h>
#include "nw/math/MTX33.h"
#include "nn/math/MTX34RotXYZFIdx.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {
extern BattleViewState g_battleViewState;
void mapRenderApplySecondary();
/* nn::math::VEC3Transform for a 3x4 matrix: output = matrix * (input, 1). */
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
void FUN_0019e3d0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the target marker in the field: a blinking 40-unit quad 220 above the target position, turned
   to face the camera, coloured by the player's distance, with its fixed overlay on top. */
void mapDrawTargetMarkerQuad()
{
    if (!gameFlagIsSet(0x4D0))
        return;
    BattleViewState *view = &g_battleViewState;
    if (g_gameState.unk020 != 0 || g_gameState.paused != 0 || (view->unk2c != 8 && view->unk2c != 9))
        return;

    f32 halfSize = 20.0f;
    f32 x = view->camera.position.x;
    f32 y = view->camera.position.y + 220.0f;
    f32 z = view->camera.position.z;
    f32 distance = distSpatial(g_lmapScene->pose.position, view->camera.position);
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
    for (s32 i = 0; i < 4; i++) {
        corners[i].x += x;
        corners[i].y += y;
        corners[i].z += z;
    }

    f32 u0;
    f32 u1;
    view->indicator.frame++;
    if (view->indicator.frame % 20 < 10) {
        u0 = 0.0f;
        u1 = 0.328125f;
    } else {
        u0 = 0.328125f;
        u1 = 0.65625f;
    }
    u32 nearColor;
    u32 farColor;
    if (distance < 400.0f) {
        nearColor = 0xEF6C3EFF;
        farColor = 0xFE0B22FF;
    } else if (distance < 800.0f) {
        nearColor = 0xFBC30DFF;
        farColor = 0xFF6C2BFF;
    } else if (distance < 1200.0f) {
        nearColor = 0xFFF2C0FF;
        farColor = 0xFFD52DFF;
    } else {
        nearColor = 0xFFFFFFFF;
        farColor = 0x2DB5FFFF;
    }
    mapRenderApplySecondary();
    FUN_0019e3d0(nearColor, farColor, nearColor, farColor,
        corners[0].x, corners[0].y, corners[0].z, corners[1].x, corners[1].y, corners[1].z,
        corners[2].x, corners[2].y, corners[2].z, corners[3].x, corners[3].y, corners[3].z,
        u0, 0.0f, u0, 0.65625f, u1, 0.0f, u1, 0.65625f);
    FUN_0019e3d0(0xFF, 0xFF, 0xFF, 0xFF,
        corners[0].x, corners[0].y, corners[0].z, corners[1].x, corners[1].y, corners[1].z,
        corners[2].x, corners[2].y, corners[2].z, corners[3].x, corners[3].y, corners[3].z,
        0.65625f, 0.0f, 0.65625f, 0.65625f, 0.984375f, 0.0f, 0.984375f, 0.65625f);
}
}
