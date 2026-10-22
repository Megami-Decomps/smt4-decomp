#include "camp/RenderCtx.h"

extern "C" {
s32 FUN_001696f4(void);
u32 asdGxPresetsGetHeightByKind(u32 index);
f32 nn_ulcd_CTR_StereoCamera_GetParallax(void *camera, f32 value);

// Transform and clamp a stereo depth before applying the active eye's parallax scale.
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 value)
{
    f32 result = 0.0f;
    s32 mode = context->stereoMode;
    if (mode == 2 || FUN_001696f4() != 1) {
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
    result = (f32)asdGxPresetsGetHeightByKind(0) * parallax;
    return result;
}
}
