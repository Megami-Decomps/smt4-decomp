#ifndef SHARD_W6_W6MATCH2_RECORD_VALUE_H
#define SHARD_W6_W6MATCH2_RECORD_VALUE_H

#include "shard/GameDataBlocks.h"

struct RecordValue {
    u32 unk00[11]; // 0x00
    u16 value;      // 0x2c
    union {
        u8 unk2e[6];    // 0x2e
        struct {
            u16 flags; // 0x2e
            u8 unk30[4];
        } eligibility;
    };
};

struct RecordValueBlock {
    u8 unk0000[0xc1f8]; // 0x0000
    RecordValue records[0x501]; // 0xc1f8
};

#endif
