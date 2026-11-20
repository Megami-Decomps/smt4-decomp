#include "camp/RenderCtxA.h"
#include "gfx/RenderColorScale.h"
#include "code/Code0019_Smt4a.h"

/* Uploads the colour scale when changed, or when the cached upload was invalidated. */
extern "C" void FUN_00409c60(RenderCtxA *context, f32 red, f32 green, f32 blue, f32 alpha)
{
    if (context->color.colorScaleDirty != 0 || context->color.colorScale[0] != red ||
        context->color.colorScale[1] != green || context->color.colorScale[2] != blue ||
        context->color.colorScale[3] != alpha) {
        context->color.colorScale[0] = red;
        context->color.colorScale[1] = green;
        context->color.colorScale[2] = blue;
        context->color.colorScale[3] = alpha;
        gpuWriteVertexUniformVec4((UniformContext *)context->colorTarget.colorScaleTarget,
                                  (const u32 *)context->color.colorScale);
    }
    context->color.colorScaleDirty = 0;
}
