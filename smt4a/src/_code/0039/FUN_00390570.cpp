#include "shard/W6_W6Match5_TextureAttachment.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" void FUN_00390570(TextureAttachment* effect, const void* image)
{
    AsdTexture* texture = textureCreateFromImage(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    effect->halfWidth = width * 0.5f * 0.0625f;
    effect->halfHeight = height * 0.5f * 0.0625f;
    TextureAttachmentModel* model = effect->content->model;
    model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
