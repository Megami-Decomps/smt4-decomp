/* NON_MATCHING: 6 lines, pool order only: retail pools 240.0 before the work surface's 0x1490 offset. Copies a
 * captured frame surface into the half-size work surface and draws it scaled; the extents are divided by the scale
 * in place (vertical first) and the quad's colour and depth are read at the call, as in smt4's FUN_00117da4. */
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
    extentY /= scale;
    extentX /= scale;
    f32 maxU = extentX / (f32)work->dimensions.width;
    f32 maxV = extentY / (f32)work->dimensions.height;
    if (tex->zan.filtered != 0) {
        work->filterX = 1;
        work->filterY = 1;
    } else {
        work->filterX = 0;
        work->filterY = 0;
    }
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
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
    FUN_0019e3d0(tex->zan.color, tex->zan.color, tex->zan.color, tex->zan.color,
                 tex->zan.x[0], tex->zan.y[0], tex->zan.depth, tex->zan.x[1], tex->zan.y[1], tex->zan.depth,
                 tex->zan.x[2], tex->zan.y[2], tex->zan.depth, tex->zan.x[3], tex->zan.y[3], tex->zan.depth,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    if (tex->zan.blendMode != 0) {
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

} /* extern "C" */
