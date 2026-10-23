/* AsdSDK/Source/Gfx/Effect/effParticle: effect particle parameter blocks. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFPARTICLE_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFPARTICLE_H

#include "common.h"
#include "shard/S1Mover.h"
#include <stddef.h>

/* The block a particle parameter block takes its array size from. */
typedef struct EffParticleSource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 count;
} EffParticleSource;

/* A particle parameter block. `type` selects which of the pointer fields below are in use; the
 * arrays hold one handle per particle (`count`, or the count of `source` when it is set). */
typedef struct EffParticleParam {
    /* 0x00 */ u32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u16 type;
    /* 0x0E */ u8 unk0e[0x26];
    /* 0x34 */ void **handles34;   /* type 5: handle array (alias of buffer38) */
    /* 0x38 */ void *buffer38;     /* allocation holding handles34 */
    /* 0x3C */ void **handles3c;   /* type 6: handle array (alias of buffer40) */
    /* 0x40 */ void *buffer40;     /* allocation holding handles3c */
    /* 0x44 */ void *object44;
    /* 0x48 */ void *object48;
    /* 0x4C */ EffParticleSource *source; /* when set, its count sizes the arrays */
    union {
        /* 0x50 */ u8 unk50[4];
        /* 0x50 */ void *auxiliary;
    };
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 unk58;
} EffParticleParam;
typedef char EffParticleAuxiliaryOffsetCheck[sizeof(EffParticleParam) == 0x5C &&
    offsetof(EffParticleParam, auxiliary) == 0x50 ? 1 : -1];

struct EffObjectParticleState {
    union {
        /* 0x00 */ u8 data[0x1C];
        struct {
            u32 unk00;
            /* 0x04 */ Vec3f direction;
            /* 0x10 */ f32 angle;
            /* 0x14 */ f32 speed;
            /* 0x18 */ s8 face;
        } motion;
    };
};

struct EffObjectParticle {
    /* 0x00 */ u32 owner;
    union {
        /* 0x04 */ u8 unk04[0x98];
        struct {
            u8 unk04[0xC];
            /* 0x10 */ u8 randomDirection;
            u8 unk11[3];
            /* 0x14 */ Vec3f direction;
            u8 unk20[4];
            /* 0x24 */ f32 speed;
            /* 0x28 */ f32 variance;
            u8 unk2C[8];
            /* 0x34 */ s32 faceMode;
        } initialMotion;
    };
    /* 0x9C */ EffParticleSource *source;
    /* 0xA0 */ EffObjectParticleState *states;
    /* 0xA4 */ void *allocation;
};

typedef char EffObjectParticleStateSizeCheck[sizeof(EffObjectParticleState) == 0x1C ? 1 : -1];
typedef char EffObjectParticleLayoutCheck[
    offsetof(EffObjectParticle, source) == 0x9C &&
    offsetof(EffObjectParticle, states) == 0xA0 &&
    offsetof(EffObjectParticle, allocation) == 0xA4 &&
    sizeof(EffObjectParticle) == 0xA8 ? 1 : -1];
typedef char EffObjectParticleInitialMotionOffsets[
    offsetof(EffObjectParticle, initialMotion.randomDirection) == 0x10 &&
    offsetof(EffObjectParticle, initialMotion.direction) == 0x14 &&
    offsetof(EffObjectParticle, initialMotion.speed) == 0x24 &&
    offsetof(EffObjectParticle, initialMotion.variance) == 0x28 &&
    offsetof(EffObjectParticle, initialMotion.faceMode) == 0x34 ? 1 : -1];
typedef char EffObjectParticleMotionOffsets[
    offsetof(EffObjectParticleState, motion.direction) == 4 &&
    offsetof(EffObjectParticleState, motion.angle) == 0x10 &&
    offsetof(EffObjectParticleState, motion.speed) == 0x14 &&
    offsetof(EffObjectParticleState, motion.face) == 0x18 ? 1 : -1];

struct EffParticleSeed {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 phase;
    /* 0x18 */ u8 unk18[0x18];
};
struct EffParticleBatchState {
    /* 0x00 */ EffParticleSeed *particles;
    /* 0x04 */ f32 value;
    /* 0x08 */ f32 step;
};
struct EffParticleBatchParameters {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 duration;
    /* 0x38 */ u32 count;
    /* 0x3C */ u8 unk3C[0x50];
    /* 0x8C */ f32 start;
    /* 0x90 */ f32 startVariance;
    /* 0x94 */ f32 end;
    /* 0x98 */ f32 endVariance;
};
struct EffParticleBatch {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ EffParticleBatchState *state;
    /* 0x34 */ EffParticleBatchParameters *parameters;
};
typedef char EffParticleSeedLayoutCheck[
    offsetof(EffParticleSeed, phase) == 0x14 && sizeof(EffParticleSeed) == 0x30 ? 1 : -1];
typedef char EffParticleBatchStateOffsetsCheck[
    offsetof(EffParticleBatchState, value) == 4 && offsetof(EffParticleBatchState, step) == 8 ? 1 : -1];
typedef char EffParticleBatchParameterOffsetsCheck[
    offsetof(EffParticleBatchParameters, duration) == 0x34 &&
    offsetof(EffParticleBatchParameters, count) == 0x38 &&
    offsetof(EffParticleBatchParameters, start) == 0x8C &&
    offsetof(EffParticleBatchParameters, endVariance) == 0x98 ? 1 : -1];
typedef char EffParticleBatchOffsetsCheck[
    offsetof(EffParticleBatch, state) == 0x30 && offsetof(EffParticleBatch, parameters) == 0x34 ? 1 : -1];

#endif
