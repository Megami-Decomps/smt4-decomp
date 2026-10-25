#ifndef SHARD_W6_W6MATCH2_TEXTURE_HOLDER_H
#define SHARD_W6_W6MATCH2_TEXTURE_HOLDER_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/PlayScene.h"

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

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0028bfe4(PlayScene *scene);

#ifdef __cplusplus
}
#endif

#endif
