#ifndef EVENT_2DEVENT_SNOW_NOISE_H
#define EVENT_2DEVENT_SNOW_NOISE_H
#include "event/2dEvent/EventEffect.h"

struct EventSnowNoiseWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 frame;
    f32 opacity;
    u8 complete;
    u8 style;
    u8 padding[2];
};
typedef char EventSnowNoiseWorkLayoutCheck[
    sizeof(EventSnowNoiseWork) == 0x18 && offsetof(EventSnowNoiseWork, opacity) == 0x10 &&
    offsetof(EventSnowNoiseWork, style) == 0x15 ? 1 : -1];
#endif
