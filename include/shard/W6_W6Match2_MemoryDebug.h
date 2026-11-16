#ifndef SHARD_W6_W6MATCH2_MEMORY_DEBUG_H
#define SHARD_W6_W6MATCH2_MEMORY_DEBUG_H

#include "common.h"
#include <stddef.h>

struct MemoryDebugSettings {
    u8 unk00[0x0c]; // 0x00
    u32 flags;       // 0x0c
    u8 unk10[0x14]; // 0x10
    u32 limit;       // 0x24
};

struct MemoryDebugState {
    u8 unk00[8]; // 0x00
    MemoryDebugSettings* settings; // 0x08
    u8 unk0c[4]; // 0x0c
    void* lastMapProcess; // 0x10
    void* mapProcess; // 0x14
    s32 enabled; // 0x18
    u32 regionBase[4]; // 0x1c: main, extra, VRAM A, VRAM B
    u32 regionSize[4]; // 0x2c
};

typedef char MemoryDebugOffsets[offsetof(MemoryDebugSettings, flags) == 0x0c &&
    offsetof(MemoryDebugState, lastMapProcess) == 0x10 &&
    offsetof(MemoryDebugState, mapProcess) == 0x14 &&
    offsetof(MemoryDebugState, regionBase) == 0x1c &&
    offsetof(MemoryDebugState, regionSize) == 0x2c ? 1 : -1];

typedef void (*DebugLabelCallback)(s32 index, u32 value);
typedef void (*DebugDetailCallback)(s32 first, s32 second, s32 third, s32 fourth, u32 value);

#endif
