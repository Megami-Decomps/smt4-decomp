/* NON_MATCHING: viewport constants, target selection and UV-ratio VFP save grouping differ from retail. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "frame_tex/FrameTexA.h"

extern "C" {

void FUN_0019e3d0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

// Draw the XFADE capture (the right one when drawing the right screen and it exists) as a screen-sized quad.
void FUN_0014a960(s32 mode)
{
    FrameTexWorkA *work = g_frameTex;
    f32 logicalWidth = work->fadeCaptureResult ? 240.0f : 480.0f;
    u32 color = work->fadeColor;
    AsdTexture *target = mode == 0 && work->fadeCapturedRight ? work->surfaceRight : work->surfaceLeft;
    target->filterX = 1;
    target->filterY = 1;
    f32 width = (f32)target->dimensions.width, height = (f32)target->dimensions.height;
    f32 u = logicalWidth / width, v = 400.0f / height;
    renderCtxSelectTexture(g_renderCtx, target);
    FUN_0019e3d0(color, color, color, color,
        0.0f, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f,
        0.0f, 240.0f, 0.0f, 400.0f, 240.0f, 0.0f,
        u, 0.0f, u, v, 0.0f, 0.0f, 0.0f, v);
}
}
