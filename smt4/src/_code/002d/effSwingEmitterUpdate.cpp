/* NON_MATCHING: typed rewrite from its Apocalypse twin effSwingEmitterUpdate (561 raw / 509 shape rows; retail 578
 * rows, built 557). The prologue, the calls, the stores, the block order and the 36-byte frame follow retail; the
 * register allocation does not. Retail moves the rotation, the up axis and the live particle's previous position
 * through VFP registers (vldmia/vstmia) where this build copies them through core registers, keeps 0.0f in s27 from
 * the start, and rotates the up axis row by row (three vldmia of the scratch matrix). */
#include "code/Code0024_Smt4.h"
#include "gfx/SpiralEmitter.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {
extern const Vector4 DAT_004736b0;      /* the emitter's local "up" axis */

void gfxQuaternionWorkspaceBuildMatrix(void);
f32 mathSinFixedAngle(f32 angle);
void FUN_0024b7bc(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024add8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024b5f0(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0024b660(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
}

/* Updates a swing emitter: emits new particles, and moves each live one along its direction (under
 * gravity) while it swings along its own axis. */
extern "C" void effSwingEmitterUpdate(ParticleEmissionState *emitter)
{
    SpiralEmitterDefinition *definition = static_cast<SpiralEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    u32 flags = emitter->flags;
    s32 lifetime = definition->lifetime;
    SpiralMotion *motion = static_cast<SpiralMotion *>(emitter->motions);
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    if (lifetime == 0)
        return;

    s32 duration = definition->duration;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    g_vectorScratch.first.rotation = definition->rotation;
    gfxQuaternionWorkspaceBuildMatrix();

    // This frame's emission: a burst on the first frame, or the emitter's rate with the fraction carried over.
    // (Apocalypse has this out of line, with a time step: its FUN_00375c74.)
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

            // Emit a particle: its direction is the emitter's up axis.
            if (flags & 1) {
                motion->direction[1] = 1.0f;
                motion->direction[0] = 0.0f;
                motion->direction[2] = 0.0f;
            } else {
                g_vectorScratch.first.vector = DAT_004736b0;
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

            motion->speed = EFF_RANDOM_VARIANCE(definition->speedVariance) * definition->speed;
            f32 radius = EFF_RANDOM_VARIANCE(definition->radiusVariance) * definition->radius;
            f32 endRadius = EFF_RANDOM_VARIANCE(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->phaseStep = EFF_RANDOM_VARIANCE(definition->phaseStepVariance) * definition->phaseStep;
            motion->phase = shiftRandomNextFraction(NULL) * 6.2831855f;
            motion->wave = mathSinFixedAngle(motion->phase * 40.743664f);

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
                // A burst spreads its particles over the whole lifetime.
                f32 age = (f32)(randomAdvanceShiftRegister(NULL) % (u32)lifetime);
                f32 travel = motion->speed * age - gravity * age * age * 0.5f;
                particle->position.x += motion->direction[0] * travel;
                particle->position.y += motion->direction[1] * travel;
                particle->position.z += motion->direction[2] * travel;
                motion->phase += motion->phaseStep * age;
                motion->radius += motion->radiusStep * age;
                f32 wave = mathSinFixedAngle(motion->phase * 40.743664f);
                f32 swing = motion->radius * wave;
                particle->position.x += motion->axis[0] * swing;
                particle->position.y += motion->axis[1] * swing;
                particle->position.z += motion->axis[2] * swing;
                motion->phase += motion->phaseStep;
                motion->radius += motion->radiusStep;
                motion->wave = wave;
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
            f32 wave = mathSinFixedAngle(motion->phase * 40.743664f);
            f32 swing = motion->radius * (wave - motion->wave);
            particle->position.x += motion->axis[0] * swing;
            particle->position.y += motion->axis[1] * swing;
            particle->position.z += motion->axis[2] * swing;
            f32 travel = motion->speed - gravity * (f32)frame;
            particle->position.x += motion->direction[0] * travel;
            particle->position.y += motion->direction[1] * travel;
            particle->position.z += motion->direction[2] * travel;
            motion->phase += motion->phaseStep;
            motion->radius += motion->radiusStep;
            motion->wave = wave;
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
