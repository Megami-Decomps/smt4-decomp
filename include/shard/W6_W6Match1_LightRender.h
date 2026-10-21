#ifndef SHARD_W6_W6MATCH1_LIGHT_RENDER_H
#define SHARD_W6_W6MATCH1_LIGHT_RENDER_H

#include "shard/S1Light.h"

struct LightRenderContext;
struct LightRenderParameters;

struct LightRenderOwner {
    u32 unk00;
    LightRenderContext* context; // 0x04
};

#endif
