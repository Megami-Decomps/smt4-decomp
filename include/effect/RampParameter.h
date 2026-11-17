#ifndef EFFECT_RAMPPARAMETER_H
#define EFFECT_RAMPPARAMETER_H

#include "common.h"

/* A value that ramps up, holds, then ramps down over frame counts, clamped to 0..1. */
struct RampParameter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 frame;
    /* 0x08 */ f32 value;
    /* 0x0C */ s32 riseEnd;
    /* 0x10 */ s32 holdEnd;
    /* 0x14 */ s32 fallEnd;
    /* 0x18 */ f32 riseStep;
    /* 0x1C */ f32 fallStep;
};

#endif
