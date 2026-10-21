#ifndef SHARD_W5_W5MATCH2_INPUTRESETSTATE_H
#define SHARD_W5_W5MATCH2_INPUTRESETSTATE_H

#include "common.h"

struct InputResetValues {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 values[12];
    /* 0x34 */ u16 count;
};
struct InputResetState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ InputResetValues *values;
};

#endif
