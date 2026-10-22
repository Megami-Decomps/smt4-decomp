/* name/nameMain.c: the player name entry screen. */
#ifndef NAME_NAMEMAIN_H
#define NAME_NAMEMAIN_H

#include "common.h"
#include <stddef.h>

typedef struct NameWork {
    /* 0x00 */ u32 task;   /* the screen's task handle */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 done;    /* the task has finished; the work area may be freed */
    /* 0x0D */ u8 phase;
    /* 0x0E */ u8 unk0E[2];
} NameWork;

/* smt4: the global is a pointer at +4 of a two-word block. */
typedef struct NameGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ NameWork *work;
} NameGlobals;

typedef char NameWorkPrefixLayoutCheck[sizeof(NameWork) == 0x10 &&
    offsetof(NameWork, done) == 0xc && offsetof(NameWork, phase) == 0xd ? 1 : -1];

#endif
