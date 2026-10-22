#ifndef SYS_LINEARFADE_H
#define SYS_LINEARFADE_H

#include "common.h"

struct LinearFadeWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 value;
    /* 0x0C */ f32 step;
    /* 0x10 */ s32 elapsed;
    /* 0x14 */ s32 duration;
};

#endif
