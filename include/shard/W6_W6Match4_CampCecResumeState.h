#ifndef SHARD_W6_W6MATCH4_CAMPCECRESUMESTATE_H
#define SHARD_W6_W6MATCH4_CAMPCECRESUMESTATE_H

#include "common.h"

struct CampCecResumeState {
    u8 unk000[0x144];
    u32 state; // 0x144
    u32 unk148;
    u32 unk14c;
    u8 unk150[0x1c];
    u8 optionalProcess; // 0x16c
};

#endif
