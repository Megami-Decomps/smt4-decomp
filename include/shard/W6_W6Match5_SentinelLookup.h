#ifndef SHARD_W6_W6MATCH5_SENTINELLOOKUP_H
#define SHARD_W6_W6MATCH5_SENTINELLOOKUP_H

#include "common.h"

struct SentinelLookupEntry {
    u16 key;          // 0x00; 0xf890 terminates the table.
    u16 unk02;        // 0x02
    u32 value;        // 0x04
    u8 flags;         // 0x08
    u8 unk09[3];      // 0x09
    const char *name; // 0x0c
};

#endif
