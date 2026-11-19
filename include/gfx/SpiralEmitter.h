/* The spiral emitters (Apocalypse): effSpiralEmitterUpdate and effSwingEmitterUpdate, the same emitter without the two
 * curve values. Both lay out their particles, motions and definition as below and build their vectors in
 * g_vectorScratch with the same inline operations. Only Apocalypse's units include this. */
#ifndef GFX_SPIRALEMITTER_H
#define GFX_SPIRALEMITTER_H

#include "gfx/ParticleEmission.h"
#include "gfx/ParticleTransform.h"
#include "gfx/VectorScratch.h"
#include "gfx/QuaternionWorkspace.h"
#include "shard/W5_W5Match2_ShiftRandom.h"
#include "code/Code0051_Smt4a.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include <math.h>

/* One particle of the emitter (0x28 bytes): the transform sample every emitter keeps, then the two
 * curve values this emitter samples. frame is -1 while the slot is free and -2 once a one-shot
 * emitter has used it up. */
struct SpiralParticle {
    /* 0x00 */ Vector4 position;
    /* 0x10 */ s32 frame;
    /* 0x14 */ u32 color;
    /* 0x18 */ f32 scale;
    /* 0x1C */ f32 angle;
    /* 0x20 */ f32 curveA;
    /* 0x24 */ f32 curveB;
};

/* The motion of one particle (0x3C bytes): it travels along `direction` and swings along `axis`. */
struct SpiralMotion {
    /* 0x00 */ f32 direction[3];
    /* 0x0C */ f32 axis[3];
    /* 0x18 */ f32 phase;           /* radians */
    /* 0x1C */ f32 wave;            /* the wave value at the previous step */
    /* 0x20 */ f32 radius;
    /* 0x24 */ f32 radiusStep;
    /* 0x28 */ f32 phaseStep;
    /* 0x2C */ f32 speed;
    /* 0x30 */ f32 scale;
    /* 0x34 */ f32 angleOffset;
    /* 0x38 */ f32 angleScale;
};

/* The emitter's definition, as this emitter type lays it out. */
struct SpiralEmitterDefinition {
    /* 0x00 */ Vector4 origin;
    /* 0x10 */ RotationQuaternion rotation;
    /* 0x20 */ s32 duration;        /* 0: the emitter loops */
    /* 0x24 */ u8 unk24[0x48];
    /* 0x6C */ f32 scaleVariance;
    /* 0x70 */ u8 unk70[0x28];
    /* 0x98 */ f32 angleVariance;
    /* 0x9C */ u8 angleMode;        /* 1: random angle and spin direction, 2: no rotation */
    /* 0x9D */ u8 unk9D[0x1B];
    /* 0xB8 */ s32 lifetime;        /* frames a particle lives */
    /* 0xBC */ u8 unkBC[0xC];
    /* 0xC8 */ f32 spread;
    /* 0xCC */ f32 speed;
    /* 0xD0 */ f32 speedVariance;
    /* 0xD4 */ f32 gravity;
    /* 0xD8 */ f32 radius;
    /* 0xDC */ f32 radiusVariance;
    /* 0xE0 */ f32 endRadius;
    /* 0xE4 */ f32 endRadiusVariance;
    /* 0xE8 */ f32 phaseStep;
    /* 0xEC */ f32 phaseStepVariance;
    /* 0xF0 */ u8 unkF0[8];
    /* 0xF8 */ u8 curveA[0x2C];
    /* 0x124 */ u8 curveB[0x2C];
};
typedef char SpiralEmitterOffsets[sizeof(SpiralParticle) == 0x28 && sizeof(SpiralMotion) == 0x3C &&
    offsetof(SpiralEmitterDefinition, scaleVariance) == 0x6C && offsetof(SpiralEmitterDefinition, angleMode) == 0x9C &&
    offsetof(SpiralEmitterDefinition, lifetime) == 0xB8 && offsetof(SpiralEmitterDefinition, spread) == 0xC8 &&
    offsetof(SpiralEmitterDefinition, phaseStep) == 0xE8 && offsetof(SpiralEmitterDefinition, curveA) == 0xF8 &&
    offsetof(SpiralEmitterDefinition, curveB) == 0x124 ? 1 : -1];

extern "C" {
extern const Vector4 DAT_005c1ea0;      /* the spiral emitter's local "up" axis */
extern const Vector4 DAT_005c1e80;      /* the swing emitter's (effSwingEmitterUpdate) */

}

/* Rotates `v` by the scratch matrix (the emitter's orientation). */
static __inline void scratchRotate(Vector4 *v)
{
    const f32 (*m)[4] = g_vectorScratch.matrix.rows;
    f32 x = v->x * m[0][0] + v->y * m[1][0] + v->z * m[2][0];
    f32 y = v->x * m[0][1] + v->y * m[1][1] + v->z * m[2][1];
    f32 z = v->x * m[0][2] + v->y * m[1][2] + v->z * m[2][2];
    f32 w = v->x * m[0][3] + v->y * m[1][3] + v->z * m[2][3];
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}


static __inline void vec4Set(Vector4 *v, f32 x, f32 y, f32 z, f32 w)
{
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}

/* Scales `v` to unit length unless it is the zero vector. */
static __inline void vec3Normalize(Vector4 *out, const Vector4 *v)
{
    f32 length = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    if (length > 0.0f) {
        out->x = v->x / length;
        out->y = v->y / length;
        out->z = v->z / length;
    }
}

static __inline void vec4Multiply(Vector4 *out, const Vector4 *a, const Vector4 *b)
{
    out->x = a->x * b->x;
    out->y = a->y * b->y;
    out->z = a->z * b->z;
    out->w = a->w * b->w;
}

static __inline void vec4Add(Vector4 *out, const Vector4 *a, const Vector4 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
    out->w = a->w + b->w;
}

static __inline void vec3Set(f32 *v, f32 x, f32 y, f32 z)
{
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

/* A random factor in [1 - variance, 1], reading the variance after the random draw as effSwingEmitterUpdate's retail
 * code does (it loads each variance from the definition once the call has returned). */
static __inline f32 randomVarianceOf(const f32 &variance)
{
    f32 random = shiftRandomNextFraction(NULL);
    return (1.0f - variance) + random * variance;
}

/* A random factor in [1 - variance, 1]. */
static f32 randomVariance(f32 variance)
{
    f32 random = shiftRandomNextFraction(NULL);
    return (1.0f - variance) + random * variance;
}

/* A random value in [-1, 1). */
static f32 randomSigned(void)
{
    return (shiftRandomNextFraction(NULL) - 0.5f) * 2.0f;
}

#endif
