#ifndef SHARD_W6_W6MATCH2_QUERY_SLOTS_H
#define SHARD_W6_W6MATCH2_QUERY_SLOTS_H

#include "common.h"

struct QuerySlot {
    u8 unk00[0x48]; // 0x00
    u32 handle;      // 0x48
    union {
        u8 unk4c[0x2c]; // 0x4c
        struct {
            u8 unk4c[0x28]; // 0x4c
            u8 flags;        // 0x74
            u8 unk75;        // 0x75
            u8 pending;      // 0x76
            u8 unk77;        // 0x77
        } status;
    };
};

static __inline QuerySlot* querySlotAt(QuerySlot* slots, u32 index)
{
    return index >= 4 ? NULL : &slots[index];
}

#endif
