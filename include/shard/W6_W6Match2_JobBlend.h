#ifndef SHARD_W6_W6MATCH2_JOB_BLEND_H
#define SHARD_W6_W6MATCH2_JOB_BLEND_H

#include "common.h"
#include "shard/JobWork.h"
#include <stddef.h>

struct JobBlendWork {
    u32 kind;       // 0x00
    u32 unk04;      // 0x04
    f32 blend;      // 0x08
    u8 unk0c[0x14]; // 0x0C
    f32 factor;     // 0x20
};

struct AlphaFadeState {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ f32 step;
};

/* A blend job with a timed opacity fade appended to its work area. */
struct AlphaFadeJob {
    /* 0x00 */ JobBlendWork common;
    /* 0x24 */ AlphaFadeState fade;
};

/* The smaller job's header precedes the same timed opacity fade. */
struct ShortAlphaFadeJob {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ AlphaFadeState fade;
};

typedef char AlphaFadeJobLayoutCheck[offsetof(AlphaFadeJob, fade) == 0x24 &&
    offsetof(ShortAlphaFadeJob, fade) == 0xC && sizeof(AlphaFadeState) == 8 ? 1 : -1];

/* Starts a fade from full opacity, or clears it immediately when there are no frames. */
static __inline void alphaFadeOut(f32 &alpha, f32 &step, s32 frames)
{
    if (frames == 0) {
        alpha = 0.0f;
        step = 0.0f;
    } else {
        alpha = 1.0f;
        step = -1.0f / (f32)frames;
    }
}

#endif
