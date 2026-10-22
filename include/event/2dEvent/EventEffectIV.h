#ifndef EVENT_2DEVENT_EVENTEFFECTIV_H
#define EVENT_2DEVENT_EVENTEFFECTIV_H
#include "event/2dEvent/EventEffect.h"

struct EventEffectWorkIV {
    u32 job; // 0x00
};
struct EventEffectGlobalsIV {
    EventEffectWorkIV *effect; // 0x00
    u8 unk04[0x14]; // 0x04
    EventFilterTexture textures[2]; // 0x18
};
typedef char EventEffectGlobalsIVLayoutCheck[sizeof(EventEffectGlobalsIV) == 0x30 &&
    offsetof(EventEffectGlobalsIV, textures) == 0x18 ? 1 : -1];
#endif
