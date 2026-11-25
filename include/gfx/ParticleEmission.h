#ifndef GFX_PARTICLEEMISSION_H
#define GFX_PARTICLEEMISSION_H
#include "common.h"
#include <stddef.h>

/* An effect emitter: the state effComputeParticleEmission advances, then the particle arrays and the definition
 * each emitter type lays out for itself. */
struct ParticleEmissionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 initialCount;       /* particle slots */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 flags;              /* bit 0: particles keep the emitter's space */
    /* 0x10 */ s32 frame;
    /* 0x14 */ f32 remainder;
    /* 0x18 */ void *particles;        /* one transform sample (plus the type's own values) per slot */
    /* 0x1C */ void *motions;          /* the type's motion state per slot */
    /* 0x20 */ void *definition;
};
/* Dimensions of the trail grid allocated after the parent particle slots. */
struct ParticleTrailShape {
    u32 columns;
    s32 rows;
};

struct ParticleEmissionDefinition {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 duration;
    /* 0x24 */ u32 rate;
    /* 0x28 */ f32 randomness;
    /* 0x2C */ u8 unk2C[0x91];
    /* 0xBD */ u8 burstOnFirstFrame;
    /* 0xBE */ u8 unkBE[2];
    /* 0xC0 */ ParticleTrailShape trail;
};
typedef char ParticleEmissionStateOffsets[offsetof(ParticleEmissionState, frame) == 0x10 && offsetof(ParticleEmissionState, remainder) == 0x14 &&
    offsetof(ParticleEmissionState, flags) == 0xC && offsetof(ParticleEmissionState, particles) == 0x18 &&
    offsetof(ParticleEmissionState, definition) == 0x20 ? 1 : -1];
typedef char ParticleEmissionDefinitionOffsets[
    offsetof(ParticleEmissionDefinition, rate) == 0x24 &&
    offsetof(ParticleEmissionDefinition, burstOnFirstFrame) == 0xBD &&
    offsetof(ParticleEmissionDefinition, trail) == 0xC0 && sizeof(ParticleTrailShape) == 8 ? 1 : -1];
#endif
