#ifndef SHARD_W6_W6MATCH2_MEMORY_DEBUG_H
#define SHARD_W6_W6MATCH2_MEMORY_DEBUG_H

#include "common.h"

struct MemoryDebugSettings {
    u8 unk00[0x24]; // 0x00
    u32 limit;       // 0x24
};

struct MemoryDebugState {
    u8 unk00[8]; // 0x00
    MemoryDebugSettings* settings; // 0x08
    u8 unk0c[0x0c]; // 0x0c
    s32 enabled; // 0x18
};

typedef void (*DebugLabelCallback)(s32 index, u32 value);
typedef void (*DebugDetailCallback)(s32 first, s32 second, s32 third, s32 fourth, u32 value);

#endif
