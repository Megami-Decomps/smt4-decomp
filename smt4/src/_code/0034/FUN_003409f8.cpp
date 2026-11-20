/* NON_MATCHING: retail loads the image and custom-size bindings with one ldm, reads the custom size with two vldr (converted before the image size), keeps everything in caller-saved registers (no push) and selects the larger extent with vmovle where armcc gives vmovls. */
/* Converts padded square bounds to image-relative scale and offset. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include <math.h>

extern "C" void FUN_003409f8(const EffectBoundsSource *source, f32 *scale, f32 *offset)
{
    if (source->useCustomSize) {
        scale[0] = 1.0f;
        scale[1] = 1.0f;
        offset[0] = 0.0f;
        offset[1] = 0.0f;
        return;
    }
    EffectBoundsImage *image = source->binding->image;
    EffectBoundsCustomSize *size = source->custom->size;
    f32 imageWidth = (f32)size->width;
    f32 imageHeight = (f32)size->height;
    f32 width = (f32)image->width;
    f32 height = (f32)image->height;
    width += fabsf(source->marginX) * 2.0f;
    height += fabsf(source->marginY) * 2.0f;
    f32 extent = width;
    if (width <= height)
        extent = height;
    scale[0] = extent / imageWidth;
    scale[1] = extent / imageHeight;
    offset[0] = 0.0f;
    offset[1] = 0.0f;
    if (source->marginX != 0.0f) {
        offset[0] = source->marginX / imageWidth;
    }
    if (source->marginY != 0.0f) {
        offset[1] = source->marginY / imageHeight;
    }
}
