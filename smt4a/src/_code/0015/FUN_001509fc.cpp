/* NON_MATCHING: frame texture quad draw; retail reaches the flag/blend fields through a second base register (tex + 0xF00), keeps the filter flag in one compare and divides in a different register order */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
#include "frame_tex/FrameTexA.h"

#define FRAME_TEX_WIDTH_HALF 240.0f
#define FRAME_TEX_WIDTH_FULL 480.0f
#define FRAME_TEX_HEIGHT 400.0f

extern "C" {

s32 stateValuesGetBySelector(u32 selector);
s32 renderCtxPackPassFlags(u32 a, u32 b);
f32 FUN_001a9698(f32 base, f32 exponent);
void FUN_0019e3d0(u32 c0, u32 c1, u32 c2, u32 c3,
                  f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_001509fc(s32 wide)
{
    FrameTexWorkA *tex = g_frameTex;
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
        f32 scale = FUN_001a9698(2.0f, (f32)level);
        extentV = extentV / scale;
        extentU = extentU / scale;
    }

    AsdTexture *surface = tex->sceneSurface;
    if (tex->hdr.filtered != 0) {
        surface->filterX = 1;
        surface->filterY = 1;
    }
    f32 width = (f32)surface->dimensions.width;
    f32 height = (f32)surface->dimensions.height;
    if (tex->hdr.filtered == 0) {
        surface->filterX = 0;
        surface->filterY = 0;
    }
    f32 maxU = extentU / width;
    f32 maxV = extentV / height;

    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_renderCtx;
    switch (tex->hdr.blendMode) {
    case 0:
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
        break;
    case 1:
        state = packNibblesAndByte(6, 1, 0);
        renderStackSet(&context->stackB, state);
        break;
    case 2:
        state = packNibblesAndByte(6, 1, 2);
        renderStackSet(&context->stackB, state);
        break;
    }
    renderCtxSelectTexture(g_renderCtx, surface);
    u32 color = tex->hdr.color;
    f32 z = tex->hdr.depth;
    FUN_0019e3d0(color, color, color, color,
                 tex->hdr.x[0], tex->hdr.y[0], z, tex->hdr.x[1], tex->hdr.y[1], z,
                 tex->hdr.x[2], tex->hdr.y[2], z, tex->hdr.x[3], tex->hdr.y[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    context = g_renderCtx;
    if (tex->hdr.blendMode != 0) {
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
    }
    renderStackPop(&g_renderCtx->stackA);
}

} /* extern "C" */
