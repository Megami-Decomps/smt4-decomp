/* quest_center/qcMain.c: the quest center (guild) screen's controller. */
#ifndef QUEST_CENTER_QCMAIN_H
#define QUEST_CENTER_QCMAIN_H

#include "common.h"

/* The quest center screen's work area. */
typedef struct QcWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u8 done;                    /* the screen has finished */
    /* 0x19 */ u8 unk19[0x3];
    /* 0x1C */ u32 entry;                  /* the active quest entry; released on close */
} QcWork;

/* IV: the quest center's globals. */
typedef struct QcGlobals {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[0x3];
    /* 0x04 */ QcWork *work;              /* NULL while closed */
} QcGlobals;

/* Apocalypse: the quest center's globals. */
typedef struct QcGlobalsA {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[0x3];
    /* 0x04 */ QcWork *work;              /* NULL while closed */
    /* 0x08 */ s8 result;
    /* 0x09 */ u8 unk09[0x3];
} QcGlobalsA;

/* Persistent quest-center flag banks, separate from the screen's work area. */
typedef struct QcFlagBlock {
    /* 0x00 */ u8 stateFlags[4];
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u8 questFlags[4];
} QcFlagBlock;

#endif
