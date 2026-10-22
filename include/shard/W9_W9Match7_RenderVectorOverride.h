#ifndef SHARD_W9_W9MATCH7_RENDERVECTOROVERRIDE_H
#define SHARD_W9_W9MATCH7_RENDERVECTOROVERRIDE_H
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

struct RenderVectorOverride {
    u8 prefix[0x50];
    Vector4 value;
    u8 padding60[8];
    u32 flags;
};
struct RenderVectorState {
    u8 prefix[0x100];
    Vector4 current;
    Vector4 previous;
};
typedef char RenderVectorOverrideLayoutCheck[
    offsetof(RenderVectorOverride, value) == 0x50 &&
    offsetof(RenderVectorOverride, flags) == 0x68 &&
    sizeof(RenderVectorOverride) == 0x6C ? 1 : -1];
typedef char RenderVectorStateLayoutCheck[
    offsetof(RenderVectorState, current) == 0x100 &&
    offsetof(RenderVectorState, previous) == 0x110 &&
    sizeof(RenderVectorState) == 0x120 ? 1 : -1];
#endif
