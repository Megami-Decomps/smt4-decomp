/* NON_MATCHING: readable rebuild of the particle spawn; retail keeps the four constants in s16/s17/s20/s21, hoists the effect position components into the first product and evaluates the two rotated axes with interleaved vmla chains, which armcc here orders differently. */
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

extern "C" {
f32 FUN_0025cb1c(void);
void FUN_001aff14(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z);
}

/* Creates a particle for the model from the emitter spec: a random start offset, a random
 * direction scaled by a random speed, and a randomised target position. */
extern "C" Obj557d90 *FUN_0041aca8(const ParticleEmitterSpec *spec, AsdMdlObject *model)
{
    const f32 degreesToPhase = 0.71111f; /* 256 / 360 */
    void *memory = asdOperatorNew(sizeof(Obj557d90));
    Obj557d90 *particle = memory != NULL ? new (memory) Obj557d90(model) : NULL;
    particle->unk08 = spec->unk04;

    Matrix34Data rotation;
    FUN_001aff14(&rotation, 1, 0.0f, 0.0f, FUN_0025cb1c() * 256.0f);
    f32 dirX = rotation.values[0] * 1.0f + rotation.values[1] * 0.0f + rotation.values[2] * 0.0f;
    f32 dirY = rotation.values[4] * 1.0f + rotation.values[5] * 0.0f + rotation.values[6] * 0.0f;
    f32 spread = (FUN_0025cb1c() - 0.5f) * 2.0f * spec->spread;
    particle->unk0C.x = dirX * spread * particle->unk30.x * 0.5f;
    particle->unk0C.y = dirY * spread * particle->unk30.y * 0.5f + particle->unk30.y * 0.5f;
    particle->unk0C.z = 0.0f;

    f32 pitch = FUN_0025cb1c() * -spec->angleBase;
    f32 yaw = (FUN_0025cb1c() - 0.5f) * 2.0f * spec->angleVariance;
    FUN_001aff14(&rotation, 1, pitch * degreesToPhase, 0.0f, yaw * degreesToPhase);
    f32 axisX = rotation.values[0] * 0.0f + rotation.values[1] * 1.0f + rotation.values[2] * 0.0f;
    f32 axisY = rotation.values[4] * 0.0f + rotation.values[5] * 1.0f + rotation.values[6] * 0.0f;
    f32 axisZ = rotation.values[8] * 0.0f + rotation.values[9] * 1.0f + rotation.values[10] * 0.0f;
    f32 speed = spec->speedBase + spec->speedVariance * ((FUN_0025cb1c() - 0.5f) * 2.0f);
    particle->unk3C[0].set(axisX * speed, axisY * speed, axisZ * speed);

    f32 targetX = spec->positionBase[0] + spec->positionVariance[0] * ((FUN_0025cb1c() - 0.5f) * 2.0f);
    f32 targetY = spec->positionBase[1] + spec->positionVariance[1] * ((FUN_0025cb1c() - 0.5f) * 2.0f);
    f32 targetZ = spec->positionBase[2] + spec->positionVariance[2] * ((FUN_0025cb1c() - 0.5f) * 2.0f);
    particle->unk3C[2].set(targetX, targetY, targetZ);
    ((u32 *)&particle->unk3C[1])[0] = spec->color[0];
    ((u32 *)&particle->unk3C[1])[1] = spec->color[1];
    ((u32 *)&particle->unk3C[1])[2] = spec->color[2];
    return particle;
}
