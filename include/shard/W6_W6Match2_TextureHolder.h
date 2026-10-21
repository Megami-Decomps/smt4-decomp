#ifndef SHARD_W6_W6MATCH2_TEXTURE_HOLDER_H
#define SHARD_W6_W6MATCH2_TEXTURE_HOLDER_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct TextureHolder {
    u8 unk00[0x14]; // 0x00
    AsdTexture* texture; // 0x14
};

extern "C" {
AsdTexture* asdEffectTextureCreate(const void* image);
AsdTexture* textureCreateFromImage(const void* image);
void refCountIncrement(AsdTexture* texture);
void asdTextureRelease(AsdTexture* texture);
}

#endif
