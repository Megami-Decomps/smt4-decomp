#ifndef SHARD_W9_W9MATCH1_TOUCH_SAMPLE_H
#define SHARD_W9_W9MATCH1_TOUCH_SAMPLE_H

#include "common.h"
#include <stddef.h>

/* The touch panel input (g_touchInput): the latest and previous readings, the held state and a key-repeat
 * style trigger. */
struct TouchInputSample {
    /* 0x00 */ u16 x;
    /* 0x02 */ u16 y;
    /* 0x04 */ u8 touch;             /* the latest reading is touched */
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u8 previous[8];       /* the reading before it */
    /* 0x10 */ u8 down;
    /* 0x11 */ u8 previousDown;
    /* 0x12 */ u8 triggered;         /* pulses on the first frame held and on each repeat */
    /* 0x13 */ u8 repeating;
    /* 0x14 */ s32 holdFrames;
    /* 0x18 */ s32 firstRepeatDelay; /* frames held before the trigger starts repeating */
    /* 0x1C */ s32 repeatDelay;      /* frames between repeats */
};

typedef char TouchInputSampleLayoutCheck[sizeof(TouchInputSample) == 0x20 && offsetof(TouchInputSample, down) == 0x10 &&
    offsetof(TouchInputSample, previousDown) == 0x11 && offsetof(TouchInputSample, triggered) == 0x12 &&
    offsetof(TouchInputSample, firstRepeatDelay) == 0x18 && offsetof(TouchInputSample, repeatDelay) == 0x1C ? 1 : -1];

#endif
