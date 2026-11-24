/* NON_MATCHING: complete rewrite, 438 lines (342 by shape). The blocks, calls and constants are retail's. Retail's
 * frame is 252 bytes against 124: besides the corner, the four corners and the rotation it keeps 128 bytes it never
 * writes (28 below the corner, 96 between it and the corners), so every sp offset differs. Inside the same blocks
 * retail schedules the rotation's products and stores in another order and loads the fade offset's x apart from
 * y/z (adding it as x + offset, the build as offset + x). */
#include <math.h>
#include "map/MapIfGlobals.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "game/GameState.h"
#include "gamedata/MapSaveBlock.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/RenderCtxSelect.h"
#include "nw/math/MTX33.h"
#include "nn/math/MTX34RotXYZFIdx.h"
#include "util/TrigF32.h"

#define DEGREES_TO_RADIANS 0.017453292f
#define DEGREES_TO_FIDX (256.0f / 360.0f)

extern "C" {

bool lmapMainIsAtLeastHalf(void);
/* nn::math::VEC3Transform for a 3x4 matrix: output = matrix * (input, 1). */
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the marker that floats beside the player on the map: a bobbing quad turned to face the camera
   (tilted 45 degrees on a field map), tinted by the fade's id and stepping through its 2x2 sprite sheet
   every six frames. */
void mapIfDrawFloatingMarker(void)
{
    MapIfState *state = g_mapIf.state;
    MapSaveBlock *mapBlock = gameGetMapBlock();
    g_mapIf.markerFrame++;
    g_mapIf.markerPhase += 0.2f;

    u32 color = 0xFFFFFFFF;
    if (state->fade.active) {
        switch (state->fade.id) {
        case -1:
        case 0:
            color = 0xFFF0F0FF;
            break;
        case 1:
            color = 0xFFC0C0FF;
            break;
        case 2:
            color = 0xFFA0A0FF;
            break;
        case 3:
            color = 0xFF7070FF;
            break;
        default:
            color = 0xFF4040FF;
            break;
        }
    }

    f32 halfSize = 100.0f;
    f32 x;
    f32 y;
    f32 z;
    if (g_gameState.mapId >= 100) {
        if (!lmapMainIsAtLeastHalf()) {
            return;
        }
        x = g_lmapScene->pose.position.x;
        y = g_lmapScene->pose.position.y;
        z = g_lmapScene->pose.position.z;
        x += libm_sinf(g_mapCamera->heading * DEGREES_TO_RADIANS) * halfSize;
        z += libm_cosf(g_mapCamera->heading * DEGREES_TO_RADIANS) * halfSize;
        y += 400.0f;
        y += libm_sinf(g_mapIf.markerPhase) * 25.0f;
        x += state->fade.offset[0];
        y += state->fade.offset[1];
        z += state->fade.offset[2];
    } else {
        x = g_lmapScene->pose.position.x;
        y = g_lmapScene->pose.position.y;
        z = g_lmapScene->pose.position.z;
        if (mapBlock->cameraPresetOffset != 2) {
            x += libm_sinf((g_mapCamera->heading + 90.0f) * DEGREES_TO_RADIANS) * 50.0f;
            z += libm_cosf((g_mapCamera->heading + 90.0f) * DEGREES_TO_RADIANS) * 50.0f;
            y += halfSize;
            y += libm_sinf(g_mapIf.markerPhase) * 5.0f;
            x += state->fade.offset[0];
            y += state->fade.offset[1];
            z += state->fade.offset[2];
            halfSize = 13.0f;
        } else {
            x += libm_sinf((g_mapCamera->heading + 130.0f) * DEGREES_TO_RADIANS) * 30.0f;
            z += libm_cosf((g_mapCamera->heading + 130.0f) * DEGREES_TO_RADIANS) * 30.0f;
            y += 150.0f;
            y += libm_sinf(g_mapIf.markerPhase) * 2.0f;
            halfSize = 8.0f;
            x += state->fade.offset[0] * 0.5f;
            y += state->fade.offset[1] * 0.5f;
            z += state->fade.offset[2] * 0.5f;
        }
    }

    f32 angle = atan2f(g_mapCamera->savedEye.x - x, g_mapCamera->savedEye.z - z) * 57.32484f;
    nw::math::MTX34 rotation;
    if (g_gameState.mapId >= 100) {
        nw::math::MTX34RotXYZFIdx(&rotation, -45.0f * DEGREES_TO_FIDX, angle * DEGREES_TO_FIDX, 0.0f);
    } else {
        nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, angle * DEGREES_TO_FIDX, 0.0f);
    }

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
    f32 v0;
    f32 u1;
    f32 v1;
    s32 step = g_mapIf.markerFrame / 6 % 4;
    if (step == 0) {
        u0 = 0.0f;
        v0 = 0.0f;
        u1 = 0.5f;
        v1 = 0.5f;
    } else if (step == 1) {
        u0 = 0.5f;
        v0 = 0.0f;
        u1 = 1.0f;
        v1 = 0.5f;
    } else if (step == 2) {
        u0 = 0.0f;
        v0 = 0.5f;
        u1 = 0.5f;
        v1 = 1.0f;
    } else {
        u0 = 0.5f;
        v0 = 0.5f;
        u1 = 1.0f;
        v1 = 1.0f;
    }
    renderCtxSelectTexture(g_titleScene, reinterpret_cast<AsdTexture *>(g_mapIf.widgets->widget[0x16]));
    FUN_002ba1e0(color, color, color, color,
                 corners[0].x, corners[0].y, corners[0].z, corners[1].x, corners[1].y, corners[1].z,
                 corners[2].x, corners[2].y, corners[2].z, corners[3].x, corners[3].y, corners[3].z,
                 u0, v0, u0, v1, u1, v0, u1, v1);
}

} /* extern "C" */
