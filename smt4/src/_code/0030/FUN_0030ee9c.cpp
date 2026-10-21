/* NON_MATCHING: texture moves to r5 early and dimension/model addresses use r0 instead of retail r1. -O2 also loses retail's paired VFP loads/stores. */
#include "AsdSDK/Source/Gfx/Effect/AsdEffectTexture.h"
#include "shard/W6_W6Match5_TextureAttachment.h"

extern "C" {
EffectTexture *asdEffectTextureCreate(EffectTextureFile *image);
void refCountIncrement(AsdTexture *texture);
void asdTextureRelease(AsdTexture *texture);

// Compute scaled half-dimensions and attach a retained effect texture.
void FUN_0030ee9c(TextureAttachment *attachment, EffectTextureFile *image)
{
    AsdTexture *texture = (AsdTexture *)asdEffectTextureCreate(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    attachment->halfWidth = width * 0.5f * 0.0625f;
    attachment->halfHeight = height * 0.5f * 0.0625f;
    attachment->content->model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
}
