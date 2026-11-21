/* NON_MATCHING: only the colour and corner argument moves before FUN_0019e3d0 differ (retail copies the bottom
 * constant to s10 then s7 and sets r2 early), likely the callee's real parameter order. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "frame_tex/FrameTexA.h"

extern "C" {

void FUN_0019e3d0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

/* Draws the XFADE capture (the right one when drawing the right screen and it exists) as a screen-sized quad. */
void frameTexDrawXfadeCapture(s32 mode)
{
    FrameTexWorkA *work = g_frameTex;
    const f32 left = 0.0f;
    const f32 top = 0.0f;
    const f32 right = 400.0f;
    const f32 bottom = 240.0f;
    const f32 depth = 0.0f;
    u32 color = work->fadeColor;
    f32 logicalWidth = 240.0f;
    if (work->fadeCaptureResult == 0)
        logicalWidth = 480.0f;
    AsdTexture *target;
    if (mode == 0 && work->fadeCapturedRight) {
        target = work->surfaceRight;
    } else {
        target = work->surfaceLeft;
    }
    /* Retail reads the size before marking the target filtered. */
    f32 v = 400.0f / (f32)target->dimensions.height;
    f32 u = logicalWidth / (f32)target->dimensions.width;
    target->filterX = 1;
    target->filterY = 1;
    renderCtxSelectTexture(g_renderCtx, target);
    FUN_0019e3d0(color, color, color, color,
        left, top, depth, right, top, depth,
        left, bottom, depth, right, bottom, depth,
        u, 0.0f, u, v, 0.0f, 0.0f, 0.0f, v);
}
}
