/* NON_MATCHING: retail converts the euler angles through integer/float conversions (index + fraction) and keeps the sqrt in the VFP, the build's float-only lookup compiles to a shorter sequence; logic equivalent. */
#include "common.h"
#include <math.h>

/* The interpolated sine/cosine table: value and slope per entry. */
struct SinCosEntry {
    f32 sine;
    f32 cosine;
    f32 sineSlope;
    f32 cosineSlope;
};

struct MapPosition {
    f32 x, y, z;
};

/* An object with a world position (accessed fields). */
struct PositionedObject {
    u8 unk00[0x28];
    MapPosition position;   // 0x28
};

/* A scene with a focus position (accessed field). */
struct MapScene {
    u8 unk00[0x1C];
    MapPosition focus;      // 0x1C
};

/* A drifting effect: its owner and the velocity set here. */
struct DriftEffect {
    u8 unk00[0xC];
    PositionedObject *owner;    // 0x0C
    MapPosition velocity;       // 0x10
};

extern "C" {
extern SinCosEntry DAT_00407ed0[];
extern MapScene *g_lmapScene;
u32 randNextInRange(u32 maximum);
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

/* Give the effect a velocity: usually a random heading, one time in ten straight toward the scene focus. */
extern "C" void FUN_00395830(DriftEffect *effect)
{
    PositionedObject *owner = effect->owner;
    f32 speed = 40.0f;
    u32 roll = randNextInRange(99);
    if (roll % 10 == 0) {
        f32 dx = g_lmapScene->focus.x - owner->position.x;
        f32 dy = g_lmapScene->focus.y - owner->position.y;
        f32 dz = g_lmapScene->focus.z - owner->position.z;
        f32 inverseLength = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
        effect->velocity.x = dx * inverseLength * speed;
        effect->velocity.y = dy * inverseLength * speed;
        effect->velocity.z = dz * inverseLength * speed;
        return;
    }
    f32 turns = static_cast<f32>(randNextInRange(360)) * 0.7111111f;
    f32 angle = turns < 0.0f ? -turns : turns;
    while (angle >= 65536.0f)
        angle -= 65536.0f;
    f32 sx, cx, sy, cy, sz, cz;
    lookupSinCos(0.0f, &sx, &cx);
    lookupSinCos(angle, &sy, &cy);
    lookupSinCos(0.0f, &sz, &cz);
    if (!(turns >= 0.0f))
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
    f32 direction[3] = {1.0f, 0.0f, 0.0f};
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(direction, matrix);
    effect->velocity.x = direction[0] * speed;
    effect->velocity.y = direction[1] * speed;
    effect->velocity.z = direction[2] * speed;
}
