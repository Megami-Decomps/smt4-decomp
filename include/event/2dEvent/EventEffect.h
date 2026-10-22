/* event/2dEvent/EventEffect.c: effects of the 2D event scenes. */
#ifndef EVENT_2DEVENT_EVENTEFFECT_H
#define EVENT_2DEVENT_EVENTEFFECT_H

#include "common.h"
#include <stddef.h>

#define EVENT_EFFECT_DONE 3 /* EventEffect.state: the effect has finished */

/* One running effect (Apocalypse layout). */
typedef struct EventEffectA {
    /* 0x00 */ u32 job;          /* job that runs the effect */
    /* 0x04 */ s32 state;
} EventEffectA;

struct EventFilterTexture {
    /* 0x00 */ u32 table;
    /* 0x04 */ u32 node;
    /* 0x08 */ u8 requested;
    /* 0x09 */ u8 unk09[3];
};

/* The module global (Apocalypse): two other words precede the effect pointers. */
typedef struct EventEffectGlobalsA {
    /* 0x00 */ union {
        u8 unk00[8];
        struct {
            void *unk00;
            struct EventFilterWork *work; /* 0x04 */
        } filterState;
    };
    /* 0x08 */ void *unk08;
    /* 0x0C */ EventEffectA *effect;
    /* 0x10 */ s32 textureUsers;
    /* 0x14 */ u8 unk14[0x20];
    /* 0x34 */ EventFilterTexture filterTextures[6];
    /* 0x7c */ EventFilterTexture texture;
} EventEffectGlobalsA;

typedef char EventEffectGlobalsALayoutCheck[sizeof(EventEffectGlobalsA) == 0x88 &&
    offsetof(EventEffectGlobalsA, unk08) == 8 &&
    offsetof(EventEffectGlobalsA, effect) == 0xc &&
    offsetof(EventEffectGlobalsA, textureUsers) == 0x10 &&
    offsetof(EventEffectGlobalsA, texture) == 0x7c ? 1 : -1];

#endif
