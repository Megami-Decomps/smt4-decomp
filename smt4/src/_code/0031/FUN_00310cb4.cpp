/* NON_MATCHING: retail converts the three euler angles through VectorFloatToUnsigned/UnsignedToFloat (integer index + fraction) and keeps the matrix in registers; the build's float-only lookup compiles to a different sequence. */
#include "common.h"

/* Script command: place the field camera at a distance behind a target, looking along a heading. */

/* The interpolated sine/cosine table: value and slope per entry. */
struct SinCosEntry {
    f32 sine;
    f32 cosine;
    f32 sineSlope;
    f32 cosineSlope;
};

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0xc4];
    f32 f0049f9e0; /* 0x0c4 */
    f32 f0049f9e4; /* 0x0c8 */
    f32 f0049f9e8; /* 0x0cc */
    f32 f0049f9ec; /* 0x0d0 */
    f32 f0049f9f0; /* 0x0d4 */
    f32 f0049f9f4; /* 0x0d8 */
    f32 f0049f9f8; /* 0x0dc */
};
extern GameStateView g_gameState;

extern SinCosEntry DAT_00407ed0[];







s32 scrGetArg(u32 index);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(f32 *vector, f32 (*matrix)[4]);
}

/* Sine and cosine of an angle given in 1/256 turns, interpolated between table entries. */
static __inline void lookupSinCos(f32 angle, f32 *sine, f32 *cosine)
{
    u32 whole = static_cast<u32>(angle);
    const SinCosEntry *entry = &DAT_00407ed0[whole & 0xFF];
    f32 fraction = angle - static_cast<f32>(whole & 0xFFFF);
    *sine = entry->sine + fraction * entry->sineSlope;
    *cosine = entry->cosine + fraction * entry->cosineSlope;
}

extern "C" u32 FUN_00310cb4(void)
{
    f32 x = static_cast<f32>(scrGetArg(0));
    f32 y = static_cast<f32>(scrGetArg(1));
    f32 z = static_cast<f32>(scrGetArg(2));
    f32 heading = static_cast<f32>(scrGetArg(3));
    f32 distance = static_cast<f32>(scrGetArg(4));
    f32 extra = static_cast<f32>(scrGetArg(5));
    f32 direction[3] = {0.0f, 0.0f, -1.0f};
    f32 turns = heading * 0.7111111f;
    bool positive = turns >= 0.0f;
    f32 angle = turns < 0.0f ? -turns : turns;
    while (angle >= 65536.0f)
        angle -= 65536.0f;
    f32 sx, cx, sy, cy, sz, cz;
    lookupSinCos(0.0f, &sx, &cx);
    lookupSinCos(angle, &sy, &cy);
    lookupSinCos(0.0f, &sz, &cz);
    if (!positive)
        sy = -sy;
    f32 matrix[3][4];
    matrix[0][0] = cz * cy;
    matrix[0][1] = sx * cz * sy - cx * sz;
    matrix[0][2] = sx * sz + cx * cz * sy;
    matrix[0][3] = 0.0f;
    matrix[1][0] = sz * cy;
    matrix[1][1] = cx * cz + sx * sz * sy;
    matrix[1][2] = cx * sz * sy - sx * cz;
    matrix[1][3] = 0.0f;
    matrix[2][0] = -sy;
    matrix[2][1] = sx * cy;
    matrix[2][2] = cx * cy;
    matrix[2][3] = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(direction, matrix);
    g_gameState.f0049f9e0 = x - direction[0] * distance;
    g_gameState.f0049f9e4 = y - direction[1] * distance;
    g_gameState.f0049f9e8 = z - direction[2] * distance;
    g_gameState.f0049f9ec = x;
    g_gameState.f0049f9f0 = y;
    g_gameState.f0049f9f4 = z;
    g_gameState.f0049f9f8 = extra;
    return 1;
}
