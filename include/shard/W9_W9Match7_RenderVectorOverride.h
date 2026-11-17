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
typedef char RenderVectorOverrideLayoutCheck[
    offsetof(RenderVectorOverride, value) == 0x50 &&
    offsetof(RenderVectorOverride, flags) == 0x68 &&
    sizeof(RenderVectorOverride) == 0x6C ? 1 : -1];
#endif
