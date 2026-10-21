/* NON_MATCHING: paired extent conversions/scales match, but constant-register reuse and texture/address scheduling differ. */
#include "shard/W6_W6Match5_TextureAttachment.h"
#include "shard/W6_W6Match2_TextureHolder.h"

struct TextureExtent {
    f32 width;
    f32 height;

    TextureExtent(f32 width, f32 height) : width(width), height(height) {}

    TextureExtent operator*(f32 scale) const
    {
        return TextureExtent(width * scale, height * scale);
    }
};

extern "C" void FUN_00390570(TextureAttachment* effect, const void* image)
{
    AsdTexture* texture = textureCreateFromImage(image);
    TextureExtent extent = TextureExtent(static_cast<f32>(texture->dimensions.width),
                                         static_cast<f32>(texture->dimensions.height)) * 0.5f * 0.0625f;
    effect->halfWidth = extent.width;
    effect->halfHeight = extent.height;
    effect->content->model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
