/* font/SearchWin/RunWin.c: the "run" (escape) command window. */
#ifndef FONT_SEARCHWIN_RUNWIN_H
#define FONT_SEARCHWIN_RUNWIN_H

#include "common.h"

/* The run (escape) window's work area. */
typedef struct RunWinWork {
    /* 0x00 */ u32 task;                   /* the window's task handle */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 nextState;
    /* 0x10 */ s32 counter;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[0x3];
    /* 0x18 */ u8 sound[0x20];             /* sound player object (constructed in place) */
    /* 0x38 */ u8 ui[0x8c];                /* UI object set up by FUN_002bd954 */
    /* 0xC4 */ u8 text[0x20];
} RunWinWork;

#endif
