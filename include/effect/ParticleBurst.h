#ifndef EFFECT_PARTICLEBURST_H
#define EFFECT_PARTICLEBURST_H

#include "common.h"
#include <stddef.h>

/* One particle record written by the burst emitter (0x20 bytes). */
struct BurstParticle {
    /* 0x00 */ s32 emitterKey;
    /* 0x04 */ s16 frame;       /* start frame in the particle's animation track */
    /* 0x06 */ s8 track;        /* index of the animation track, -1 = none */
    /* 0x07 */ u8 unk07;
    /* 0x08 */ u32 color;       /* RGBA, alpha 255 */
    /* 0x0C */ f32 size;
    /* 0x10 */ f32 x;
    /* 0x14 */ f32 y;
    /* 0x18 */ f32 z;
    /* 0x1C */ u16 group;
    /* 0x1E */ u16 index;
};

/* One spawn group of an emitter (0x14 bytes). */
struct BurstGroup {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 step;
    /* 0x08 */ f32 gap;         /* subtracted from the running offset before the next group */
    /* 0x0C */ f32 brightness;  /* 0..1 colour intensity */
    /* 0x10 */ f32 spread;
};

/* The emitter description: spawns its groups' particles. */
struct BurstEmitter {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 key;
    /* 0x1C */ s32 groupCount;
    /* 0x20 */ s32 frameMode;   /* 0: frame 0, 1: random multiple of 4, 2: random */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BurstGroup groups[1];
};

/* An animation track of the emitter's owner (0x48 bytes). */
struct BurstTrack {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 key;
    /* 0x08 */ u8 unk08[0x40];
};

typedef char BurstLayoutCheck[sizeof(BurstParticle) == 0x20 && sizeof(BurstGroup) == 0x14 &&
    sizeof(BurstTrack) == 0x48 && offsetof(BurstEmitter, groups) == 0x28 &&
    offsetof(BurstParticle, group) == 0x1C ? 1 : -1];

#endif
