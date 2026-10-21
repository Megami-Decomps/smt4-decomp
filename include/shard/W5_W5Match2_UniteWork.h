#ifndef SHARD_W5_W5MATCH2_UNITEWORK_H
#define SHARD_W5_W5MATCH2_UNITEWORK_H

#include "common.h"

struct UniteWork {
    /* 0x0000 */ u8 unk0000[0x400];
    /* 0x0400 */ s32 state;
    /* 0x0404 */ u8 unk0404[0x30];
    /* 0x0434 */ u32 request;
    /* 0x0438 */ u8 unk0438[0x9018];
    /* 0x9450 */ u8 blocked;
};

#endif
