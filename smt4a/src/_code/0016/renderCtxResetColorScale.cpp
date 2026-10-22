/* NON_MATCHING: compiler uses integer bit comparisons for unit floats instead of retail VFP comparisons, changing address scheduling. */
#include "camp/RenderCtx.h"

extern "C" int FUN_0019f828(void *target, const f32 *scale);

/* Restore neutral RGBA modulation, updating the target only when necessary. */
extern "C" void renderCtxResetColorScale(RenderCtxA *context)
{
    if (context->color.colorScaleDirty ||
        context->color.colorScale[0] != 1.0f ||
        context->color.colorScale[1] != 1.0f ||
        context->color.colorScale[2] != 1.0f ||
        context->color.colorScale[3] != 1.0f) {
        context->color.colorScale[0] = 1.0f;
        context->color.colorScale[1] = 1.0f;
        context->color.colorScale[2] = 1.0f;
        context->color.colorScale[3] = 1.0f;
        FUN_0019f828(context->colorTarget.colorScaleTarget, context->color.colorScale);
    }
    context->color.colorScaleDirty = 0;
}
