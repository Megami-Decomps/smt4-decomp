/* font/GuestWin/GuestWin.c: the guest (partner) message window. */
#ifndef FONT_GUESTWIN_GUESTWIN_H
#define FONT_GUESTWIN_GUESTWIN_H

#include "common.h"
#include <stddef.h>

#include "ui/UiSpriteState.h"

/* The guest window's work area (0xBC bytes). */
typedef struct GuestWinWork {
    union {
        /* 0x00 */ u8 unk00[0x8];
        /* 0x00 */ u32 job;                /* the update process the draw tasks hang from */
    };
    /* 0x08 */ s32 state;                  /* 0 idle, 1 opening, 2 shown, 3 closing */
    /* 0x0C */ s32 frames;                 /* frames since the window was shown */
    /* 0x10 */ u8 unk10[0x20];             /* the sprite's resource packet (UiResourceParameters) */
    /* 0x30 */ UiSpriteState sprite;       /* the window's sprite: its position and alpha place the contents */
} GuestWinWork;
typedef char GuestWinJobPrefixLayoutCheck[offsetof(GuestWinWork, job) == 0 &&
    offsetof(GuestWinWork, sprite) == 0x30 && sizeof(GuestWinWork) == 0xBC ? 1 : -1];

/* Apocalypse: the guest window's work area (0xBC bytes). */
typedef struct GuestWinWorkA {
    /* 0x00 */ u32 process;                /* the update process the draw tasks hang from */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 state;                  /* 0 idle, 1 opening, 2 shown, 3 closing */
    /* 0x0C */ s32 frames;                 /* frames since the window was shown */
    /* 0x10 */ u8 parameters[0x20];        /* the sprite's resource packet (UiResourceParameters) */
    /* 0x30 */ UiSpriteState sprite;       /* the window's sprite: its position and alpha place the contents */
} GuestWinWorkA;
typedef char GuestWinWorkALayoutCheck[offsetof(GuestWinWorkA, sprite) == 0x30 &&
    sizeof(GuestWinWorkA) == 0xBC ? 1 : -1];

/* IV: the options block returned by FUN_002b6b20. */
typedef struct GuestWinOptions {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ s16 guestWinEnabled;
} GuestWinOptions;

/* Apocalypse: the options block returned by FUN_0019a7dc. */
typedef struct GuestWinOptionsA {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 guestWinEnabled;
} GuestWinOptionsA;

#endif
