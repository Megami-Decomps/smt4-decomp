/* Computes equal XY bounds from the larger image dimension, including its margins. */
#include "AsdSDK/Source/Gfx/Effect/EffectBounds.h"
#include <math.h>

extern "C" void effectComputeScaledImageBounds(const EffectBoundsSource *source, f32 *bounds, f32 scale)
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
