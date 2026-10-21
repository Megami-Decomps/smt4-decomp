#ifndef SHARD_W6_W6MATCH8_SPRITE_TEXTURE_RESOURCE_H
#define SHARD_W6_W6MATCH8_SPRITE_TEXTURE_RESOURCE_H

#include "shard/W6_W6Match7_SpriteGroups.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct SpriteGroupFileHeader {
    u32 dataSize;
    s32 groupCount;
};

struct SpriteTextureCache {
    u32 unk00[2];
    AsdTexture *entries[1];
};

struct SpriteTextureResource {
    SpriteGroupResource group; // 0x00
    u32 stateCapacity;         // 0x08
    s32 textureCount;          // 0x0c
    u32 references;            // 0x10
    AsdTexture **textures;     // 0x14
    void *allocation;         // 0x18
};

#endif
