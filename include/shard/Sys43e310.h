/* The state block at 0x43e310. */
#ifndef SHARD_SYS43E310_H
#define SHARD_SYS43E310_H

#include "common.h"

typedef struct Sys43e310 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 unk01;
    /* 0x02 */ s8 unk02;
    /* 0x03 */ s8 unk03;
} Sys43e310;

extern Sys43e310 g_saveLoadThread;

#endif
