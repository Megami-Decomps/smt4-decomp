/* NON_MATCHING: native VFP interpolation, matrix construction, and transform argument scheduling differ. */
#include "shard/W5_W5Match7_SceneState.h"
#include <math.h>
struct AngleSample { f32 sine, cosine, sineStep, cosineStep; };
struct AnglePair { f32 sine, cosine; };
typedef MapVector AngleVector;
struct AngleMatrix { f32 values[12]; };
struct MapAngleTarget {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ AngleVector position;
};
struct MapAngleOwner {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ MapAngleTarget *target;
};
extern "C" {
extern const AngleSample DAT_00536d14[];
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(AngleVector *, const AngleMatrix *, const AngleVector *);
void FUN_00481dd8(MapAngleOwner *);
}

/* The table wraps at 256 samples; fractional indices interpolate each entry. */
static AnglePair interpolateAngle(f32 angle)
{
    bool negative = angle < 0.0f;
    f32 magnitude = fabsf(angle);
    while (magnitude >= 65536.0f) magnitude -= 65536.0f;
    u32 integral = static_cast<u16>(static_cast<u32>(magnitude));
    const AngleSample *sample = &DAT_00536d14[integral & 255];
    f32 fraction = magnitude - static_cast<f32>(integral);
    AnglePair result;
    result.sine = sample->sine + fraction * sample->sineStep;
    result.cosine = sample->cosine + fraction * sample->cosineStep;
    if (negative) result.sine = -result.sine;
    return result;
}

/* Places a target one thousand units along the map-relative rotated X axis. */
extern "C" void FUN_004820ec(MapAngleOwner *owner, f32 angle)
{
    AnglePair x = interpolateAngle(0.0f);
    AnglePair y = interpolateAngle(angle * 0.7111111283302307f);
    AnglePair z = interpolateAngle(0.0f);
    AngleMatrix matrix;
    matrix.values[0] = z.cosine * y.cosine;
    matrix.values[1] = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    matrix.values[2] = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    matrix.values[3] = 0;
    matrix.values[4] = z.sine * y.cosine;
    matrix.values[5] = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    matrix.values[6] = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    matrix.values[7] = 0;
    matrix.values[8] = -y.sine;
    matrix.values[9] = x.sine * y.cosine;
    matrix.values[10] = x.cosine * y.cosine;
    matrix.values[11] = 0;
    AngleVector position = {1.0f, 0.0f, 0.0f};
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&position, &matrix, &position);
    position.x *= 1000.0f;
    position.y *= 1000.0f;
    position.z *= 1000.0f;
    position.x += g_lmapScene->position.x;
    position.y += g_lmapScene->position.y;
    position.z += g_lmapScene->position.z;
    owner->target->position = position;
    FUN_00481dd8(owner);
}
