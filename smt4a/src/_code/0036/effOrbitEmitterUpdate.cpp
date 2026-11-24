/* NON_MATCHING: typed rewrite from its sibling effSpiralEmitterUpdate (645 raw / 591 shape rows, 532 vs 525
 * rows; the raw decompilation it replaces scored 693 / 683 and dropped the random draws' results and the
 * spin-direction test). The calls, stores and block order follow retail; the frame and the VFP register
 * numbering do not. Retail's frame is 132 bytes against 52: besides the locals written here it reserves about
 * 80 bytes it never touches (sp+0..8, +24..68 and +72..96 around the spilled flags at +68), the footprint of
 * vector locals whose components all live in registers, as the origin does (x, y, z in s23-s25, only its w
 * on the stack at +20). Retail also keeps 0.0 in two registers (s26 for the y component and the fall term,
 * s17 for the w component), copies 0.5 into s20 in each branch, computes -(0.5 * gravity) inside the loop
 * where the build hoists the product, and loads the scratch matrix rows with `vldmia`. */
#include "gfx/OrbitEmitter.h"

extern "C" {
f32 phaseSine(f32 angle);
f32 phaseCosine(f32 angle);
s32 FUN_0037a844(void);
void effComputeParticleEmission(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
/* Replaces the shared transform with an X-axis rotation. */
void matrixSetRotationX(f32 angle);
/* Applies the pending rotation to the scratch matrix. */
void FUN_005145f4(void);
}

/* Points the scratch matrix along the particle's orbit plane. The point on the circle is then written
 * out at each site: retail reads the phase again for the sine, which an inline taking it by value does not. */
static __inline void orbitBuildPlane(const OrbitMotion *motion)
{
    matrixSetRotationX(motion->pitch);
    matrixSetRotationY(motion->yaw);
    FUN_005145f4();
}

/* Updates an orbit emitter: emits new particles, and moves each live one round its circle while the
 * circle's radius changes and the particle falls under gravity. */
extern "C" void effOrbitEmitterUpdate(ParticleEmissionState *emitter)
{
    f32 step = (f32)(s32)effGetFrameStep();
    u32 flags = emitter->flags;
    OrbitEmitterDefinition *definition = static_cast<OrbitEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    OrbitMotion *motion = static_cast<OrbitMotion *>(emitter->motions);
    s32 lifetime = definition->lifetime;
    if (lifetime == 0)
        return;
    s32 duration = definition->duration;
    f32 zero = 0.0f;
    u8 angleMode = definition->angleMode;
    Vector4 origin = definition->origin;
    f32 gravity = definition->gravity;
    f32 acceleration = definition->phaseAcceleration;
    u8 burst;
    s32 emitCount;
    Vector4 previous;
    effComputeParticleEmission(emitter, reinterpret_cast<const ParticleEmissionDefinition *>(definition), &burst, &emitCount, step);
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
            // Emit a particle on a circle in a random plane through the emitter's origin.
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
            f32 x = phaseCosine(motion->phase * 40.743664f) * radius;
            f32 z = phaseSine(motion->phase * 40.743664f) * radius;
            vec4Set(&g_vectorScratch.first.vector, x, zero, z, zero);
            scratchRotate(&g_vectorScratch.first.vector);
            if (!(flags & 1)) {
                vec4Set(&g_vectorScratch.second.vector, origin.x, origin.y, origin.z, origin.w);
                vec3Set(motion->origin, origin.x, origin.y, origin.z);
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
                motion->height -= gravity * age * age * 0.5f;
                motion->radius += motion->radiusStep * age;
                x = phaseCosine(motion->phase * 40.743664f) * motion->radius;
                z = phaseSine(motion->phase * 40.743664f) * motion->radius;
                vec4Set(&g_vectorScratch.first.vector, x, zero, z, zero);
                scratchRotate(&g_vectorScratch.first.vector);
                if (!(flags & 1)) {
                    vec4Set(&g_vectorScratch.second.vector, origin.x, origin.y, origin.z, origin.w);
                    vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                }
                particle->position = g_vectorScratch.first.vector;
                particle->position.y += motion->height;
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
            f32 half = 0.5f;
            f32 age = (f32)frame;
            f32 phase = motion->phase + (motion->phaseSpeed + acceleration * age * half) * age;
            f32 fall;
            if (FUN_0037a844() != 0)
                fall = -(half * gravity) * step * (age * 2.0f - step + 1.0f) + zero * step;
            else
                fall = -(gravity * age);
            motion->height += fall;
            motion->radius += motion->radiusStep * step;
            orbitBuildPlane(motion);
            f32 radius = motion->radius;
            f32 x = phaseCosine(phase * 40.743664f) * radius;
            f32 z = phaseSine(phase * 40.743664f) * radius;
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
