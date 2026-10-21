#ifndef SHARD_W6_W6MATCH2_KEYED_VALUE_TABLE_H
#define SHARD_W6_W6MATCH2_KEYED_VALUE_TABLE_H

#include "common.h"

struct KeyedValueSlot {
    u32 value;       // 0x00
    s32 firstKey;    // 0x04
    s32 secondKey;   // 0x08
    u8 unk0c[0x1c]; // 0x0c
};

struct KeyedValueTable {
    u8 unk000[0x190];        // 0x000
    KeyedValueSlot slots[50]; // 0x190
};

#endif
