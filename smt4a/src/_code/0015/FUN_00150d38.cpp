/* NON_MATCHING: copies a captured frame surface into the half-size work surface and draws it scaled; with the work surface and flags read through the local frame-texture pointer, the filter flags as an if/else and the blend-state sets through renderCtxSetB the code is retail's but for scheduling: retail pools 240.0 before the 0x1490 offset, divides the vertical extent first and loads height before width, and moves the colour argument into r1-r3 just before the call. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
#include "frame_tex/FrameTexA.h"

#define FRAME_COPY_SIZE 0x200
#define FRAME_COPY_WIDTH 240.0f
#define FRAME_COPY_WIDE_WIDTH 480.0f
#define FRAME_COPY_HEIGHT 400.0f

extern "C" {

void surfaceCopy(AsdTexture *source, AsdTexture *destination);
f32 FUN_001a9698(f32 base, f32 exponent);
s32 renderCtxPackPassFlags(u32 a, u32 b);
void FUN_0019e3d0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00150d38(s32 usePrimary)
{
    FrameTexWorkA *tex = g_frameTex;
    if (usePrimary != 0) {
        tex->zanSurfaceLeft->dimensions.width = FRAME_COPY_SIZE;
        tex->zanSurfaceLeft->dimensions.height = FRAME_COPY_SIZE;
        tex->sceneSurface->dimensions.width = tex->zanSurfaceLeft->dimensions.width;
        tex->sceneSurface->dimensions.height = tex->zanSurfaceLeft->dimensions.height;
        surfaceCopy(tex->zanSurfaceLeft, tex->sceneSurface);
        tex->sceneSurface->dimensions.width >>= 1;
        tex->sceneSurface->dimensions.height >>= 1;
    } else {
        tex->zanSurfaceRight->dimensions.width = FRAME_COPY_SIZE;
        tex->zanSurfaceRight->dimensions.height = FRAME_COPY_SIZE;
        tex->sceneSurface->dimensions.width = tex->zanSurfaceRight->dimensions.width;
        tex->sceneSurface->dimensions.height = tex->zanSurfaceRight->dimensions.height;
        surfaceCopy(tex->zanSurfaceRight, tex->sceneSurface);
        tex->sceneSurface->dimensions.width >>= 1;
        tex->sceneSurface->dimensions.height >>= 1;
    }

    AsdTexture *work = tex->sceneSurface;
    f32 extentX = FRAME_COPY_WIDTH;
    f32 extentY = FRAME_COPY_HEIGHT;
    if (tex->zan.captureResult == 0 && usePrimary != 0) {
        extentX = FRAME_COPY_WIDE_WIDTH;
    }
    f32 scale = FUN_001a9698(2.0f, 1.0f);
    f32 width = (f32)work->dimensions.width;
    f32 height = (f32)work->dimensions.height;
    if (tex->zan.filtered != 0) {
        work->filterX = 1;
        work->filterY = 1;
    } else {
        work->filterX = 0;
        work->filterY = 0;
    }
    f32 maxU = (extentX / scale) / width;
    f32 maxV = (extentY / scale) / height;
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
    switch (tex->zan.blendMode) {
    case 0:
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        break;
    case 1:
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        break;
    case 2:
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 2));
        break;
    }
    renderCtxSelectTexture(g_renderCtx, work);
    u32 color = tex->zan.color;
    f32 z = tex->zan.depth;
    FUN_0019e3d0(color, color, color, color,
                 tex->zan.x[0], tex->zan.y[0], z, tex->zan.x[1], tex->zan.y[1], z,
                 tex->zan.x[2], tex->zan.y[2], z, tex->zan.x[3], tex->zan.y[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    if (tex->zan.blendMode != 0) {
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

} /* extern "C" */
