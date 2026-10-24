/* Terminal/tmnlMain.c: the terminal (in-game "tmnl" app) screen. */
#ifndef TERMINAL_TMNLMAIN_H
#define TERMINAL_TMNLMAIN_H

#include "common.h"

/* Terminal work area, Shin Megami Tensei IV. */
typedef struct TmnlWork {
    /* 0x00 */ u32 task;                   /* the terminal task's handle */
    /* 0x04 */ u8 done;                    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 unk06[3];
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u32 unk20[10];
    /* 0x48 */ u8 unk48[0x508];
    /* 0x550 */ u32 unk550;
    /* 0x554 */ u8 unk554;
    /* 0x555 */ u8 unk555[3];
    /* 0x558 */ u32 unk558;
    /* 0x55C */ u8 unk55C[8];
    /* 0x564 */ u32 unk564;
    /* 0x568 */ u32 unk568;
    /* 0x56C */ u8 unk56C[4];
    /* 0x570 */ u32 unk570;
    /* 0x574 */ u32 unk574;
    /* 0x578 */ u8 unk578[4];
    /* 0x57C */ u32 unk57C;
    /* 0x580 */ u32 unk580;
    /* 0x584 */ u8 unk584[4];
    /* 0x588 */ u32 unk588;
    /* 0x58C */ u32 unk58C;
    /* 0x590 */ u8 unk590[4];
    /* 0x594 */ s32 items[2];               /* entry values, indexed by FUN_001d04a4 */
} TmnlWork;
typedef char TmnlWorkLayoutCheck[sizeof(TmnlWork) == 0x59C ? 1 : -1];

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
