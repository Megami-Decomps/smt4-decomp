/* NON_MATCHING: the two live-update paths join earlier; scratch copies and VFP allocation also differ. */
#include "gfx/BallisticEmitter.h"

extern "C" {

void gfxQuaternionWorkspaceBuildMatrix(void);
f32 phaseCosine(f32 index);
f32 phaseSine(f32 index);
s32 FUN_0037a844(void);
void effComputeParticleEmission(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);

/* Emits and advances particles that travel along randomized directions, with acceleration and gravity. */
void effBallisticEmitterUpdate(ParticleEmissionState *emitter)
{
    enum { KEEP_EMITTER_SPACE = 1 };
    f32 step = (f32)(s32)effGetFrameStep();
    u32 flags = emitter->flags;
    BallisticEmitterDefinition *definition = (BallisticEmitterDefinition *)emitter->definition;
    u32 count = emitter->initialCount;
    SpiralParticle *particle = (SpiralParticle *)emitter->particles;
    BallisticMotion *motion = (BallisticMotion *)emitter->motions;
    s32 lifetime = definition->lifetime;
    if (lifetime == 0) {
        return;
    }

    f32 displacementW = 0.0f;
    BallisticEmitterTiming timing = definition->timing;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    f32 acceleration = definition->acceleration;
    g_vectorScratch.first.rotation = timing.rotation;
    gfxQuaternionWorkspaceBuildMatrix();
    u8 burst;
    s32 emitCount;
    Vector4 previous;
    effComputeParticleEmission(emitter, (const ParticleEmissionDefinition *)definition, &burst, &emitCount, step);
    if (count == 0) {
        return;
    }

    f32 gravityStep = gravity * 0.5f * step;
    f32 accelerationStep = acceleration * 0.5f * step;
    for (u32 i = 0; i < count; ++i, ++motion, ++particle) {
        if (particle->frame >= lifetime) {
            particle->frame = timing.duration != 0 ? -2 : -1;
            FUN_002fe2e8(emitter, particle);
        }
        s32 frame = particle->frame;
        if (frame == -2) {
            continue;
        }
        if (frame != -1) {
            previous = particle->position;
            g_vectorScratch.second.vector = particle->position;
            f32 distance;
            f32 fall;
            if (FUN_0037a844()) {
                f32 elapsed = (f32)frame * 2.0f - step + 1.0f;
                distance = accelerationStep * elapsed + motion->speed * step;
                distance = distance < 0.0f ? 0.0f : distance;
                fall = gravityStep * elapsed;
            } else {
                distance = motion->speed + acceleration * (f32)frame;
                distance = distance < 0.0f ? 0.0f : distance;
                fall = gravity * (f32)frame;
            }
            vec4Set(&g_vectorScratch.first.vector, motion->direction[0] * distance,
                    motion->direction[1] * distance - fall, motion->direction[2] * distance, displacementW);
            vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            particle->position = g_vectorScratch.first.vector;
            FUN_00321d7c((ParticleTransformSample *)particle, (ParticleTransformCurves *)definition, frame,
                         (const EffectColor *)&previous);
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            FUN_0027134c(emitter, particle);
            particle->frame = frame + effGetFrameStep();
        } else if (emitCount != 0) {
            f32 pitch = randomSigned() * (f32)definition->angleSpread * 0.5f;
            f32 angle = (pitch * 0.017453292f - 1.5707964f) * 40.743664f;
            f32 radius = EFF_RANDOM_VARIANCE(definition->directionVariance) * definition->directionRadius;
            f32 x = phaseCosine(angle) * radius;
            f32 y = radius - 1.0f;
            f32 z = phaseSine(angle) * radius;
            vec4Set(&g_vectorScratch.first.vector, x, y, z, displacementW);
            vec3Normalize(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector);
            if (!(flags & KEEP_EMITTER_SPACE)) {
                scratchRotate(&g_vectorScratch.first.vector);
            }
            Vector4 direction = g_vectorScratch.first.vector;
            displacementW = direction.w;
            vec3Set(motion->direction, direction.x, direction.y, direction.z);
            motion->speed = fabsf(EFF_RANDOM_VARIANCE(definition->speedVariance) * definition->speed);

            f32 spread = EFF_RANDOM_VARIANCE(definition->spreadVariance) * definition->spread;
            g_vectorScratch.first.vector = direction;
            f32 zero = 0.0f;
            if (definition->speed < zero) {
                g_vectorScratch.first.vector.x = -g_vectorScratch.first.vector.x;
                g_vectorScratch.first.vector.y = -g_vectorScratch.first.vector.y;
                g_vectorScratch.first.vector.z = -g_vectorScratch.first.vector.z;
            }
            vec4Set(&g_vectorScratch.second.vector, spread, spread, spread, zero);
            vec4Multiply(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            if (!(flags & KEEP_EMITTER_SPACE)) {
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
                if (angleMode == 1) {
                    motion->angleOffset = shiftRandomNextFraction(NULL) * 6.2831855f;
                    if (randomAdvanceShiftRegister(NULL) & 1) {
                        motion->angleScale = -motion->angleScale;
                    }
                } else {
                    motion->angleOffset = zero;
                }
            }
            previous = particle->position;
            particle->frame = 0;
            if (burst) {
                f32 age = (f32)(randomAdvanceShiftRegister(NULL) % (u32)lifetime);
                g_vectorScratch.second.vector = particle->position;
                f32 distance = motion->speed * age + acceleration * age * age * 0.5f;
                distance = distance < zero ? zero : distance;
                vec4Set(&g_vectorScratch.first.vector, motion->direction[0] * distance,
                        motion->direction[1] * distance - gravity * age * age * 0.5f,
                        motion->direction[2] * distance, displacementW);
                vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                particle->position = g_vectorScratch.first.vector;
                particle->frame = (s32)age;
            }
            FUN_00321d7c((ParticleTransformSample *)particle, (ParticleTransformCurves *)definition, particle->frame,
                         (const EffectColor *)&previous);
            particle->scale *= motion->scale;
            particle->angle *= motion->angleScale;
            particle->angle += motion->angleOffset;
            if (burst) {
                FUN_00321e98(emitter, particle);
                particle->frame += effGetFrameStep();
            }
            --emitCount;
        }
    }
}

} /* extern "C" */
