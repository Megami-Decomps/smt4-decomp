/* Computes equal XY bounds from the larger image dimension, including its margins. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include <math.h>

/* The Apocalypse view of the scaled-image source: its margins and mode flag sit 0x0c bytes later. */
struct EffectBoundsSourceA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EffectBoundsImageBinding *binding;
    /* 0x08 */ EffectBoundsCustomBinding *custom;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ f32 marginX;
    /* 0x20 */ f32 marginY;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u8 useCustomSize;
};

extern "C" void FUN_004019c0(const EffectBoundsSourceA *source, f32 *bounds, f32 scale)
{
    EffectBoundsImage *image = source->binding->image;
    f32 width;
    f32 height;
    if (source->useCustomSize) {
        width = (f32)source->custom->size->width;
        height = (f32)source->custom->size->height;
    } else {
        width = (f32)image->width;
        height = (f32)image->height;
        width += fabsf(source->marginX) * 2.0f;
        height += fabsf(source->marginY) * 2.0f;
    }
    if (width > height)
        bounds[0] = bounds[1] = width;
    else
        bounds[0] = bounds[1] = height;
    bounds[0] *= scale;
    bounds[1] *= scale;
    bounds[2] = (f32)image->width * scale * 0.5f;
}
