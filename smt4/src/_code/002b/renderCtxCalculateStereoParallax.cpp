#include "camp/RenderCtx.h"
#include "shard/renderCtxCalculateStereoParallax.h"

extern "C" {
s32 FUN_002c5210(void);
u32 FUN_002c15ac(u32 index);
f32 nn_ulcd_CTR_StereoCamera_GetParallax(void *camera, f32 value);

// Transform and clamp a stereo depth before applying the active eye's parallax scale.
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 value)
{
    f32 result = 0.0f;
    s32 mode = context->stereoMode;
    if (mode == 2 || FUN_002c5210() != 1) {
        return result;
    }
    if (context->stereo.transform != NULL) {
        value = context->stereo.transform(value, context->stereo.parameter);
    }
    if (context->stereo.minimum > value) {
        value = context->stereo.minimum;
    } else if (context->stereo.maximum < value) {
        value = context->stereo.maximum;
    }
    f32 parallax = nn_ulcd_CTR_StereoCamera_GetParallax(context->stereo.camera, value);
    if (mode == 0) {
        parallax = -parallax;
    }
    result = (f32)FUN_002c15ac(0) * parallax;
    return result;
}
}
