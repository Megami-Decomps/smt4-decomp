/* mobiclip_ctrl/MobiclipCtrlProcess.c: the task that plays a movie. */
#ifndef MOBICLIP_CTRL_MOBICLIPCTRLPROCESS_H
#define MOBICLIP_CTRL_MOBICLIPCTRLPROCESS_H

#include "common.h"

/* The movie process task's work area. */
typedef struct MobiclipProcessWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u32 movie;                  /* the playing movie, released on destroy */
    /* 0x68 */ u8 unk68[0xF];
    /* 0x77 */ u8 unk77;
    /* 0x78 */ u8 unk78;
    /* 0x79 */ u8 unk79;
    /* 0x7A */ u16 unk7A;
} MobiclipProcessWork;

typedef struct MobiclipProcessGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MobiclipProcessWork *work;
} MobiclipProcessGlobals;

#endif
