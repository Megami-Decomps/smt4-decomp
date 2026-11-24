/* NON_MATCHING: 99 lines: frame texture quad draw; retail reaches the filter flag through a second base register
 * (tex + 0xE00), loads the surface's width and height with one vldmia and divides in a different register order. */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "frame_tex/FrameTex.h"
#include "camp/RenderCtxTitle.h"

#define FRAME_TEX_WIDTH_HALF 240.0f
#define FRAME_TEX_WIDTH_FULL 480.0f
#define FRAME_TEX_HEIGHT 400.0f

extern "C" {

s32 stateValuesGetBySelector(s32 selector);
f32 FUN_002b99b8(f32 base, f32 exponent);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3,
                  f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00117a70(s32 wide)
{
    FrameTexWork *tex = g_frameTex;
    f32 extentU = FRAME_TEX_WIDTH_HALF;
    f32 extentV = FRAME_TEX_HEIGHT;
    if (tex->hdr.captureResult == 0 && wide != 0)
        extentU = FRAME_TEX_WIDTH_FULL;

    s32 selector = stateValuesGetBySelector(0);
    s32 level = tex->hdr.levels;
    if (selector == 0 && level > 1) {
        level = level - 1;
        if (level < 1)
            level = 1;
    }
    if (level != 0) {
        f32 scale = FUN_002b99b8(2.0f, (f32)level);
        extentV = extentV / scale;
        extentU = extentU / scale;
    }

    AsdTexture *surface = tex->sceneSurface;
    f32 width = (f32)surface->dimensions.width;
    f32 height = (f32)surface->dimensions.height;
    if (tex->hdr.filtered != 0) {
        surface->filterX = 1;
        surface->filterY = 1;
    } else {
        surface->filterX = 0;
        surface->filterY = 0;
    }
    f32 maxU = extentU / width;
    f32 maxV = extentV / height;

    RenderCtx *context = g_titleScene;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
    switch (tex->hdr.blendMode) {
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
    renderCtxSelectTexture(g_titleScene, surface);
    FUN_002ba1e0(tex->hdr.color, tex->hdr.color, tex->hdr.color, tex->hdr.color,
                 tex->hdr.x[0], tex->hdr.y[0], tex->hdr.depth, tex->hdr.x[1], tex->hdr.y[1], tex->hdr.depth,
                 tex->hdr.x[2], tex->hdr.y[2], tex->hdr.depth, tex->hdr.x[3], tex->hdr.y[3], tex->hdr.depth,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    if (tex->hdr.blendMode != 0) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
}

} /* extern "C" */
