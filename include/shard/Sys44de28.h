/* The block at 0x44de28: two state bytes, the pointer to the running worker and the load backups. */
#ifndef SHARD_SYS44DE28_H
#define SHARD_SYS44DE28_H

#include "common.h"

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
    /* 0x049 */ u8 isLoad;
    /* 0x04A */ u8 unk04A[6];
    /* 0x050 */ u32 state;
    /* 0x054 */ u8 unk054[0x325];
    /* 0x379 */ u8 unk379;
} Worker;

typedef struct Sys44de28 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Worker *worker;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ void *backupTable;  /* copies of the game data table, settings and save data taken before a load */
    /* 0x14 */ void *backupConfig;
    /* 0x18 */ void *backupSave;
} Sys44de28;

extern Sys44de28 g_saveLoadUIFlags;

#endif
