#include "shard/S2GrClear.h"

extern "C" {

extern void grSurfaceClear(GrSurface *surface, u32 flags, const f32 *color, u32 stencil, f32 depth);

/* Clears the render target's buffers: colour to `color` and/or depth to `depth`, per `flags`. */
void grRenderTargetClear(GrRenderTarget *target, u32 flags, const f32 *color, f32 depth)
{
    grSurfaceClear(target->buffers->vtbl->getSurface(target->buffers), flags, color, 0, depth);
}

} /* extern "C" */
