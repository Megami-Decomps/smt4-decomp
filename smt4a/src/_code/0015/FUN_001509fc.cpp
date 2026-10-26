/* NON_MATCHING: frame texture quad draw; retail reaches the flag/blend fields through a second base register (tex + 0xF00), keeps the filter flag in one compare and divides in a different register order */
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct FrameTexQuad {
    /* 0x00 */ f32 x[4];
    /* 0x10 */ f32 y[4];
};

struct FrameTex {
    /* 0x0000 */ u8 unk0000[0xFA8];
    /* 0x0FA8 */ s32 downscale;        /* capture was taken at 1/2^n size */
    /* 0x0FAC */ u8 fullWidth;
    /* 0x0FAD */ u8 unk0FAD[3];
    /* 0x0FB0 */ FrameTexQuad quad;
    /* 0x0FD0 */ u8 unk0FD0[8];
    /* 0x0FD8 */ u32 color;
    /* 0x0FDC */ f32 depth;
    /* 0x0FE0 */ s32 blendMode;        /* 0 normal, 1 additive, 2 subtractive */
    /* 0x0FE4 */ u8 filtered;
    /* 0x0FE5 */ u8 unk0FE5[0x4AB];
    /* 0x1490 */ AsdTexture *surface;
};

#define FRAME_TEX_WIDTH_HALF 240.0f
#define FRAME_TEX_WIDTH_FULL 480.0f
#define FRAME_TEX_HEIGHT 400.0f

extern "C" {
extern FrameTex *g_frameTex;
extern RenderCtxA *g_renderCtx;

s32 stateValuesGetBySelector(u32 selector);
s32 FUN_001692ac(u32 a, u32 b);
f32 FUN_001a9698(f32 base, f32 exponent);
void FUN_0019e3d0(u32 c0, u32 c1, u32 c2, u32 c3,
                  f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_001509fc(s32 wide)
{
    FrameTex *tex = g_frameTex;
    f32 extentU = FRAME_TEX_WIDTH_HALF;
    f32 extentV = FRAME_TEX_HEIGHT;
    if (tex->fullWidth == 0 && wide != 0)
        extentU = FRAME_TEX_WIDTH_FULL;

    s32 selector = stateValuesGetBySelector(0);
    s32 level = tex->downscale;
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

    AsdTexture *surface = tex->surface;
    if (tex->filtered != 0) {
        surface->filterX = 1;
        surface->filterY = 1;
    }
    f32 width = (f32)surface->dimensions.width;
    f32 height = (f32)surface->dimensions.height;
    if (tex->filtered == 0) {
        surface->filterX = 0;
        surface->filterY = 0;
    }
    f32 maxU = extentU / width;
    f32 maxV = extentV / height;

    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_renderCtx;
    switch (tex->blendMode) {
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
    u32 color = tex->color;
    f32 z = tex->depth;
    FUN_0019e3d0(color, color, color, color,
                 tex->quad.x[0], tex->quad.y[0], z, tex->quad.x[1], tex->quad.y[1], z,
                 tex->quad.x[2], tex->quad.y[2], z, tex->quad.x[3], tex->quad.y[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    context = g_renderCtx;
    if (tex->blendMode != 0) {
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
    }
    renderStackPop(&g_renderCtx->stackA);
}

} /* extern "C" */
