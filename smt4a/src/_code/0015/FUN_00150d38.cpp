/* NON_MATCHING: copies a captured frame surface into the half-size work surface and draws it scaled (blend mode from the frame texture); written from the decompilation, render-stack scheduling not compared with retail */
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct FrameCopyTex {
    /* 0x000 */ u8 unk000[0x1000];
    /* 0x1000 */ f32 quadX[4];
    /* 0x1010 */ f32 quadY[4];
    /* 0x1020 */ u8 unk1020[8];
    /* 0x1028 */ u32 color;
    /* 0x102C */ f32 depth;
    /* 0x1030 */ s32 blendMode;           /* 0 normal, 1 additive, 2 subtractive */
    /* 0x1034 */ u8 filtered;
    /* 0x1035 */ u8 unk1035[3];
    /* 0x1038 */ AsdTexture *primary;
    /* 0x103C */ AsdTexture *secondary;
    /* 0x1040 */ u8 unk1040[0x450];
    /* 0x1490 */ AsdTexture *work;
};

#define FRAME_COPY_SIZE 0x200
#define FRAME_COPY_WIDTH 240.0f
#define FRAME_COPY_HEIGHT 400.0f

extern "C" {
extern FrameCopyTex *g_frameTex;
extern RenderCtxA *g_renderCtx;

void surfaceCopy(AsdTexture *source, AsdTexture *destination);
f32 FUN_001a9698(f32 base, f32 exponent);
s32 FUN_001692ac(u32 a, u32 b);
void FUN_0019e3d0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00150d38(s32 usePrimary)
{
    FrameCopyTex *tex = g_frameTex;
    AsdTexture **source = usePrimary != 0 ? &tex->primary : &tex->secondary;
    (*source)->dimensions.width = FRAME_COPY_SIZE;
    (*source)->dimensions.height = FRAME_COPY_SIZE;
    tex->work->dimensions.width = (*source)->dimensions.width;
    tex->work->dimensions.height = (*source)->dimensions.height;
    surfaceCopy(*source, tex->work);
    tex->work->dimensions.width >>= 1;
    tex->work->dimensions.height >>= 1;

    AsdTexture *work = tex->work;
    f32 scale = FUN_001a9698(2.0f, 1.0f);
    f32 width = (f32)work->dimensions.width;
    if (tex->filtered != 0) {
        work->filterX = 1;
        work->filterY = 1;
    }
    f32 height = (f32)work->dimensions.height;
    if (tex->filtered == 0) {
        work->filterX = 0;
        work->filterY = 0;
    }
    f32 maxU = (FRAME_COPY_WIDTH / scale) / width;
    f32 maxV = (FRAME_COPY_HEIGHT / scale) / height;

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
    renderCtxSelectTexture(g_renderCtx, work);
    u32 color = tex->color;
    f32 z = tex->depth;
    FUN_0019e3d0(color, color, color, color,
                 tex->quadX[0], tex->quadY[0], z, tex->quadX[1], tex->quadY[1], z,
                 tex->quadX[2], tex->quadY[2], z, tex->quadX[3], tex->quadY[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    context = g_renderCtx;
    if (tex->blendMode != 0) {
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
    }
    renderStackPop(&g_renderCtx->stackA);
}

} /* extern "C" */
