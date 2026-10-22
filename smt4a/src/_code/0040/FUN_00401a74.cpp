/* NON_MATCHING: binding loads and float conversion/max scheduling allocate two extra saved registers. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include <math.h>
#include <stddef.h>

extern "C" void FUN_00401a74(EffectBoundsSource *bounds, f32 *scale, f32 *offset)
{
    // This variant's margins lie beyond the shared source prefix.
    struct BoundsSourceView {
        u32 unk00;
        EffectBoundsImageBinding *binding;
        EffectBoundsCustomBinding *custom;
        u8 unk0c[0x10];
        f32 marginX;
        f32 marginY;
        u8 unk24[4];
        u8 bypassSizing;
    };
    typedef char BoundsSourceLayoutCheck[offsetof(BoundsSourceView, marginX) == 0x1c && offsetof(BoundsSourceView, bypassSizing) == 0x28 ? 1 : -1];
    BoundsSourceView *source = (BoundsSourceView *)bounds;
    if (source->bypassSizing != 0) {
        scale[0] = 1.0f;
        scale[1] = 1.0f;
        offset[0] = 0.0f;
        offset[1] = 0.0f;
        return;
    }
    const EffectBoundsCustomSize *custom = source->custom->size;
    const EffectBoundsImage *image = source->binding->image;
    f32 width = (f32)custom->width;
    f32 height = (f32)custom->height;
    f32 extentX = (f32)(u32)image->width + fabsf(source->marginX) * 2.0f;
    f32 extentY = (f32)(u32)image->height + fabsf(source->marginY) * 2.0f;
    f32 extent = extentX > extentY ? extentX : extentY;
    scale[0] = extent / width;
    scale[1] = extent / height;
    offset[0] = 0.0f;
    offset[1] = 0.0f;
    if (source->marginX != 0.0f) {
        offset[0] = source->marginX / width;
    }
    if (source->marginY != 0.0f) {
        offset[1] = source->marginY / height;
    }
}
