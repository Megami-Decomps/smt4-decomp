/* NON_MATCHING: unit-float tests now go through plain-static comparison helpers (VFP vcmp against a register copy like retail); retail reads the dirty flag through a literal register offset and orders the branches differently. */
#include "camp/RenderCtx.h"

extern "C" int FUN_0019f828(void *target, const f32 *scale);

static bool channelEquals(f32 value, f32 expected)
{
    return value == expected;
}

static bool colorScaleIsNeutral(const f32 *scale)
{
    if (!channelEquals(scale[0], 1.0f)) {
        return false;
    }
    if (!channelEquals(scale[1], 1.0f)) {
        return false;
    }
    if (!channelEquals(scale[2], 1.0f)) {
        return false;
    }
    if (!channelEquals(scale[3], 1.0f)) {
        return false;
    }
    return true;
}

/* Restore neutral RGBA modulation, updating the target only when necessary. */
extern "C" void renderCtxResetColorScale(RenderCtxA *context)
{
    if (context->color.colorScaleDirty || !colorScaleIsNeutral(context->color.colorScale)) {
        context->color.colorScale[0] = 1.0f;
        context->color.colorScale[1] = 1.0f;
        context->color.colorScale[2] = 1.0f;
        context->color.colorScale[3] = 1.0f;
        FUN_0019f828(context->colorTarget.colorScaleTarget, context->color.colorScale);
    }
    context->color.colorScaleDirty = 0;
}
