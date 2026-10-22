#ifndef EVENT_2DEVENT_2DEVENTEFFECT_H
#define EVENT_2DEVENT_2DEVENTEFFECT_H

#include "event/2dEvent/2dEventTex.h"

struct EventTexEffectA {
    /* 0x00 */ EventTexA textures;
    /* 0x90 */ f32 effectValues[2];
};

struct EventEffectPresets {
    /* 0x00 */ f32 values[3];
};

#endif
