/* NON_MATCHING: frame texture quad draw; retail reaches the flag/blend fields through a second base register (tex + 0xF00), keeps the filter flag in one compare and divides in a different register order */
#include "camp/RenderCtx.h"
#include "shard/packNibblesAndByte.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct FrameTexQuad {
    /* 0x00 */ f32 x[4];
    /* 0x10 */ f32 y[4];
};

struct FrameTex {
    /* 0x0000 */ u8 unk0000[0xE90];
    /* 0x0E90 */ s32 downscale;        /* capture was taken at 1/2^n size */
    /* 0x0E94 */ u8 fullWidth;
    /* 0x0E95 */ u8 unk0E95[3];
    /* 0x0E98 */ FrameTexQuad quad;
    /* 0x0EB8 */ u8 unk0EB8[8];
    /* 0x0EC0 */ u32 color;
    /* 0x0EC4 */ f32 depth;
    /* 0x0EC8 */ s32 blendMode;        /* 0 normal, 1 additive, 2 subtractive */
    /* 0x0ECC */ u8 filtered;
    /* 0x0ECD */ u8 unk0ECD[0x10F];
    /* 0x0FDC */ AsdTexture *surface;
};

#define FRAME_TEX_WIDTH_HALF 240.0f
#define FRAME_TEX_WIDTH_FULL 480.0f
#define FRAME_TEX_HEIGHT 400.0f

extern "C" {
extern FrameTex *g_frameTex;
extern RenderCtx *g_titleScene;

s32 stateValuesGetBySelector(s32 selector);
s32 FUN_002c5d80(u32 a, u32 b);
f32 FUN_002b99b8(f32 base, f32 exponent);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3,
                  f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
                  f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00117a70(s32 wide)
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
        f32 scale = FUN_002b99b8(2.0f, (f32)level);
        extentV = extentV / scale;
        extentU = extentU / scale;
    }

    AsdTexture *surface = tex->surface;
    f32 width = (f32)surface->dimensions.width;
    f32 height = (f32)surface->dimensions.height;
    if (tex->filtered != 0) {
        surface->filterX = 1;
        surface->filterY = 1;
    } else {
        surface->filterX = 0;
        surface->filterY = 0;
    }
    f32 maxU = extentU / width;
    f32 maxV = extentV / height;

    RenderCtx *context = g_titleScene;
    s32 state = FUN_002c5d80(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_titleScene;
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
    renderCtxSelectTexture(g_titleScene, surface);
    u32 color = tex->color;
    f32 z = tex->depth;
    FUN_002ba1e0(color, color, color, color,
                 tex->quad.x[0], tex->quad.y[0], z, tex->quad.x[1], tex->quad.y[1], z,
                 tex->quad.x[2], tex->quad.y[2], z, tex->quad.x[3], tex->quad.y[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    context = g_titleScene;
    if (tex->blendMode != 0) {
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
    }
    renderStackPop(&g_titleScene->stackA);
}

} /* extern "C" */
