#include "camp/RenderCtx.h"

extern "C" int gpuWriteVertexUniformVec4(void *target, const f32 *scale);

/* Stores and uploads the RGBA modulation when it differs or an upload is forced, then clears the
 * force flag (the body of materialUploadChangedParameterVector). */
static __inline void colorScaleUpdate(RenderCtxA *context, const f32 *scale)
{
    if (context->color.colorScaleDirty != 0 ||
        context->color.colorScale[0] != scale[0] ||
        context->color.colorScale[1] != scale[1] ||
        context->color.colorScale[2] != scale[2] ||
        context->color.colorScale[3] != scale[3]) {
        context->color.colorScale[0] = scale[0];
        context->color.colorScale[1] = scale[1];
        context->color.colorScale[2] = scale[2];
        context->color.colorScale[3] = scale[3];
        gpuWriteVertexUniformVec4(context->colorTarget.colorScaleTarget, context->color.colorScale);
    }
    context->color.colorScaleDirty = 0;
}

/* Restores neutral RGBA modulation, updating the target only when necessary. */
extern "C" void renderCtxResetColorScale(RenderCtxA *context)
{
    f32 neutral[4];
    neutral[0] = 1.0f;
    neutral[1] = 1.0f;
    neutral[2] = 1.0f;
    neutral[3] = 1.0f;
    colorScaleUpdate(context, neutral);
}
