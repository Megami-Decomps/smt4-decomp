#ifndef GFX_PARTICLEEMISSION_H
#define GFX_PARTICLEEMISSION_H
#include "common.h"
#include <stddef.h>

struct ParticleEmissionState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 initialCount;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ s32 frame;
    /* 0x14 */ f32 remainder;
};
struct ParticleEmissionDefinition {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 duration;
    /* 0x24 */ u32 rate;
    /* 0x28 */ f32 randomness;
    /* 0x2C */ u8 unk2C[0x91];
    /* 0xBD */ u8 burstOnFirstFrame;
};
typedef char ParticleEmissionStateOffsets[offsetof(ParticleEmissionState, frame) == 0x10 && offsetof(ParticleEmissionState, remainder) == 0x14 ? 1 : -1];
typedef char ParticleEmissionDefinitionOffsets[offsetof(ParticleEmissionDefinition, rate) == 0x24 && offsetof(ParticleEmissionDefinition, burstOnFirstFrame) == 0xBD ? 1 : -1];
#endif
