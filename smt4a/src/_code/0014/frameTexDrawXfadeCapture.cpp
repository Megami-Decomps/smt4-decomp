/* NON_MATCHING: the quad's corner constants sit in saved registers as in retail (as smt4 FUN_001132fc); target
 * selection and the UV-ratio divisions are scheduled differently. */
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
    f32 logicalWidth = work->fadeCaptureResult ? 240.0f : 480.0f;
    AsdTexture *target;
    if (mode == 0 && work->fadeCapturedRight) {
        target = work->surfaceRight;
    } else {
        target = work->surfaceLeft;
    }
    target->filterX = 1;
    target->filterY = 1;
    f32 u = logicalWidth / (f32)target->dimensions.width;
    f32 v = 400.0f / (f32)target->dimensions.height;
    renderCtxSelectTexture(g_renderCtx, target);
    FUN_0019e3d0(color, color, color, color,
        left, top, depth, right, top, depth,
        left, bottom, depth, right, bottom, depth,
        u, 0.0f, u, v, 0.0f, 0.0f, 0.0f, v);
}
}
