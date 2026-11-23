/* NON_MATCHING: typed rewrite from its siblings effSpiralEmitterUpdate and effSwingEmitterUpdate (745 raw / 693
 * shape rows; the count is mostly renumbered registers and stack slots). The calls, stores, constants and block
 * order (live particles first, the emit path after them) follow retail, and both builds save r4-fp and d8-d15.
 * Retail's frame is 204 bytes against 60: it spills the definition's origin and rotation to the stack before
 * the loop and copies them from there into the motion, where this build keeps them in registers and stack words
 * of its own choosing; it computes -(0.5 * gravity) * step inside the loop (`vnmul 0.5, gravity`), where this
 * build hoists the product; and it lays the burst's world-space block out after the transform sample call. */
#include "gfx/OrbitEmitter.h"

/* Radians to nn::math's table index (256 steps a turn). */
#define ORBIT_RAD_TO_FIDX 40.743664f

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);
f32 phaseSine(f32 angle);
f32 phaseCosine(f32 angle);
s32 FUN_0037a844(void);
void FUN_00375c74(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
}

/* Turns the point in the first scratch slot by `rotation` and moves it to `origin`. */
static __inline void orbitPointToWorld(const RotationQuaternion &rotation, const Vector4 &origin)
{
    Vector4 point = g_vectorScratch.first.vector;
    g_vectorScratch.first.rotation = rotation;
    gfxQuaternionWorkspaceBuildMatrix();
    g_vectorScratch.first.vector = point;
    scratchRotate(&g_vectorScratch.first.vector);
    g_vectorScratch.second.vector = origin;
    vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
}

/* Updates an orbiting emitter: emits new particles, and moves each live one around the axis it was emitted
 * on while it rises (under gravity) and its radius changes. */
extern "C" void effAxisOrbitEmitterUpdate(ParticleEmissionState *emitter)
{
    f32 step = (f32)(s32)effGetFrameStep();
    u32 flags = emitter->flags;
    AxisOrbitEmitterDefinition *definition = static_cast<AxisOrbitEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    AxisOrbitMotion *motion = static_cast<AxisOrbitMotion *>(emitter->motions);
    s32 lifetime = definition->lifetime;
    if (lifetime == 0)
        return;

    s32 duration = definition->duration;
    f32 zero = 0.0f;
    u8 angleMode = definition->angleMode;
    Vector4 origin = definition->origin;
    f32 gravity = definition->gravity;
    f32 angleAcceleration = definition->angleAcceleration;
    RotationQuaternion rotation = definition->rotation;
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

            // Emit a particle at a random angle and height.
            f32 radius = EFF_RANDOM_VARIANCE(definition->radiusVariance) * definition->radius;
            f32 endRadius = EFF_RANDOM_VARIANCE(definition->endRadiusVariance) * definition->endRadius;
            motion->radius = radius;
            motion->radiusStep = (endRadius - radius) / (f32)lifetime;
            motion->angle = shiftRandomNextFraction(NULL) * 6.2831855f;
            motion->angleSpeed = EFF_RANDOM_VARIANCE(definition->angleSpeedVariance) * definition->angleSpeed;
            motion->riseSpeed = EFF_RANDOM_VARIANCE(definition->riseSpeedVariance) * definition->riseSpeed;
            f32 cosine = phaseCosine(motion->angle * ORBIT_RAD_TO_FIDX);
            f32 sine = phaseSine(motion->angle * ORBIT_RAD_TO_FIDX);
            motion->height = shiftRandomNextFraction(NULL) * definition->spread;
            vec4Set(&g_vectorScratch.first.vector, cosine, 0.0f, sine, zero);
            vec4Set(&g_vectorScratch.second.vector, radius, radius, radius, 0.0f);
            vec4Multiply(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            g_vectorScratch.first.vector.y = motion->height;
            if (!(flags & 1)) {
                // The particle keeps circling where the emitter was.
                motion->origin[0] = origin.x;
                motion->origin[1] = origin.y;
                motion->origin[2] = origin.z;
                motion->rotation = rotation;
                orbitPointToWorld(rotation, origin);
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
                motion->radius += motion->radiusStep * age;
                motion->height = motion->height + motion->riseSpeed * age - gravity * age * age * 0.5f;
                f32 x = phaseCosine(motion->angle * ORBIT_RAD_TO_FIDX) * motion->radius;
                f32 y = motion->height;
                f32 z = phaseSine(motion->angle * ORBIT_RAD_TO_FIDX) * motion->radius;
                vec4Set(&g_vectorScratch.first.vector, x, y, z, zero);
                if (!(flags & 1))
                    orbitPointToWorld(rotation, origin);
                particle->position = g_vectorScratch.first.vector;
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
            f32 age = (f32)frame;
            f32 angle = motion->angle + (motion->angleSpeed + angleAcceleration * age * 0.5f) * age;
            f32 rise;
            if (FUN_0037a844() != 0)
                rise = -(0.5f * gravity) * step * (age * 2.0f - step + 1.0f) + motion->riseSpeed * step;
            else
                rise = motion->riseSpeed - gravity * age;
            motion->height += rise;
            motion->radius += motion->radiusStep * step;
            f32 x = phaseCosine(angle * ORBIT_RAD_TO_FIDX) * motion->radius;
            f32 y = motion->height;
            f32 z = phaseSine(angle * ORBIT_RAD_TO_FIDX) * motion->radius;
            if (!(flags & 1)) {
                g_vectorScratch.first.rotation = motion->rotation;
                gfxQuaternionWorkspaceBuildMatrix();
                // Turn the point by the matrix just built and move it to the particle's origin.
                const f32 (*m)[4] = g_vectorScratch.matrix.rows;
                vec4Set(&g_vectorScratch.first.vector, x * m[0][0] + y * m[1][0] + z * m[2][0],
                        x * m[0][1] + y * m[1][1] + z * m[2][1], x * m[0][2] + y * m[1][2] + z * m[2][2],
                        x * m[0][3] + y * m[1][3] + z * m[2][3]);
                x = g_vectorScratch.first.vector.x + motion->origin[0];
                y = g_vectorScratch.first.vector.y + motion->origin[1];
                z = g_vectorScratch.first.vector.z + motion->origin[2];
            }
            particle->position.x = x;
            particle->position.y = y;
            particle->position.z = z;
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
