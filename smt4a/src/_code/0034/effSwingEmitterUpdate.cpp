/* NON_MATCHING: typed rewrite from its twin effSpiralEmitterUpdate (537 raw / 481 shape rows, from 609; the count
 * is mostly renumbered registers). The calls, stores, constants and block order (live particles first, the emit
 * path between the two halves of the live update) follow retail. Retail saves d8-d14 and computes
 * -(0.5 * gravity) * step inside the loop; this build hoists that product, saves d8-d15 and so renumbers most VFP
 * registers. Retail copies the definition's rotation (with the duration behind it) and the live particle's
 * previous position through VFP registers (vldmia/vstmia) where the build uses ldm/stm, loads the 0.0 constant
 * before the emission-state call, and rotates the up axis row by row (vldmia of each matrix row). */
#include "gfx/SpiralEmitter.h"

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);
f32 FUN_001a1ee0(f32 angle);
s32 FUN_0037a844(void);
void FUN_00375c74(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
/* A curve's value at `frame` of `duration` (the spiral emitter's two extra values). */
f32 FUN_0034f8b4(const void *curve, s32 frame, s32 duration);
}

/* Updates a swing emitter, the spiral emitter without the two curve values: emits new particles, and moves each
 * live one along its direction (under gravity) while it swings along its own axis. */
extern "C" void effSwingEmitterUpdate(ParticleEmissionState *emitter)
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

    s32 duration = definition->duration;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    g_vectorScratch.first.rotation = definition->rotation;
    gfxQuaternionWorkspaceBuildMatrix();
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
                g_vectorScratch.first.vector = DAT_005c1e80;
                scratchRotate(&g_vectorScratch.first.vector);
                vec3Set(motion->direction, g_vectorScratch.first.vector.x, g_vectorScratch.first.vector.y,
                             g_vectorScratch.first.vector.z);
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
            vec3Set(motion->axis, axis.x, axis.y, axis.z);

            motion->speed = randomVarianceOf(definition->speedVariance) * definition->speed;
            f32 radius = randomVarianceOf(definition->radiusVariance) * definition->radius;
            f32 endRadius = randomVarianceOf(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->phaseStep = randomVarianceOf(definition->phaseStepVariance) * definition->phaseStep;
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

            motion->scale = randomVarianceOf(definition->scaleVariance);
            if (angleMode == 2) {
                motion->angleOffset = zero;
                motion->angleScale = 1.0f;
            } else {
                motion->angleScale = randomVarianceOf(definition->angleVariance);
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
            FUN_0027134c(emitter, particle);
            particle->frame = effGetFrameStep() + frame;
        }
    }
}
