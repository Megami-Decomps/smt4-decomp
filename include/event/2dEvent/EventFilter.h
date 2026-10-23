#ifndef EVENT_2DEVENT_EVENTFILTER_H
#define EVENT_2DEVENT_EVENTFILTER_H
#include "event/2dEvent/EventEffect.h"
struct EventFilterWork {
    u32 job;
    u32 unk04;
    s32 state;
    s32 frame;
    f32 pulse;
    f32 opacity;
    u32 texture;
    s32 duration;
};
typedef char EventFilterWorkLayoutCheck[
    offsetof(EventFilterWork, state) == 8 && offsetof(EventFilterWork, opacity) == 0x14 &&
    sizeof(EventFilterWork) == 0x20 ? 1 : -1];
#endif
