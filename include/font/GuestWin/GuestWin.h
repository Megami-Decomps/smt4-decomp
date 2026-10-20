/* font/GuestWin/GuestWin.c: the guest (partner) message window. */
#ifndef FONT_GUESTWIN_GUESTWIN_H
#define FONT_GUESTWIN_GUESTWIN_H

#include "common.h"

/* The guest window's work area. */
typedef struct GuestWinWork {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ s32 state;                  /* 0 idle, 1 opening, 2 shown, 3 closing */
    /* 0x0C */ s32 frames;                 /* frames since the window was shown */
    /* 0x10 */ u8 unk10[0x20];
    /* 0x30 */ u8 ui[0x20];                /* UI object of the window */
} GuestWinWork;

/* Apocalypse: the guest window's work area. */
typedef struct GuestWinWorkA {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ s32 state;                  /* 0 idle, 1 opening, 2 shown, 3 closing */
    /* 0x0C */ s32 frames;                 /* frames since the window was shown */
    /* 0x10 */ u8 unk10[0x20];
    /* 0x30 */ u8 ui[0x20];                /* UI object of the window */
} GuestWinWorkA;

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
