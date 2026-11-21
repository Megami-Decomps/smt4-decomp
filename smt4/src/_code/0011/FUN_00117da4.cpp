/* NON_MATCHING: 30 lines: retail converts the width before the filter test and the height after it (this build loads
 * the height first), and addresses the quad corners through ip where this build uses r1. */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

#define FRAME_COPY_SIZE 0x200
#define FRAME_COPY_WIDTH 240.0f
#define FRAME_COPY_HEIGHT 400.0f
#define FRAME_COPY_WIDTH_UNFILTERED 480.0f

extern "C" {

void surfaceCopy(AsdTexture *source, AsdTexture *destination);
f32 FUN_002b99b8(f32 base, f32 exponent);
s32 renderCtxPackPassFlags(u32 a, u32 b);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00117da4(s32 usePrimary)
{
    FrameTexWork *tex = g_frameTex;
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
    f32 viewWidth = FRAME_COPY_WIDTH;
    f32 viewHeight = FRAME_COPY_HEIGHT;
    if (tex->zan.captureResult == 0 && usePrimary != 0) {
        viewWidth = FRAME_COPY_WIDTH_UNFILTERED;
    }
    f32 scale = FUN_002b99b8(2.0f, 1.0f);
    viewHeight /= scale;
    viewWidth /= scale;
    f32 width = (f32)work->dimensions.width;
    f32 height = (f32)work->dimensions.height;
    f32 maxU = viewWidth / width;
    f32 maxV = viewHeight / height;
    if (tex->zan.filtered != 0) {
        work->filterX = 1;
        work->filterY = 1;
    } else {
        work->filterX = 0;
        work->filterY = 0;
    }

    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    switch (tex->zan.blendMode) {
    case 0:
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        break;
    case 1:
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        break;
    case 2:
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 2));
        break;
    }
    renderCtxSelectTexture(g_titleScene, work);
    FUN_002ba1e0(tex->zan.color, tex->zan.color, tex->zan.color, tex->zan.color,
                 tex->zan.x[0], tex->zan.y[0], tex->zan.depth, tex->zan.x[1], tex->zan.y[1], tex->zan.depth,
                 tex->zan.x[2], tex->zan.y[2], tex->zan.depth, tex->zan.x[3], tex->zan.y[3], tex->zan.depth,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    if (tex->zan.blendMode != 0) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
}

} /* extern "C" */
