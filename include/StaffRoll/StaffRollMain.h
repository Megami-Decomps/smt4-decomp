/* StaffRoll/StaffRollMain.c: the staff roll (credits) screen. */
#ifndef STAFFROLL_STAFFROLLMAIN_H
#define STAFFROLL_STAFFROLLMAIN_H

#include "common.h"

typedef struct StaffRollLine {
    /* 0x00 */ f32 y;
    /* 0x04 */ f32 unk04;
} StaffRollLine;

/* The staff roll's work area. */
typedef struct StaffRollWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 active;                  /* the two screen layers (0, 1) are released on close */
    /* 0x05 */ u8 closing;                 /* set while the screen is being shut down */
    /* 0x06 */ u8 unk06[0x6];
    /* 0x0C */ StaffRollLine lineA[12];    /* scrolling credit lines, 8 bytes each */
    /* 0x6C */ StaffRollLine lineB[12];
    /* 0xCC */ u8 unkCC[0x5C];
    /* 0x128 */ u8 skip;                    /* the roll has been ended or skipped */
    /* 0x129 */ u8 unk129[0x1F];
    /* 0x148 */ f32 endY;                   /* the roll ends when the last line passes this */
    /* 0x14C */ s32 state;                  /* roll sequence step */
    /* 0x150 */ f32 speed;                  /* scroll per frame */
    /* 0x154 */ u8 unk154[0x604];
    /* 0x758 */ s32 frames;                 /* frames scrolled */
    /* 0x75C */ u8 finished;                /* the last line passed endY */
    /* 0x75D */ u8 unk75D[0x3];
} StaffRollWork;

#endif
