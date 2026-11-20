/* NON_MATCHING: readable rewrite from retail disassembly compiles (175 vs 136 rows); retail inlines the angle lookups three times with unrolled wrap loops and keeps the angle flags in r3-r5 */
#include "common.h"
#include <math.h>
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

// Interpolated sine/cosine table entry: value and slope for each, indexed by the whole angle byte.
struct TrigEntry {
    f32 sine;       // 0x00
    f32 cosine;     // 0x04
    f32 sineSlope;  // 0x08
    f32 cosineSlope;// 0x0c
};

struct SinCos {
    f32 sine;
    f32 cosine;
};

extern "C" {

extern TrigEntry g_sinCosTable[];

u32 scrGetArg(u32 index);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32* dst, f32* matrix, f32* src);
void lmapCameraSetMode(s32 mode);
void lmapSetSceneId(s32 id);
void FUN_00273840(s32 arg);

// Looks up sine and cosine of an angle given in 256ths of a turn with a fractional part.
static inline SinCos lookupSinCos(f32 angle, bool negate)
{
    f32 a = angle;
    while (a >= 65536.0f) a -= 65536.0f;
    u32 whole = (u32)a;
    f32 fraction = a - (f32)(whole & 0xffff);
    const TrigEntry* entry = &g_sinCosTable[whole & 0xff];
    SinCos result;
    result.sine = entry->sine + fraction * entry->sineSlope;
    result.cosine = entry->cosine + fraction * entry->cosineSlope;
    if (negate) result.sine = -result.sine;
    return result;
}

// Script command: aims the field camera at (x, y, z) from `distance` behind it, pitched by an angle.
u32 FUN_002eef98(void)
{
    f32 x = (f32)(s32)scrGetArg(0);
    f32 y = (f32)(s32)scrGetArg(1);
    f32 z = (f32)(s32)scrGetArg(2);
    f32 pitch = (f32)(s32)scrGetArg(3) * 0.7111111f;
    f32 fov = 40.0f;
    f32 distance = 500.0f;

    f32 direction[3] = { 0.0f, 0.0f, -1.0f };
    SinCos rx = lookupSinCos(0.0f, false);
    SinCos ry = lookupSinCos(fabsf(pitch), pitch < 0.0f);
    SinCos rz = lookupSinCos(0.0f, false);

    f32 matrix[12];
    matrix[0] = rz.cosine * ry.cosine;
    matrix[1] = rx.cosine * rz.sine - rx.sine * rz.cosine * ry.sine;
    matrix[2] = rx.sine * rz.sine + rx.cosine * rz.cosine * ry.sine;
    matrix[3] = 0.0f;
    matrix[4] = rz.sine * ry.cosine;
    matrix[5] = rx.cosine * rz.cosine + rx.sine * rz.sine * ry.sine;
    matrix[6] = rx.sine * rz.cosine - rx.cosine * rz.sine * ry.sine;
    matrix[7] = 0.0f;
    matrix[8] = -ry.sine;
    matrix[9] = rx.sine * ry.cosine;
    matrix[10] = rx.cosine * ry.cosine;
    matrix[11] = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(direction, matrix, direction);

    g_gameState.cameraEye.x = x - direction[0] * distance;
    g_gameState.cameraEye.y = y - direction[1] * distance;
    g_gameState.cameraEye.z = z - direction[2] * distance;
    g_gameState.cameraTarget.x = x;
    g_gameState.cameraTarget.y = y;
    g_gameState.cameraTarget.z = z;
    g_gameState.cameraFov = fov;

    if (g_mapCamera->mode != 3) {
        g_mapCamera->enabled = 1;
        lmapCameraSetMode(3);
        lmapSetSceneId(0x1d);
    }
    FUN_00273840(1);
    return 1;
}

} /* extern "C" */
