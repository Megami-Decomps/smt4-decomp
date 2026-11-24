/* NON_MATCHING: typed rewrite in the form of its sibling effSwingEmitterUpdate (863 raw / 791 shape rows; retail 619
 * rows, built 624). The calls, the stores and the block order (the live update first, the emit path out of line)
 * follow retail; the frame does not: retail's is 204 bytes against 60, with the emitter's origin and rotation and
 * the positions it rotates kept in stack vectors (nine more four-float slots) where this build keeps them in VFP
 * registers, which renumbers most of the function. */
#include "code/Code0024_Smt4.h"
#include "gfx/SpiralEmitter.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);
f32 phaseCosInterpolate(f32 phase);
f32 mathSinFixedAngle(f32 angle);
void FUN_0024b7bc(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024add8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024b5f0(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024b660(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
}

/* Updates a helix emitter: emits new particles, and moves each live one around the emitter's axis while it
 * rises along it (under gravity). */
extern "C" void effHelixEmitterUpdate(ParticleEmissionState *emitter)
{
    HelixEmitterDefinition *definition = static_cast<HelixEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    u32 flags = emitter->flags;
    s32 lifetime = definition->lifetime;
    HelixMotion *motion = static_cast<HelixMotion *>(emitter->motions);
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    if (lifetime == 0)
        return;

    s32 duration = definition->duration;
    f32 zero = 0.0f;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    f32 phaseAcceleration = definition->phaseAcceleration;
    Vector4 origin = definition->origin;
    RotationQuaternion rotation = definition->rotation;

    /* This frame's emission: a burst on the first frame, or the emitter's rate with the fraction carried over. */
    bool burst;
    s32 emitCount;
    if (duration != 0 && emitter->frame >= duration) {
        burst = false;
        emitCount = 0;
    } else if (emitter->frame == 0 && definition->burstOnFirstFrame) {
        burst = true;
        if (definition->randomness > 0.0f)
            emitCount = (s32)(shiftRandomNextFraction(NULL) * (1.1f - definition->randomness) * (f32)emitter->initialCount);
        else
            emitCount = emitter->initialCount;
    } else {
        burst = false;
        if (definition->randomness > 0.0f)
            emitter->remainder += shiftRandomNextFraction(NULL) * (1.1f - definition->randomness) * (f32)definition->rate;
        else
            emitter->remainder += (f32)definition->rate;
        emitCount = (s32)fabsf(emitter->remainder);
        emitter->remainder -= (f32)emitCount;
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
        if (frame == -1) {
            if (emitCount == 0)
                continue;

            /* Emit a particle: somewhere on the starting circle, at a random height. */
            f32 radius = EFF_RANDOM_VARIANCE(definition->radiusVariance) * definition->radius;
            f32 endRadius = EFF_RANDOM_VARIANCE(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->phase = shiftRandomNextFraction(NULL) * 6.2831855f;
            motion->phaseStep = EFF_RANDOM_VARIANCE(definition->phaseStepVariance) * definition->phaseStep;
            motion->speed = EFF_RANDOM_VARIANCE(definition->speedVariance) * definition->speed;
            f32 cosine = phaseCosInterpolate(motion->phase * 40.743664f);
            f32 sine = mathSinFixedAngle(motion->phase * 40.743664f);
            motion->height = shiftRandomNextFraction(NULL) * definition->spread;
            vec4Set(&g_vectorScratch.first.vector, cosine, 0.0f, sine, zero);
            vec4Set(&g_vectorScratch.second.vector, radius, radius, radius, 0.0f);
            vec4Multiply(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            g_vectorScratch.first.vector.y = motion->height;
            if (!(flags & 1)) {
                /* Outside the emitter's space the particle keeps the pose it was emitted with. */
                Vector4 local = g_vectorScratch.first.vector;
                motion->origin[0] = origin.x;
                motion->origin[1] = origin.y;
                motion->origin[2] = origin.z;
                motion->rotation = rotation;
                g_vectorScratch.first.rotation = rotation;
                gfxQuaternionWorkspaceBuildMatrix();
                g_vectorScratch.first.vector = local;
                scratchRotate(&g_vectorScratch.first.vector);
                g_vectorScratch.second.vector = origin;
                vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            }
            particle->position = g_vectorScratch.first.vector;

            motion->scale = EFF_RANDOM_VARIANCE(definition->scaleVariance);
            if (angleMode == 2) {
                motion->angleOffset = 0.0f;
                motion->angleScale = 1.0f;
            } else {
                motion->angleScale = EFF_RANDOM_VARIANCE(definition->angleVariance);
                if (angleMode != 1) {
                    motion->angleOffset = 0.0f;
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
                motion->radius += motion->radiusStep * age;
                motion->height = motion->height + motion->speed * age - gravity * age * age * 0.5f;
                f32 x = phaseCosInterpolate(motion->phase * 40.743664f) * motion->radius;
                f32 y = motion->height;
                f32 z = mathSinFixedAngle(motion->phase * 40.743664f) * motion->radius;
                vec4Set(&g_vectorScratch.first.vector, x, y, z, zero);
                if (!(flags & 1)) {
                    Vector4 local = g_vectorScratch.first.vector;
                    g_vectorScratch.first.rotation = rotation;
                    gfxQuaternionWorkspaceBuildMatrix();
                    g_vectorScratch.first.vector = local;
                    scratchRotate(&g_vectorScratch.first.vector);
                    g_vectorScratch.second.vector = origin;
                    vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector,
                            &g_vectorScratch.second.vector);
                }
                particle->position = g_vectorScratch.first.vector;
                particle->frame = (s32)age;
            }
            FUN_0024b660(reinterpret_cast<ParticleTransformSample *>(particle),
                         reinterpret_cast<ParticleTransformCurves *>(definition), particle->frame,
                         reinterpret_cast<const EffectColor *>(&previous));
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            if (burst) {
                FUN_0024b5f0(emitter, particle);
                particle->frame += effGetFrameCounter();
            }
            emitCount--;
        } else {
            previous = particle->position;
            f32 age = (f32)frame;
            motion->height = motion->height + motion->speed - gravity * age;
            motion->radius += motion->radiusStep;
            f32 phase = (motion->phase + (motion->phaseStep + phaseAcceleration * age * 0.5f) * age) * 40.743664f;
            f32 x = phaseCosInterpolate(phase) * motion->radius;
            f32 y = motion->height;
            f32 z = mathSinFixedAngle(phase) * motion->radius;
            if (!(flags & 1)) {
                g_vectorScratch.first.rotation = motion->rotation;
                gfxQuaternionWorkspaceBuildMatrix();
                vec4Set(&g_vectorScratch.first.vector, x, y, z, zero);
                scratchRotate(&g_vectorScratch.first.vector);
                x = g_vectorScratch.first.vector.x + motion->origin[0];
                y = g_vectorScratch.first.vector.y + motion->origin[1];
                z = g_vectorScratch.first.vector.z + motion->origin[2];
            }
            particle->position.x = x;
            particle->position.y = y;
            particle->position.z = z;
            FUN_0024b660(reinterpret_cast<ParticleTransformSample *>(particle),
                         reinterpret_cast<ParticleTransformCurves *>(definition), frame,
                         reinterpret_cast<const EffectColor *>(&previous));
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            FUN_0024add8(emitter, particle);
            particle->frame = effGetFrameCounter() + frame;
        }
    }
}
