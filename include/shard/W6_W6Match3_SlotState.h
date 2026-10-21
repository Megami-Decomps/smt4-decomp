#ifndef SHARD_W6_W6MATCH3_SLOTSTATE_H
#define SHARD_W6_W6MATCH3_SLOTSTATE_H

#include "common.h"

struct W6Match3SlotState {
    /* 0x00 */ f32 value;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 index;
    /* 0x10 */ u8 active;
    /* 0x11 */ u8 padding[3];
};

#endif
