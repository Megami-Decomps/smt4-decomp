/* NON_MATCHING: retail reserves 132 stack bytes and assigns the scratch-vector and origin
 * components to different VFP registers. Its emission bookkeeping and matrix loads also schedule differently. */
#include "gfx/OrbitEmitter.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {
f32 mathSinFixedAngle(f32 angle);
f32 phaseCosInterpolate(f32 angle);
void FUN_0024b7bc(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024add8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024b5f0(ParticleEmissionState *emitter, SpiralParticle *particle);
void effSampleParticleTransform(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
/* Replaces the shared transform with an X-axis rotation. */
void matrixSetRotationX(f32 angle);
/* Applies the pending rotation to the scratch matrix. */
void FUN_002482d4(void);
}

/* Points the scratch matrix along the particle's orbit plane. The point on the circle is then written
 * out at each site: retail reads the phase again for the sine, which an inline taking it by value does not. */
static __inline void orbitBuildPlane(const OrbitMotion *motion)
{
    matrixSetRotationX(motion->pitch);
    matrixSetRotationY(motion->yaw);
    FUN_002482d4();
}

/* Updates an orbit emitter: emits new particles, and moves each live one round its circle while the
 * circle's radius changes and the particle falls under gravity. */
extern "C" void effOrbitEmitterUpdate(ParticleEmissionState *emitter)
{
    u32 flags = emitter->flags;
    OrbitEmitterDefinition *definition = (OrbitEmitterDefinition *)emitter->definition;
    u32 count = emitter->initialCount;
    SpiralParticle *particle = (SpiralParticle *)emitter->particles;
    OrbitMotion *motion = (OrbitMotion *)emitter->motions;
    s32 lifetime = definition->lifetime;
    if (lifetime == 0)
        return;
    s32 duration = definition->duration;
    f32 zero = 0.0f;
    u8 angleMode = definition->angleMode;
    Vector4 origin = definition->origin;
    f32 gravity = definition->gravity;
    f32 acceleration = definition->phaseAcceleration;
    bool burst;
    s32 emitCount;
    if (duration != 0 && emitter->frame >= duration) {
        burst = false;
        emitCount = 0;
    } else if (emitter->frame == 0 && definition->burstOnFirstFrame) {
        burst = true;
        if (definition->randomness > zero) {
            emitCount = (s32)(shiftRandomNextFraction(NULL) * (1.1f - definition->randomness) * (f32)emitter->initialCount);
        } else {
            emitCount = emitter->initialCount;
        }
    } else {
        burst = false;
        f32 emission;
        if (definition->randomness > zero) {
            emission = (emitter->remainder += (f32)definition->rate * (shiftRandomNextFraction(NULL) * (1.1f - definition->randomness)));
        } else {
            emission = (emitter->remainder += (f32)definition->rate);
        }
        emitCount = (s32)fabsf(emission);
        emitter->remainder = emission - (f32)emitCount;
    }

    Vector4 previous;
    for (u32 i = 0; i < count; i++, motion++, particle++) {
        if (particle->frame >= lifetime) {
            particle->frame = duration != 0 ? -2 : -1;
            FUN_0024b7bc(emitter, particle);
        }
        s32 frame = particle->frame;
        if (frame == -2)
            continue;
        if (frame != -1) {
            previous = particle->position;
            f32 half = 0.5f;
            f32 age = (f32)frame;
            const f32 phaseAdvance = (motion->phaseSpeed + acceleration * age * half) * age;
            motion->height -= gravity * age;
            motion->radius += motion->radiusStep;
            f32 phase = motion->phase + phaseAdvance;
            orbitBuildPlane(motion);
            f32 radius = motion->radius;
            f32 x = phaseCosInterpolate(phase * 40.743664f) * radius;
            f32 z = mathSinFixedAngle(phase * 40.743664f) * radius;
            vec4Set(&g_vectorScratch.first.vector, x, zero, z, zero);
            scratchRotate(&g_vectorScratch.first.vector);
            f32 px = g_vectorScratch.first.vector.x;
            f32 py = g_vectorScratch.first.vector.y;
            f32 pz = g_vectorScratch.first.vector.z;
            if (!(flags & 1)) {
                px += motion->origin[0];
                py += motion->origin[1];
                pz += motion->origin[2];
            }
            particle->position.x = px;
            particle->position.y = py + motion->height;
            particle->position.z = pz;
            effSampleParticleTransform((ParticleTransformSample *)particle,
                         (ParticleTransformCurves *)definition, frame,
                         (const EffectColor *)&previous);
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            FUN_0024add8(emitter, particle);
            particle->frame = effGetFrameCounter() + frame;
        } else {
            if (emitCount == 0)
                continue;
            /* Emit a particle on a circle in a random plane through the emitter's origin. */
            f32 radius = EFF_RANDOM_VARIANCE(definition->radiusVariance) * definition->radius;
            f32 endRadius = EFF_RANDOM_VARIANCE(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->phaseSpeed = EFF_RANDOM_VARIANCE(definition->phaseSpeedVariance) * definition->phaseSpeed;
            motion->phase = shiftRandomNextFraction(NULL) * 1.5707964f;
            motion->height = zero;
            motion->pitch = randomSigned() * 3.1415927f;
            motion->yaw = randomSigned() * 3.1415927f;
            orbitBuildPlane(motion);
            f32 x = phaseCosInterpolate(motion->phase * 40.743664f) * radius;
            f32 z = mathSinFixedAngle(motion->phase * 40.743664f) * radius;
            vec4Set(&g_vectorScratch.first.vector, x, zero, z, zero);
            scratchRotate(&g_vectorScratch.first.vector);
            if (!(flags & 1)) {
                vec3Set(motion->origin, origin.x, origin.y, origin.z);
                vec4Set(&g_vectorScratch.second.vector, origin.x, origin.y, origin.z, origin.w);
                vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            }
            particle->position = g_vectorScratch.first.vector;
            motion->scale = EFF_RANDOM_VARIANCE(definition->scaleVariance);
            if (angleMode == 2) {
                motion->angleOffset = zero;
                motion->angleScale = 1.0f;
            } else {
                motion->angleScale = EFF_RANDOM_VARIANCE(definition->angleVariance);
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
                /* A burst spreads its particles over the whole lifetime. */
                f32 age = (f32)(randomAdvanceShiftRegister(NULL) % (u32)lifetime);
                motion->height -= gravity * age * age * 0.5f;
                motion->radius += motion->radiusStep * age;
                x = phaseCosInterpolate(motion->phase * 40.743664f) * motion->radius;
                z = mathSinFixedAngle(motion->phase * 40.743664f) * motion->radius;
                vec4Set(&g_vectorScratch.first.vector, x, zero, z, zero);
                scratchRotate(&g_vectorScratch.first.vector);
                if (!(flags & 1)) {
                    g_vectorScratch.second.vector = g_vectorScratch.first.vector;
                    vec4Set(&g_vectorScratch.first.vector, origin.x, origin.y, origin.z, origin.w);
                    vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                }
                particle->position = g_vectorScratch.first.vector;
                particle->position.y += motion->height;
                particle->frame = (s32)age;
            }
            effSampleParticleTransform((ParticleTransformSample *)particle,
                         (ParticleTransformCurves *)definition, particle->frame,
                         (const EffectColor *)&previous);
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            if (burst) {
                FUN_0024b5f0(emitter, particle);
                particle->frame += effGetFrameCounter();
            }
            emitCount--;
        }
    }
}
