/* camp/UIFade/UIFade.c: the full-screen fade overlay used by the camp screens. */
#ifndef CAMP_UIFADE_UIFADE_H
#define CAMP_UIFADE_UIFADE_H

#include "common.h"

/* The fade overlay's work area. */
typedef struct UIFadeWork {
    /* 0x00 */ u32 task;
    /* 0x04 */ s32 mode;                   /* 1 / 2 set by the fade requests */
    /* 0x08 */ s32 timer;
    /* 0x0C */ f32 alpha;                  /* drawn while > 0 */
    /* 0x10 */ u8 visible;
    /* 0x11 */ u8 unk11[0x3];
} UIFadeWork;

typedef struct UIFadeGlobals {
    /* 0x00 */ s8 users;                   /* number of open requests */
    /* 0x01 */ u8 unk01[0x3];
    /* 0x04 */ UIFadeWork *work;
} UIFadeGlobals;

extern "C" {
void FUN_0020d700(void);
}

extern "C" {
void uiFadeSetVisible(u8 visible);
}

#endif
