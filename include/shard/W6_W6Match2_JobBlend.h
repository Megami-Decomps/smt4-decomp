#ifndef SHARD_W6_W6MATCH2_JOB_BLEND_H
#define SHARD_W6_W6MATCH2_JOB_BLEND_H

#include "common.h"

struct JobBlendWork {
    u32 kind;       // 0x00
    u32 unk04;      // 0x04
    f32 blend;      // 0x08
    u8 unk0c[0x14]; // 0x0C
    f32 factor;     // 0x20
};

extern "C" JobBlendWork* jobGetWork(u32 job);

#endif
