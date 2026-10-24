/* StaffRoll/StaffRollMain.c: the staff roll (credits) screen. */
#ifndef STAFFROLL_STAFFROLLMAIN_H
#define STAFFROLL_STAFFROLLMAIN_H

#include "common.h"

typedef struct StaffRollLine {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} StaffRollLine;

/* A credit image's size. */
typedef struct StaffRollSize {
    /* 0x00 */ f32 width;
    /* 0x04 */ f32 height;
} StaffRollSize;

typedef void (*StaffRollStateHandler)(void);

/* The staff roll's work area. */
typedef struct StaffRollWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 active;                  /* the two screen layers (0, 1) are released on close */
    /* 0x05 */ u8 closing;                 /* set while the screen is being shut down */
    /* 0x06 */ u8 unk06[0x2];
    /* 0x08 */ StaffRollLine lineA[12];    /* scrolling credit lines, 8 bytes each */
    /* 0x68 */ StaffRollLine lineB[12];
    /* 0xC8 */ StaffRollSize sizes[12];
    /* 0x128 */ u8 skip;                    /* the roll has been ended or skipped */
    /* 0x129 */ u8 unk129[3];
    /* 0x12C */ StaffRollStateHandler handlers[7]; /* one per state, run by machineStep */
    /* 0x148 */ f32 endY;                   /* the roll ends when the last line passes this */
    /* 0x14C */ s32 state;                  /* roll sequence step */
    /* 0x150 */ f32 speed;                  /* scroll per frame */
    /* 0x154 */ u8 unk154[0x604];
    /* 0x758 */ s32 frames;                 /* frames scrolled */
    /* 0x75C */ u8 finished;                /* the last line passed endY */
    /* 0x75D */ u8 unk75D[0x3];
    /* 0x760 */ s32 unk760;
} StaffRollWork;

typedef char StaffRollWorkLayoutCheck[sizeof(StaffRollWork) == 0x764 &&
    __INTADDR__(&((StaffRollWork *)0)->lineA) == 8 &&
    __INTADDR__(&((StaffRollWork *)0)->lineA[11].y) == 0x64 &&
    __INTADDR__(&((StaffRollWork *)0)->lineB) == 0x68 &&
    __INTADDR__(&((StaffRollWork *)0)->sizes) == 0xC8 &&
    __INTADDR__(&((StaffRollWork *)0)->handlers) == 0x12C &&
    __INTADDR__(&((StaffRollWork *)0)->endY) == 0x148 ? 1 : -1];

#endif
