/* NON_MATCHING: VFP register allocation and the order of the matrix products differ; the effect position, the table-based rotation and the call sequence are the same. */
#include "map/lmapMain.h"
#include "map/mapDepart.h"
#include "nw/math/MTX34.h"

using nw::math::MTX34;

extern "C" {
f32 FUN_001bbf0c(f32 radians);
f32 FUN_001bc124(f32 radians);
void FUN_0027376c(s32 slot);
void FUN_00294774(s32 slot, f32 x, f32 y, f32 z);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *dest, const MTX34 *source);
void eplSlotApplyParameters(s32 slot, const MTX34 *matrix);
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
extern f32 DAT_00536d14[]; /* sine/cosine table: per entry base sine, base cosine, sine slope, cosine slope */

enum {
    SIN_COS_TABLE_SIZE = 256,
    SIN_COS_WRAP = 65536
};

/* Sine and cosine of an angle (radians) by linear interpolation of the 256-entry table. */
static void sinCosFromTable(f32 radians, f32 *sine, f32 *cosine)
{
    f32 scaled = radians * 40.764328f;
    f32 magnitude = scaled < 0.0f ? -scaled : scaled;

    while (magnitude >= (f32)SIN_COS_WRAP) {
        magnitude -= (f32)SIN_COS_WRAP;
    }
    u32 whole = (u32)magnitude;
    f32 fraction = magnitude - (f32)(whole & 0xFFFF);
    const f32 *entry = &DAT_00536d14[(whole & 0xFF) * 4];

    *sine = entry[0] + fraction * entry[2];
    *cosine = entry[1] + fraction * entry[3];
    if (scaled < 0.0f) {
        *sine = -*sine;
    }
}

/* Rotation matrix from the sines and cosines of the X, Y and Z angles. */
static void rotationFromSinCos(MTX34 *matrix, f32 sinX, f32 cosX, f32 sinY, f32 cosY, f32 sinZ, f32 cosZ)
{
    matrix->m[0][0] = cosZ * cosY;
    matrix->m[0][1] = sinX * cosZ * sinY - cosX * sinZ;
    matrix->m[0][2] = sinX * sinZ + cosX * cosZ * sinY;
    matrix->m[0][3] = 0.0f;
    matrix->m[1][0] = sinZ * cosY;
    matrix->m[1][1] = cosX * cosZ + sinX * sinZ * sinY;
    matrix->m[1][2] = cosX * sinZ * sinY - sinX * cosZ;
    matrix->m[1][3] = 0.0f;
    matrix->m[2][0] = -sinY;
    matrix->m[2][1] = sinX * cosY;
    matrix->m[2][2] = cosX * cosY;
    matrix->m[2][3] = 0.0f;
}

/* Places the map effect at a distance and bearing from the scene position and applies its
 * orientation: a plain heading normally, tilted on the Y axis in the one scripted scene. */
void FUN_003136e4(f32 angle, f32 distance)
{
    f32 x = g_lmapScene->transform.position[0];
    f32 y = g_lmapScene->transform.position[1];
    f32 z = g_lmapScene->transform.position[2];
    f32 radians = (g_lmapScene->transform.headingDegrees + angle) * 0.017453292f;
    x += FUN_001bc124(radians) * distance;
    z += FUN_001bbf0c(radians) * distance;
    y += 5.0f;
    FUN_0027376c(0);

    f32 sinX, cosX, sinY, cosY, sinZ, cosZ;
    sinCosFromTable(0.0f, &sinX, &cosX);
    MTX34 matrix;
    MTX34 applied;

    if (g_gameState.collision.unk3A3 != 0) {
        if (g_gameState.mode == 38 && g_gameState.submode == 3) {
            sinCosFromTable(0.29656f, &sinY, &cosY);
            rotationFromSinCos(&matrix, sinX, cosX, sinY, cosY, sinX, cosX);
            nn_math_ARMv6_MTX34CopyAsm(&applied, &matrix);
            eplSlotApplyParameters(0, &applied);
        }
    } else {
        rotationFromSinCos(&matrix, sinX, cosX, sinX, cosX, sinX, cosX);
        nn_math_ARMv6_MTX34CopyAsm(&applied, &matrix);
        eplSlotApplyParameters(0, &applied);
    }
    FUN_00294774(0, x, y, z);
}
}
