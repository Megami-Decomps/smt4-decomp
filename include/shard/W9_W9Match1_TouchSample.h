#ifndef SHARD_W9_W9MATCH1_TOUCH_SAMPLE_H
#define SHARD_W9_W9MATCH1_TOUCH_SAMPLE_H

#include "common.h"
#include <stddef.h>

struct TouchInputSample {
    u16 x; // 0x00
    u16 y; // 0x02
    u8 unk04[0x0c];
    u8 down; // 0x10
    u8 previousDown; // 0x11
    u8 triggered; // 0x12
    u8 unk13;
};

typedef char TouchInputSampleLayoutCheck[sizeof(TouchInputSample) == 0x14 && offsetof(TouchInputSample, down) == 0x10 && offsetof(TouchInputSample, previousDown) == 0x11 && offsetof(TouchInputSample, triggered) == 0x12 ? 1 : -1];

#endif
