/* NON_MATCHING: typed rewrite in the form of its siblings effSwingEmitterUpdate and effBounceEmitterUpdate (604 raw /
 * 560 shape rows, 419 against retail's 465); the calls, stores, constants and blocks follow retail. What differs, as in
 * those siblings: retail repeats the radius multiply in both arms of the `flags & 1` test (written once here), copies
 * the previous position and the live particle's new position through VFP registers (vldmia/vstmia, ldm/stm here),
 * loads the direction's three components separately and reloads them to negate them, keeps the lifetime in sl and
 * the count in r9 (swapped here), and places the burst flag at sp+4 and the angle mode at sp+24 (swapped here). */
#include "gfx/SpiralEmitter.h"

/* The motion of one particle of the spray emitter (0x1C bytes): it travels along `direction`. */
struct SprayMotion {
    /* 0x00 */ f32 direction[3];
    /* 0x0C */ f32 speed;
    /* 0x10 */ f32 scale;
    /* 0x14 */ f32 angleOffset;
    /* 0x18 */ f32 angleScale;
};

/* The spray emitter's definition: particles leave a random point of a sphere around the origin outwards, slowed
 * along their direction by `acceleration` and pulled down by `gravity`. */
struct SprayEmitterDefinition {
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
    /* 0xC8 */ f32 radius;          /* of the sphere the particles start on */
    /* 0xCC */ f32 radiusVariance;
    /* 0xD0 */ f32 speed;           /* negative: the particles move inwards */
    /* 0xD4 */ f32 speedVariance;
    /* 0xD8 */ f32 acceleration;    /* along a particle's direction; its speed stops at zero */
    /* 0xDC */ f32 gravity;
};
typedef char SprayEmitterOffsets[sizeof(SprayMotion) == 0x1C &&
    offsetof(SprayEmitterDefinition, scaleVariance) == 0x6C && offsetof(SprayEmitterDefinition, angleMode) == 0x9C &&
    offsetof(SprayEmitterDefinition, lifetime) == 0xB8 && offsetof(SprayEmitterDefinition, radius) == 0xC8 &&
    offsetof(SprayEmitterDefinition, gravity) == 0xDC ? 1 : -1];

extern "C" {
s32 FUN_0037a844(void);
void FUN_00375c74(ParticleEmissionState *state, const ParticleEmissionDefinition *definition, u8 *burst, s32 *count,
                  f32 timeStep);
void FUN_002fe2e8(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_0027134c(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321e98(ParticleEmissionState *emitter, SpiralParticle *particle);
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous);
}

/* Updates a spray emitter: emits new particles from a random point of the sphere around its origin, moving out
 * from the centre, and moves each live one along its direction (slowed by the acceleration) as gravity pulls it
 * down. */
extern "C" void effSprayEmitterUpdate(ParticleEmissionState *emitter)
{
    f32 step = (f32)(s32)effGetFrameStep();
    u32 flags = emitter->flags;
    SprayEmitterDefinition *definition = static_cast<SprayEmitterDefinition *>(emitter->definition);
    u32 count = emitter->initialCount;
    SpiralParticle *particle = static_cast<SpiralParticle *>(emitter->particles);
    SprayMotion *motion = static_cast<SprayMotion *>(emitter->motions);
    s32 lifetime = definition->lifetime;
    if (lifetime == 0)
        return;

    s32 duration = definition->duration;
    u8 angleMode = definition->angleMode;
    f32 gravity = definition->gravity;
    f32 acceleration = definition->acceleration;
    f32 zero = 0.0f;
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

            // Emit a particle: its direction is a random unit vector.
            f32 x = randomSigned();
            f32 y = randomSigned();
            f32 z = randomSigned();
            vec4Set(&g_vectorScratch.first.vector, x, y, z, zero);
            vec3Normalize(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector);
            Vector4 direction = g_vectorScratch.first.vector;
            vec3Set(motion->direction, direction.x, direction.y, direction.z);
            motion->speed = fabsf(EFF_RANDOM_VARIANCE(definition->speedVariance) * definition->speed);

            // The start position: out along the direction (in against a negative speed), from the origin.
            f32 radius = EFF_RANDOM_VARIANCE(definition->radiusVariance) * definition->radius;
            g_vectorScratch.first.vector = direction;
            if (definition->speed < zero) {
                g_vectorScratch.first.vector.x = -g_vectorScratch.first.vector.x;
                g_vectorScratch.first.vector.y = -g_vectorScratch.first.vector.y;
                g_vectorScratch.first.vector.z = -g_vectorScratch.first.vector.z;
            }
            vec4Set(&g_vectorScratch.second.vector, radius, radius, radius, zero);
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
                g_vectorScratch.second.vector = particle->position;
                f32 travel = motion->speed * age + acceleration * age * age * 0.5f;
                if (travel < zero)
                    travel = zero;
                vec4Set(&g_vectorScratch.first.vector, motion->direction[0] * travel,
                        motion->direction[1] * travel - gravity * age * age * 0.5f, motion->direction[2] * travel, zero);
                vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
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
            g_vectorScratch.second.vector = particle->position;
            f32 travel;
            f32 fall;
            if (FUN_0037a844() != 0) {
                travel = acceleration * 0.5f * step * ((f32)frame * 2.0f - step + 1.0f) + motion->speed * step;
                if (travel < zero)
                    travel = zero;
                fall = gravity * 0.5f * step * ((f32)frame * 2.0f - step + 1.0f) + zero * step;
            } else {
                travel = motion->speed + acceleration * (f32)frame;
                if (travel < zero)
                    travel = zero;
                fall = gravity * (f32)frame;
            }
            vec4Set(&g_vectorScratch.first.vector, motion->direction[0] * travel, motion->direction[1] * travel - fall,
                    motion->direction[2] * travel, zero);
            vec4Add(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            particle->position = g_vectorScratch.first.vector;
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
