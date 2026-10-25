#ifndef SHARD_TEXTURE_DRAW_PAYLOAD_H
#define SHARD_TEXTURE_DRAW_PAYLOAD_H

#include "common.h"

/* Eight opaque argument bytes; the VFP copy does not identify float data. */
struct TextureDrawPayloadIV {
    u32 words[2];
};

#endif
