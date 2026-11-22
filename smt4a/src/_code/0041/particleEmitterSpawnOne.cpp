/* NON_MATCHING: the unit-vector transforms (nn::math's VEC3TransformNormal with the 1/0 components kept, as retail does) and the (256/360) phase scale are retail's; retail loads the 1.0 constant before the first random draw, multiplies the spread into both direction components before scaling by the model size (armcc here reassociates the spread into the 0.5 factor) and builds the target position in s17/s16 with separate stores instead of retail's vstmia of s16-s17; FUN_002929d8 may take its rotation by value (8 lines better, needs a shared prototype across its callers). */
#include "classes/Obj557d90.h"
#include "gfx/CameraMatrixCache.h"
#include <new>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


/* How a particle emitter spawns its particles. */
struct ParticleEmitterSpec {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;            /* copied into the particle */
    /* 0x08 */ f32 spread;           /* random offset along the emitter's first axis */
    /* 0x0C */ f32 speedBase;
    /* 0x10 */ f32 speedVariance;
    /* 0x14 */ f32 angleVariance;
    /* 0x18 */ f32 angleBase;
    /* 0x1C */ f32 positionBase[3];
    /* 0x28 */ f32 positionVariance[3];
    /* 0x34 */ u32 color[3];
};

/* nn::math's VEC3TransformNormal: the vector through the matrix's rotation rows into a temporary, then copied to
 * `out` (which may alias). */
static __inline ParticleVec3 *vec3TransformNormal(ParticleVec3 *out, const Matrix34Data *m, const ParticleVec3 *v)
{
    ParticleVec3 tmp;
    tmp.x = m->values[0] * v->x + m->values[1] * v->y + m->values[2] * v->z;
    tmp.y = m->values[4] * v->x + m->values[5] * v->y + m->values[6] * v->z;
    tmp.z = m->values[8] * v->x + m->values[9] * v->y + m->values[10] * v->z;
    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
    return out;
}

extern "C" {
f32 randomGetNormalizedFloat(void);
void FUN_001aff14(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
}

/* Creates a particle for the model from the emitter spec: a random start offset, a random
 * direction scaled by a random speed, and a randomised target position. */
extern "C" Obj557d90 *particleEmitterSpawnOne(const ParticleEmitterSpec *spec, AsdMdlObject *model)
{
    void *memory = asdOperatorNew(sizeof(Obj557d90));
    Obj557d90 *particle = memory != NULL ? new (memory) Obj557d90(model) : NULL;
    particle->unk08 = spec->unk04;

    Matrix34Data rotation;
    FUN_001aff14(&rotation, 1, 0.0f, 0.0f, randomGetNormalizedFloat() * 256.0f);
    ParticleVec3 unitX(1.0f, 0.0f, 0.0f);
    ParticleVec3 direction;
    vec3TransformNormal(&direction, &rotation, &unitX);
    f32 spread = (randomGetNormalizedFloat() - 0.5f) * 2.0f * spec->spread;
    particle->unk0C.x = direction.x * spread * particle->unk30.x * 0.5f;
    particle->unk0C.y = direction.y * spread * particle->unk30.y * 0.5f + particle->unk30.y * 0.5f;
    particle->unk0C.z = 0.0f;

    f32 pitch = randomGetNormalizedFloat() * -spec->angleBase;
    f32 yaw = (randomGetNormalizedFloat() - 0.5f) * 2.0f * spec->angleVariance;
    FUN_001aff14(&rotation, 1, pitch * (256.0f / 360.0f), 0.0f, yaw * (256.0f / 360.0f));
    ParticleVec3 unitY(0.0f, 1.0f, 0.0f);
    ParticleVec3 axis;
    vec3TransformNormal(&axis, &rotation, &unitY);
    f32 speed = spec->speedBase + spec->speedVariance * ((randomGetNormalizedFloat() - 0.5f) * 2.0f);
    particle->unk3C[0].set(axis.x * speed, axis.y * speed, axis.z * speed);

    f32 targetX = spec->positionBase[0] + spec->positionVariance[0] * ((randomGetNormalizedFloat() - 0.5f) * 2.0f);
    f32 targetY = spec->positionBase[1] + spec->positionVariance[1] * ((randomGetNormalizedFloat() - 0.5f) * 2.0f);
    f32 targetZ = spec->positionBase[2] + spec->positionVariance[2] * ((randomGetNormalizedFloat() - 0.5f) * 2.0f);
    particle->unk3C[2].set(targetX, targetY, targetZ);
    ((u32 *)&particle->unk3C[1])[0] = spec->color[0];
    ((u32 *)&particle->unk3C[1])[1] = spec->color[1];
    ((u32 *)&particle->unk3C[1])[2] = spec->color[2];
    return particle;
}
