/* NON_MATCHING: VFP extent loads, conversions, and multiplication scheduling differ. */
#include "common.h"

struct TextureExtent {
    u8 unk00[0x24];
    u16 width;
    u16 height;
};
struct TextureExtentOwner {
    u8 unk00[0x10];
    TextureExtent *texture;
};
struct OverrideExtent {
    u8 unk00[0x14];
    s32 width;
    s32 height;
};
struct OverrideExtentOwner {
    u8 unk00[0xc];
    OverrideExtent *extent;
};
struct ScaledTextureExtent {
    u32 unk00;
    TextureExtentOwner *source;
    OverrideExtentOwner *overrideSource;
    u8 unk0c[0x10];
    f32 horizontalMargin;
    f32 verticalMargin;
    u32 unk24;
    u8 useOverride;
};

extern "C" {
// Compute a square scaled bound and the texture's scaled half-width.
void FUN_004019c0(const ScaledTextureExtent *source, f32 *bounds, f32 scale)
{
    const TextureExtent *texture = source->source->texture;
    f32 width;
    f32 height;
    if (source->useOverride != 0) {
        width = static_cast<f32>(source->overrideSource->extent->width);
        height = static_cast<f32>(source->overrideSource->extent->height);
    } else {
        width = static_cast<f32>(texture->width) + __fabsf(source->horizontalMargin) * 2.0f;
        height = static_cast<f32>(texture->height) + __fabsf(source->verticalMargin) * 2.0f;
    }
    if (width > height) {
        bounds[0] = bounds[1] = width;
    } else {
        bounds[0] = bounds[1] = height;
        width = height;
    }
    bounds[0] = width * scale;
    bounds[1] = width * scale;
    bounds[2] = static_cast<f32>(texture->width) * scale * 0.5f;
}
}
