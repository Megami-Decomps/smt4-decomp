#ifndef EVENT_2DEVENT_BLINKFADE_H
#define EVENT_2DEVENT_BLINKFADE_H

#include "common.h"

struct BlinkFadeWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 position;
    s32 frame;
    f32 alpha;
    u8 visible;
    u8 unk19[3];
};
struct BlinkFadeTexture {
    u32 table;
    u32 node;
    u8 ownsNode;
    u8 ownsTable;
    u8 unk0a[2];
};

#endif
