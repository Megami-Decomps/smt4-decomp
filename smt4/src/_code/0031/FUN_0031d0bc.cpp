#include "shard/W6_W6Match5_TextureAttachment.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"

extern "C" {
AsdTexture *FUN_0024c3c8(u16);

// Attach a texture and derive its half-size in sixteenth-unit coordinates.
void FUN_0031d0bc(TextureAttachment *attachment, u32 textureId)
{
    AsdTexture *texture = FUN_0024c3c8((u16)textureId);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    attachment->halfWidth = width * 0.5f * 0.0625f;
    attachment->halfHeight = height * 0.5f * 0.0625f;
    attachment->content->model->texture = texture;
    refCountIncrement(reinterpret_cast<int *>(texture));
}
}
