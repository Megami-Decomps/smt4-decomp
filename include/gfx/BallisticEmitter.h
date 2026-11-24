#ifndef GFX_BALLISTICEMITTER_H
#define GFX_BALLISTICEMITTER_H

#include "gfx/SpiralEmitter.h"

/* Per-particle motion of the ballistic emitter. */
struct BallisticMotion {
    /* 0x00 */ f32 direction[3];
    /* 0x0C */ f32 speed;
    /* 0x10 */ f32 scale;
    /* 0x14 */ f32 angleOffset;
    /* 0x18 */ f32 angleScale;
};

/* The definition's rotation and duration are copied together when the emitter is stepped. */
struct BallisticEmitterTiming {
    /* 0x00 */ RotationQuaternion rotation;
    /* 0x10 */ s32 duration;
};

struct BallisticEmitterDefinition {
    /* 0x00 */ Vector4 origin;
    /* 0x10 */ BallisticEmitterTiming timing;
    /* 0x24 */ u32 rate;
    /* 0x28 */ f32 randomness;
    /* 0x2C */ u8 unk2C[0x40];
    /* 0x6C */ f32 scaleVariance;
    /* 0x70 */ u8 unk70[0x28];
    /* 0x98 */ f32 angleVariance;
    /* 0x9C */ u8 angleMode;
    /* 0x9D */ u8 unk9D[0x1B];
    /* 0xB8 */ s32 lifetime;
    /* 0xBC */ u8 unkBC;
    /* 0xBD */ u8 burstOnFirstFrame;
    /* 0xBE */ u8 unkBE[0xA];
    /* 0xC8 */ f32 spread;
    /* 0xCC */ f32 spreadVariance;
    /* 0xD0 */ f32 directionRadius;
    /* 0xD4 */ f32 directionVariance;
    /* 0xD8 */ f32 speed;
    /* 0xDC */ f32 speedVariance;
    /* 0xE0 */ f32 acceleration;
    /* 0xE4 */ f32 gravity;
    /* 0xE8 */ s32 angleSpread; /* degrees */
};

typedef char BallisticEmitterOffsets[sizeof(BallisticMotion) == 0x1C &&
    offsetof(BallisticEmitterDefinition, timing.rotation) == 0x10 &&
    offsetof(BallisticEmitterDefinition, timing.duration) == 0x20 &&
    offsetof(BallisticEmitterDefinition, scaleVariance) == 0x6C && offsetof(BallisticEmitterDefinition, angleMode) == 0x9C &&
    offsetof(BallisticEmitterDefinition, lifetime) == 0xB8 && offsetof(BallisticEmitterDefinition, spread) == 0xC8 &&
    offsetof(BallisticEmitterDefinition, angleSpread) == 0xE8 ? 1 : -1];

#endif
