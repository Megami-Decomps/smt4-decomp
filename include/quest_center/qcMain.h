/* quest_center/qcMain.c: the quest center (guild) screen's controller. */
#ifndef QUEST_CENTER_QCMAIN_H
#define QUEST_CENTER_QCMAIN_H

#include "common.h"

struct QuestEntry;
typedef struct QcDrawJobs {
    /* 0x00 */ u32 upper;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 lower;
    /* 0x0C */ u8 unk0C[8];
} QcDrawJobs;

/* The quest center screen's work area. */
typedef struct QcWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ union {
        u8 unk04[0x14];
        QcDrawJobs draws;
    };
    /* 0x18 */ u8 done;                    /* the screen has finished */
    /* 0x19 */ u8 mode;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ QuestEntry *entry;                  /* the active quest entry; released on close */
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
    /* 0x08 */ union {
        s32 entryId;
        s8 result;
    };
    /* 0x0C */ s32 option0;
    /* 0x10 */ s32 option1;
} QcGlobalsA;

/* Persistent quest-center flag banks, separate from the screen's work area. */
typedef struct QcFlagBlock {
    /* 0x00 */ u8 stateFlags[4];
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u8 questFlags[4];
} QcFlagBlock;


/* Retail 32-bit layout invariants. */
typedef char QcWorkSizeCheck[sizeof(QcWork) == 0x20 ? 1 : -1];
typedef char QcGlobalsSizeCheck[sizeof(QcGlobals) == 0x8 ? 1 : -1];
typedef char QcGlobalsASizeCheck[sizeof(QcGlobalsA) == 0x14 ? 1 : -1];

extern "C" {
void buttonHelpSetPreset(u32 preset);
}

extern "C" {
u32 padButtonRepeat(u32 button);
}

extern "C" {
u32 dataTableValueOrZero(u32 index);
}

extern "C" {
u32 FUN_00169d8c(u32 kind);
}

#endif
