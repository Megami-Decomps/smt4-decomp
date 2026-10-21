#ifndef SHARD_W6_W6MATCH1_NAVITRANSITIONSTATE_H
#define SHARD_W6_W6MATCH1_NAVITRANSITIONSTATE_H

#include "common.h"

struct NaviTransitionState {
    u8 unk00[4];     // 0x00
    u32 state;       // 0x04
    u32 step;        // 0x08
    u8 unk0c[0x54];  // 0x0c
    u32 selection;   // 0x60
};

#endif
