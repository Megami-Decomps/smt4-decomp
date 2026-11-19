/* NON_MATCHING: typed rewrite; the calls, stores and block order (live particles first, the emit path between the
 * two halves of the live update) follow retail, the register allocation does not. Retail keeps the emitter in fp
 * and saves d8-d14: it reloads the scratch workspace's address at each vector operation and computes
 * -(0.5 * gravity) * step inside the loop, where this build keeps the workspace address in a callee-saved register
 * (spilling the emitter), hoists that product and saves d8-d15, which renumbers most VFP registers. Retail also
 * moves the up axis, the origin and the motion's direction through VFP registers (vldmia/vstmia) and reloads
 * the random axis from the workspace before normalising it. */
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
extern const Vector4 DAT_005c1ea0;      /* the emitters' local "up" axis */

void FUN_001bc460(void);
f32 FUN_001a1ee0(f32 angle);
s32 FUN_0037a844(void);
void FUN_00375c74(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
f32 FUN_0034f8b4(const void *curve, s32 frame, s32 duration);
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

/* Updates a spiral emitter: emits new particles, and moves each live one along its direction (under
 * gravity) while it swings along its own axis. */
extern "C" void effSpiralEmitterUpdate(ParticleEmissionState *emitter)
{
    f32 step = (f32)(s32)effGetFrameStep();
    u32 flags = emitter->flags;
    SpiralEmitterDefinition *definition = static_cast<SpiralEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    SpiralMotion *motion = static_cast<SpiralMotion *>(emitter->motions);
    s32 lifetime = definition->lifetime;
    if (lifetime == 0)
        return;

    vec4Set(&g_vectorScratch.first.vector, definition->rotation.x, definition->rotation.y, definition->rotation.z,
            definition->rotation.w);
    s32 duration = definition->duration;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    FUN_001bc460();
    u8 burst;
    s32 emitCount;
    Vector4 previous;
    FUN_00375c74(emitter, reinterpret_cast<const ParticleEmissionDefinition *>(definition), &burst, &emitCount, step);

    for (u32 i = 0; i < count; i++, motion++, particle++) {
        if (particle->frame >= lifetime) {
            particle->frame = duration != 0 ? -2 : -1;
            FUN_002fe2e8(emitter, particle);
        }
        s32 frame = particle->frame;
        if (frame == -2)
            continue;
        if (frame == -1) {
            if (emitCount == 0)
                continue;

            // Emit a particle: its direction is the emitter's up axis.
            if (flags & 1) {
                motion->direction[1] = 1.0f;
                motion->direction[0] = 0.0f;
                motion->direction[2] = 0.0f;
            } else {
                g_vectorScratch.first.vector = DAT_005c1ea0;
                scratchRotate(&g_vectorScratch.first.vector);
                motion->direction[0] = g_vectorScratch.first.vector.x;
                motion->direction[1] = g_vectorScratch.first.vector.y;
                motion->direction[2] = g_vectorScratch.first.vector.z;
            }
            // The swing axis is a random horizontal unit vector.
            f32 axisX = randomSigned();
            f32 zero = 0.0f;
            f32 axisZ = randomSigned();
            vec4Set(&g_vectorScratch.first.vector, axisX, zero, axisZ, zero);
            vec3Normalize(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector);
            if (!(flags & 1))
                scratchRotate(&g_vectorScratch.first.vector);
            Vector4 axis = g_vectorScratch.first.vector;
            motion->axis[0] = axis.x;
            motion->axis[1] = axis.y;
            motion->axis[2] = axis.z;

            motion->speed = randomVariance(definition->speedVariance) * definition->speed;
            f32 radius = randomVariance(definition->radiusVariance) * definition->radius;
            f32 endRadius = randomVariance(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->phaseStep = randomVariance(definition->phaseStepVariance) * definition->phaseStep;
            motion->phase = shiftRandomNextFraction(NULL) * 6.2831855f;
            motion->wave = FUN_001a1ee0(motion->phase * 40.743664f);

            // The start position: a random distance along the swing axis, from the emitter's origin.
            f32 spread = randomSigned() * definition->spread;
            g_vectorScratch.first.vector = axis;
            vec4Set(&g_vectorScratch.second.vector, spread, spread, spread, zero);
            vec4Multiply(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            if (!(flags & 1)) {
                g_vectorScratch.second.vector = definition->origin;
                vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            }
            particle->position = g_vectorScratch.first.vector;

            motion->scale = randomVariance(definition->scaleVariance);
            if (angleMode == 2) {
                motion->angleOffset = zero;
                motion->angleScale = 1.0f;
            } else {
                motion->angleScale = randomVariance(definition->angleVariance);
                if (angleMode != 1) {
                    motion->angleOffset = zero;
                } else {
                    motion->angleOffset = shiftRandomNextFraction(NULL) * 6.2831855f;
                    if (randomAdvanceShiftRegister(NULL) & 1)
                        motion->angleScale = -motion->angleScale;
                }
            }

            previous = particle->position;
            particle->frame = 0;
            if (burst) {
                // A burst spreads its particles over the whole lifetime.
                f32 age = (f32)(randomAdvanceShiftRegister(NULL) % (u32)lifetime);
                f32 travel = motion->speed * age - gravity * age * age * 0.5f;
                particle->position.x += motion->direction[0] * travel;
                particle->position.y += motion->direction[1] * travel;
                particle->position.z += motion->direction[2] * travel;
                motion->phase += motion->phaseStep * age;
                motion->radius += motion->radiusStep * age;
                f32 wave = FUN_001a1ee0(motion->phase * 40.743664f);
                f32 swing = motion->radius * wave;
                particle->position.x += motion->axis[0] * swing;
                particle->position.y += motion->axis[1] * swing;
                particle->position.z += motion->axis[2] * swing;
                motion->phase += motion->phaseStep;
                motion->radius += motion->radiusStep;
                motion->wave = wave;
                particle->frame = (s32)age;
            }
            FUN_00321d7c(reinterpret_cast<ParticleTransformSample *>(particle),
                         reinterpret_cast<ParticleTransformCurves *>(definition), particle->frame,
                         reinterpret_cast<const EffectColor *>(&previous));
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            particle->curveA = FUN_0034f8b4(definition->curveA, frame, definition->lifetime);
            particle->curveB = FUN_0034f8b4(definition->curveB, frame, definition->lifetime);
            if (burst) {
                FUN_00321e98(emitter, particle);
                particle->frame += effGetFrameStep();
            }
            emitCount--;
        } else {
            previous = particle->position;
            f32 wave = FUN_001a1ee0(motion->phase * 40.743664f);
            f32 swing = motion->radius * (wave - motion->wave);
            particle->position.x += motion->axis[0] * swing;
            particle->position.y += motion->axis[1] * swing;
            particle->position.z += motion->axis[2] * swing;
            f32 travel;
            if (FUN_0037a844() != 0)
                travel = -(0.5f * gravity) * step * ((f32)frame * 2.0f - step + 1.0f) + motion->speed * step;
            else
                travel = motion->speed - gravity * (f32)frame;
            particle->position.x += motion->direction[0] * travel;
            particle->position.y += motion->direction[1] * travel;
            particle->position.z += motion->direction[2] * travel;
            motion->phase += motion->phaseStep * step;
            motion->radius += motion->radiusStep * step;
            motion->wave = wave;
            FUN_00321d7c(reinterpret_cast<ParticleTransformSample *>(particle),
                         reinterpret_cast<ParticleTransformCurves *>(definition), frame,
                         reinterpret_cast<const EffectColor *>(&previous));
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            particle->curveA = FUN_0034f8b4(definition->curveA, frame, definition->lifetime);
            particle->curveB = FUN_0034f8b4(definition->curveB, frame, definition->lifetime);
            FUN_0027134c(emitter, particle);
            particle->frame = effGetFrameStep() + frame;
        }
    }
}
