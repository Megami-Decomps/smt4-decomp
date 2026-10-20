/* The block at 0x44de28: two state bytes and the pointer to the running worker. */
#ifndef SHARD_SYS44DE28_H
#define SHARD_SYS44DE28_H

#include "common.h"

typedef struct Worker {
    /* 0x0 */ u32 job;
    /* 0x4 */ u8 stopRequested;
} Worker;

typedef struct Sys44de28 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ Worker *worker;
} Sys44de28;

extern Sys44de28 DAT_0044de28;

#endif
