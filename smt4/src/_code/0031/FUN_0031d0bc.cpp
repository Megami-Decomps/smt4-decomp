/* NON_MATCHING: dimension load/store addresses use r1 instead of retail's r2. */
#include "shard/W6_W6Match5_TextureAttachment.h"

extern "C" {
AsdTexture *FUN_0024c3c8(u16);
void refCountIncrement(AsdTexture *);

// Attach a texture and derive its half-size in sixteenth-unit coordinates.
void FUN_0031d0bc(TextureAttachment *attachment, u32 textureId)
{
    AsdTexture *texture = FUN_0024c3c8((u16)textureId);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    attachment->halfWidth = width * 0.5f * 0.0625f;
    attachment->halfHeight = height * 0.5f * 0.0625f;
    attachment->content->model->texture = texture;
    refCountIncrement(texture);
}
}
