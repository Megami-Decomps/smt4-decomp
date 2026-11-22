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

/* The fade/slide banner shown over the event scene (Apocalypse). */
typedef struct EventBannerWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;        /* 0 loading, 1 playing, 2 done */
    /* 0x0C */ s32 offset;       /* vertical slide offset */
    /* 0x10 */ s32 frame;
    /* 0x14 */ f32 alpha;
    /* 0x18 */ u8 active;
    /* 0x19 */ u8 slideOnly;     /* set when only the quick slide-out plays */
} EventBannerWork;

typedef char EventBannerWorkLayoutCheck[offsetof(EventBannerWork, alpha) == 0x14 &&
    offsetof(EventBannerWork, slideOnly) == 0x19 ? 1 : -1];

/* The module global (Apocalypse): two other words precede the effect pointers. */
typedef struct EventEffectGlobalsA {
    /* 0x00 */ union {
        u8 unk00[8];
        struct {
            EventBannerWork *banner;      /* 0x00 */
            struct EventFilterWork *work; /* 0x04 */
        } filterState;
    };
    /* 0x08 */ void *unk08;
    /* 0x0C */ EventEffectA *effect;
    /* 0x10 */ s32 textureUsers;
    /* 0x14 */ void *slashes[2];                 /* the two slash effects' work */
    /* 0x1C */ EventFilterTexture bannerTextures[2];
    /* 0x34 */ EventFilterTexture filterTextures[6];
    /* 0x7c */ EventFilterTexture texture;
} EventEffectGlobalsA;

typedef char EventEffectGlobalsALayoutCheck[sizeof(EventEffectGlobalsA) == 0x88 &&
    offsetof(EventEffectGlobalsA, unk08) == 8 &&
    offsetof(EventEffectGlobalsA, effect) == 0xc &&
    offsetof(EventEffectGlobalsA, textureUsers) == 0x10 &&
    offsetof(EventEffectGlobalsA, bannerTextures) == 0x1c &&
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
s32 partyPanelGetRequestedUnitId(void);
}

#ifdef __cplusplus
extern "C" {
#endif

void commonBgStopChildAndBeginTransition(void);

#ifdef __cplusplus
}
#endif

#endif
