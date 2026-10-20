/* event/2dEvent/EventEffect.c: effects of the 2D event scenes. */
#ifndef EVENT_2DEVENT_EVENTEFFECT_H
#define EVENT_2DEVENT_EVENTEFFECT_H

#include "common.h"

#define EVENT_EFFECT_DONE 3 /* EventEffect.state: the effect has finished */

/* One running effect (Apocalypse layout). */
typedef struct EventEffectA {
    /* 0x00 */ u32 job;          /* job that runs the effect */
    /* 0x04 */ s32 state;
} EventEffectA;

/* The module global (Apocalypse): two other words precede the effect pointers. */
typedef struct EventEffectGlobalsA {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *unk08;
    /* 0x0C */ EventEffectA *effect;
} EventEffectGlobalsA;

#endif
