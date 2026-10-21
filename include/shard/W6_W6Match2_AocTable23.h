#ifndef SHARD_W6_W6MATCH2_AOC_TABLE23_H
#define SHARD_W6_W6MATCH2_AOC_TABLE23_H

#include "common.h"

struct Table23Record {
    u8 data[0x0c];
};

// The common extension tail lies beyond both canonical AocSystem prefixes.
struct AocTable23View {
    u8 unk000[0x3ec];    // 0x000
    u32 count;           // 0x3ec
    Table23Record* entries; // 0x3f0
};

#endif
