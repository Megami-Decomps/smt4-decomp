/* The block at 0x44de28: two state bytes, the pointer to the running worker and the load backups. */
#ifndef SHARD_SYS44DE28_H
#define SHARD_SYS44DE28_H

#include "common.h"
#include <stddef.h>

typedef struct Worker {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 stopRequested;
    /* 0x005 */ u8 unk005[0xF];
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u8 unk018[0x1C];
    /* 0x034 */ u32 slotIndex;
    /* 0x038 */ f32 slotX;
    /* 0x03C */ f32 slotY;
    /* 0x040 */ u8 unk040[9];
    /* 0x049 */ s8 isLoad;         /* s8: read with ldrsb to pick the screen's caption */
    /* 0x04A */ u8 unk04A[6];
    /* 0x050 */ u32 state;
    /* 0x054 */ u8 unk054;
    /* 0x055 */ u8 shaded;         /* the screen shading overlay is drawn */
    /* 0x056 */ u8 unk056[0x1A];
    /* 0x070 */ u8 titleShown;
    /* 0x071 */ u8 titleBusy;
    /* 0x072 */ u8 cursorBusy;
    /* 0x073 */ u8 unk073[0x2D9];
    /* 0x34C */ u8 entryLocked[8]; /* indexed by the current slot (g_saveLoadUIFlags.lastSlot) */
    /* 0x354 */ s8 visible;
    /* 0x355 */ u8 unk355[0x1F];
    /* 0x374 */ f32 shadeSpeed;    /* effect speed while the shading is drawn */
    /* 0x378 */ s8 closing;
    /* 0x379 */ u8 unk379;
} Worker;

typedef char WorkerLayoutCheck[offsetof(Worker, isLoad) == 0x49 && offsetof(Worker, entryLocked) == 0x34C &&
    offsetof(Worker, visible) == 0x354 && offsetof(Worker, shadeSpeed) == 0x374 &&
    offsetof(Worker, unk379) == 0x379 ? 1 : -1];

typedef struct Sys44de28 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Worker *worker;
    /* 0x08 */ s32 lastSlot;       /* the slot the screen selects when it opens */
    /* 0x0C */ s32 openedSlot;     /* lastSlot as the screen opened */
    /* 0x10 */ void *backupTable;  /* copies of the game data table, settings and save data taken before a load */
    /* 0x14 */ void *backupConfig;
    /* 0x18 */ void *backupSave;
} Sys44de28;

extern Sys44de28 g_saveLoadUIFlags;

#endif
