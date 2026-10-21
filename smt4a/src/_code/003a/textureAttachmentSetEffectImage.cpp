/* NON_MATCHING: texture is saved to r5 early and dimension/store addresses use r0 instead of retail r1, matching the IV image-attachment near miss. Candidate O2. */
#include "AsdSDK/Source/Gfx/Effect/AsdEffectTexture.h"
#include "shard/W6_W6Match5_TextureAttachment.h"

extern "C" {
EffectTexture* asdEffectTextureCreate(EffectTextureFile*);
void refCountIncrement(AsdTexture*);
void asdTextureRelease(AsdTexture*);

// The effect loader returns a specialized view of the same retained texture object.
void textureAttachmentSetEffectImage(TextureAttachment* attachment, EffectTextureFile* image)
{
    AsdTexture* texture = (AsdTexture*)asdEffectTextureCreate(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    attachment->halfWidth = width * 0.5f * 0.0625f;
    attachment->halfHeight = height * 0.5f * 0.0625f;
    attachment->content->model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
}
