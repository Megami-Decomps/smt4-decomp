/* NON_MATCHING: retail retains intermediate bound-vector stores before the scaling operation. */
/* Computes equal XY bounds from the larger image dimension, including its margins. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include <math.h>

extern "C" void FUN_0023aa3c(const EffectBoundsSource *source, f32 *bounds, f32 scale)
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
    f32 extent = width > height ? width : height;
    bounds[0] = extent * scale;
    bounds[1] = extent * scale;
    bounds[2] = (f32)image->width * scale * 0.5f;
}
