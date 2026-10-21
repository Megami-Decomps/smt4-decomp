#ifndef SHARD_W6_W6MATCH2_GEOMETRY_RESOURCES_H
#define SHARD_W6_W6MATCH2_GEOMETRY_RESOURCES_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct OwnedBufferPair;
struct GeometryResources {
    u16 flags;              // 0x00
    u16 unk02;              // 0x02
    AsdTexture* texture;    // 0x04
    OwnedBufferPair* buffers; // 0x08
    void* special;          // 0x0c
};

extern "C" void bufferReleaseOwnedPair(OwnedBufferPair* buffers);
extern "C" OwnedBufferPair* bufferDestroyOwnedPair(OwnedBufferPair* buffers);

#endif
