/* Terminal/tmnlMain.c: the terminal (in-game "tmnl" app) screen. */
#ifndef TERMINAL_TMNLMAIN_H
#define TERMINAL_TMNLMAIN_H

#include "common.h"

/* Terminal work area, Shin Megami Tensei IV. */
typedef struct TmnlWork {
    /* 0x00 */ u32 task;                   /* the terminal task's handle */
    /* 0x04 */ u8 done;                    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 unk05[0x58F];
    /* 0x594 */ s32 items[2];               /* entry values, indexed by FUN_001d04a4 */
} TmnlWork;

/* Terminal work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct TmnlWorkA {
    /* 0x00 */ u32 task;                   /* the terminal task's handle */
    /* 0x04 */ u8 done;                    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 unk05[0x5A3];
    /* 0x5A8 */ s32 items[2];               /* entry values, indexed by FUN_0026edbc */
} TmnlWorkA;

/* Apocalypse: the terminal's globals. */
typedef struct TmnlGlobalsA {
    /* 0x00 */ TmnlWorkA *work;           /* NULL while closed */
    /* 0x04 */ s32 selection;              /* last selection, -1 = none */
} TmnlGlobalsA;

#endif
