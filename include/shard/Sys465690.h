/* The state block at 0x465690. */
#ifndef SHARD_SYS465690_H
#define SHARD_SYS465690_H

#include "common.h"

typedef struct Sys465690 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} Sys465690;

extern Sys465690 DAT_00465690;

#endif
