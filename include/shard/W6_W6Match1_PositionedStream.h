#ifndef SHARD_W6_W6MATCH1_POSITIONEDSTREAM_H
#define SHARD_W6_W6MATCH1_POSITIONEDSTREAM_H

#include "common.h"

struct PositionedStream;
struct PositionedStreamVtable {
    u8 unk00[0x18];
    u32 (*seek)(PositionedStream* stream, u64 offset); // 0x18
    u8 unk1c[0x0c];
    u32 (*transfer)(PositionedStream* stream, u32* completed, void* buffer, u32 size); // 0x28
};
struct PositionedStream {
    PositionedStreamVtable* vtable;
};

extern "C" {
u32 FUN_001ffb70(PositionedStream* stream, u32 offset, void* buffer, u32 size);
u32 FUN_002bf040(PositionedStream* stream, u32 offset, void* buffer, u32 size);
}

#endif
