/* NON_MATCHING: image-relative scale calculations use different VFP registers and constant-load scheduling. */
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
    EffectBoundsCustomSize *size = source->custom->size;
    EffectBoundsImage *image = source->binding->image;
    f32 imageWidth = (f32)size->width;
    f32 imageHeight = (f32)size->height;
    f32 width = (f32)image->width + fabsf(source->marginX) * 2.0f;
    f32 height = (f32)image->height + fabsf(source->marginY) * 2.0f;
    f32 extent = width <= height ? height : width;
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
