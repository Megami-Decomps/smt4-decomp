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
    /* 0x08 */ s32 frame;
    /* 0x0C */ f32 level;        /* pulses between 0 and 0.4 */
    /* 0x10 */ f32 levelStep;    /* per-frame change of level */
    /* 0x14 */ u8 stopArmed;     /* a stop frame is pending */
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ s32 stopFrame;    /* frame at which the effect starts fading out */
} EventEffectA;

typedef char EventEffectALayoutCheck[offsetof(EventEffectA, frame) == 8 &&
    offsetof(EventEffectA, level) == 0xc &&
    offsetof(EventEffectA, stopArmed) == 0x14 &&
    offsetof(EventEffectA, stopFrame) == 0x18 ? 1 : -1];

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

extern "C" {
u32 FUN_00284e94(void);
}

extern "C" {
u8 *FUN_002840ac(void);
}

extern "C" {
void infoWinSetText(const char *entry, u32 arg);
}

extern "C" {
s32 FUN_003b6fc4(void);
}

#endif
