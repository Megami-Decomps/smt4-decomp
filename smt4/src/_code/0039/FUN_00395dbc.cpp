#include "common.h"

extern "C" {

struct ParticleTransform {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0c */ f32 z;
};

struct ParticleOwner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ ParticleTransform transform;
    /* 0x34 */ u8 unk34[0x58 - 0x34];
    /* 0x58 */ s32 frame;
};

struct VelocityParticle {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0c */ ParticleOwner *owner;
    /* 0x10 */ f32 velocityX;
    /* 0x14 */ f32 velocityY;
    /* 0x18 */ f32 velocityZ;
};

void driftEffectSetVelocity(VelocityParticle *particle);

/* Per-frame update: every tenth frame of the owner runs driftEffectSetVelocity, then the owner's position advances by the particle's velocity. */
void FUN_00395dbc(VelocityParticle *particle)
{
    ParticleOwner *owner = particle->owner;
    ParticleTransform *transform = &owner->transform;

    if (owner->frame % 10 == 0) {
        driftEffectSetVelocity(particle);
    }
    transform->x += particle->velocityX;
    transform->y += particle->velocityY;
    transform->z += particle->velocityZ;
}

} /* extern "C" */
