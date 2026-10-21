#ifndef SHARD_W6_W6MATCH2_WORD_BANK_H
#define SHARD_W6_W6MATCH2_WORD_BANK_H

#include "common.h"

struct WordBank {
    u32 state;      // 0x00
    u32 unk04[2];   // 0x04
    u32 unk0c;      // 0x0c
    u32 unk10;      // 0x10
    u32 unk14;      // 0x14
    u32 words[32];  // 0x18
    u32 unk98;      // 0x98
    u32 unk9c;      // 0x9c
    u16 flags;      // 0xa0
};

#endif
