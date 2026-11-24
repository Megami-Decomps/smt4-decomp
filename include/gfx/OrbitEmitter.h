/* The orbit emitters. They keep the particles the spiral emitters keep (gfx/SpiralEmitter.h)
 * and build their vectors in g_vectorScratch with the same inline operations.
 * - the orbit emitter (effOrbitEmitterUpdate): each particle circles the emitter's origin in its own randomly
 *   tilted plane, at a radius that grows or shrinks over its life, and falls under gravity;
 * - the axis orbit emitter (effAxisOrbitEmitterUpdate): each particle circles the emitter's vertical axis while it
 *   rises or falls along it. */
#ifndef GFX_ORBITEMITTER_H
#define GFX_ORBITEMITTER_H

#include "gfx/SpiralEmitter.h"
#include "shard/W6_W6Match3_RotationY.h"

/* The motion of one particle (0x34 bytes). */
struct OrbitMotion {
    /* 0x00 */ f32 origin[3];       /* the emitter's origin when the particle was emitted */
    /* 0x0C */ f32 pitch;           /* the tilt of the orbit's plane, radians */
    /* 0x10 */ f32 yaw;
    /* 0x14 */ f32 radius;
    /* 0x18 */ f32 radiusStep;
    /* 0x1C */ f32 phaseSpeed;      /* radians a frame */
    /* 0x20 */ f32 phase;           /* the angle the particle starts at, radians */
    /* 0x24 */ f32 height;          /* how far it has fallen */
    /* 0x28 */ f32 scale;
    /* 0x2C */ f32 angleOffset;
    /* 0x30 */ f32 angleScale;
};

/* The emitter's definition, as this emitter type lays it out. */
struct OrbitEmitterDefinition {
    /* 0x00 */ Vector4 origin;
    /* 0x10 */ RotationQuaternion rotation;
    /* 0x20 */ s32 duration;        /* 0: the emitter loops */
    /* 0x24 */ u32 rate;            /* particles per frame */
    /* 0x28 */ f32 randomness;      /* of the rate */
    /* 0x2C */ u8 unk2C[0x40];
    /* 0x6C */ f32 scaleVariance;
    /* 0x70 */ u8 unk70[0x28];
    /* 0x98 */ f32 angleVariance;
    /* 0x9C */ u8 angleMode;        /* 1: random angle and spin direction, 2: no rotation */
    /* 0x9D */ u8 unk9D[0x1B];
    /* 0xB8 */ s32 lifetime;        /* frames a particle lives */
    /* 0xBC */ u8 unkBC;
    /* 0xBD */ u8 burstOnFirstFrame;
    /* 0xBE */ u8 unkBE[0xA];
    /* 0xC8 */ f32 radius;
    /* 0xCC */ f32 radiusVariance;
    /* 0xD0 */ f32 endRadius;
    /* 0xD4 */ f32 endRadiusVariance;
    /* 0xD8 */ f32 phaseSpeed;
    /* 0xDC */ f32 phaseSpeedVariance;
    /* 0xE0 */ f32 phaseAcceleration;
    /* 0xE4 */ f32 gravity;
};
typedef char OrbitEmitterOffsets[sizeof(OrbitMotion) == 0x34 &&
    offsetof(OrbitEmitterDefinition, scaleVariance) == 0x6C && offsetof(OrbitEmitterDefinition, angleMode) == 0x9C &&
    offsetof(OrbitEmitterDefinition, lifetime) == 0xB8 && offsetof(OrbitEmitterDefinition, radius) == 0xC8 &&
    offsetof(OrbitEmitterDefinition, gravity) == 0xE4 ? 1 : -1];

/* The axis orbit emitter (Apocalypse, effAxisOrbitEmitterUpdate): its particles circle the emitter's vertical axis at a
 * radius that grows or shrinks over their lifetime while they rise or fall along it.
 * The motion of one particle (0x40 bytes): where its circle is (the emitter's origin and rotation when it was
 * emitted) and where on it the particle is. */
struct AxisOrbitMotion {
    /* 0x00 */ f32 origin[3];
    /* 0x0C */ RotationQuaternion rotation;
    /* 0x1C */ f32 height;          /* along the axis */
    /* 0x20 */ f32 radius;
    /* 0x24 */ f32 radiusStep;
    /* 0x28 */ f32 angle;           /* radians, when emitted */
    /* 0x2C */ f32 angleSpeed;      /* radians a frame */
    /* 0x30 */ f32 riseSpeed;
    /* 0x34 */ f32 scale;
    /* 0x38 */ f32 angleOffset;
    /* 0x3C */ f32 angleScale;
};

/* The axis orbit emitter's definition, as this emitter type lays it out. */
struct AxisOrbitEmitterDefinition {
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
    /* 0xC8 */ f32 spread;          /* the range of starting heights */
    /* 0xCC */ f32 radius;
    /* 0xD0 */ f32 radiusVariance;
    /* 0xD4 */ f32 endRadius;
    /* 0xD8 */ f32 endRadiusVariance;
    /* 0xDC */ f32 angleSpeed;
    /* 0xE0 */ f32 angleSpeedVariance;
    /* 0xE4 */ f32 riseSpeed;
    /* 0xE8 */ f32 riseSpeedVariance;
    /* 0xEC */ f32 angleAcceleration;
    /* 0xF0 */ f32 gravity;         /* taken off the rise speed every frame */
};
typedef char AxisOrbitEmitterOffsets[sizeof(AxisOrbitMotion) == 0x40 && offsetof(AxisOrbitMotion, height) == 0x1C &&
    offsetof(AxisOrbitEmitterDefinition, scaleVariance) == 0x6C && offsetof(AxisOrbitEmitterDefinition, angleMode) == 0x9C &&
    offsetof(AxisOrbitEmitterDefinition, lifetime) == 0xB8 && offsetof(AxisOrbitEmitterDefinition, spread) == 0xC8 &&
    offsetof(AxisOrbitEmitterDefinition, gravity) == 0xF0 ? 1 : -1];

#endif
