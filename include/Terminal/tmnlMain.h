/* Terminal/tmnlMain.c: the terminal (in-game "tmnl" app) screen. */
#ifndef TERMINAL_TMNLMAIN_H
#define TERMINAL_TMNLMAIN_H

#include "common.h"
#include <stddef.h>

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
    /* 0x594 */ s32 items[2];               /* entry values, indexed by tmnlFindSlotForItem */
} TmnlWork;
typedef char TmnlWorkLayoutCheck[sizeof(TmnlWork) == 0x59C ? 1 : -1];

/* Terminal work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct TmnlWorkA {
    /* 0x00 */ u32 task;                   /* the terminal task's handle */
    /* 0x04 */ u8 done;                    /* the task has finished; the work area may be freed */
    /* 0x05 */ u8 unk05[4];
    /* 0x09 */ u8 destination;             /* index in g_tmnlEntries */
    /* 0x0A */ u8 unk0A[6];
    /* 0x10 */ u32 openingMode;
    /* 0x14 */ u8 unk14[0x594];
    /* 0x5A8 */ s32 items[2];               /* entry values, indexed by tmnlFindSlotForItem */
} TmnlWorkA;

/* Apocalypse: the terminal's globals. */
typedef struct TmnlGlobalsA {
    /* 0x00 */ TmnlWorkA *work;           /* NULL while closed */
    /* 0x04 */ s32 selection;              /* last selection, -1 = none */
} TmnlGlobalsA;

/* An entry in Apocalypse's terminal destination table. */
struct TmnlEntryA {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s8 group;
    /* 0x05 */ u8 unk05[2];
    /* 0x07 */ char name[0x35];
};

typedef char TmnlEntryALayoutCheck[sizeof(TmnlEntryA) == 0x3C &&
    offsetof(TmnlEntryA, group) == 4 && offsetof(TmnlEntryA, name) == 7 ? 1 : -1];
typedef char TmnlWorkALayoutCheck[sizeof(TmnlWorkA) == 0x5B0 &&
    offsetof(TmnlWorkA, destination) == 9 && offsetof(TmnlWorkA, openingMode) == 0x10 &&
    offsetof(TmnlWorkA, items) == 0x5A8 ? 1 : -1];

extern "C" TmnlEntryA g_tmnlEntries[22];
extern "C" s32 tmnlDrawDestinationName(u32 task);

#endif
