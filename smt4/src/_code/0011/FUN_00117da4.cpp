/* NON_MATCHING: structure now matches retail (branch-duplicated surface copy, 480-wide view when the single-view flag is clear and the primary surface is used); scheduling of the scale divisions/VFP conversions and of the g_titleScene loads still differs */
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct FrameCopyTex {
    /* 0x000 */ u8 unk000[0xEE4];
    /* 0xEE4 */ u8 singleView;
    /* 0xEE5 */ u8 unkEE5[3];
    /* 0xEE8 */ f32 quadX[4];
    /* 0xEF8 */ f32 quadY[4];
    /* 0xF08 */ u8 unkF08[8];
    /* 0xF10 */ u32 color;
    /* 0xF14 */ f32 depth;
    /* 0xF18 */ s32 blendMode;           /* 0 normal, 1 additive, 2 subtractive */
    /* 0xF1C */ u8 filtered;
    /* 0xF1D */ u8 unkF1D[3];
    /* 0xF20 */ AsdTexture *primary;
    /* 0xF24 */ AsdTexture *secondary;
    /* 0xF28 */ u8 unkF28[0xB4];
    /* 0xFDC */ AsdTexture *work;
};

#define FRAME_COPY_SIZE 0x200
#define FRAME_COPY_WIDTH 240.0f
#define FRAME_COPY_HEIGHT 400.0f
#define FRAME_COPY_WIDTH_UNFILTERED 480.0f

extern "C" {
extern FrameCopyTex *g_frameTex;
extern RenderCtx *g_titleScene;

void surfaceCopy(AsdTexture *source, AsdTexture *destination);
f32 FUN_002b99b8(f32 base, f32 exponent);
s32 FUN_002c5d80(u32 a, u32 b);
void FUN_002ba1e0(u32 c0, u32 c1, u32 c2, u32 c3, f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
                  f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3, f32 u0, f32 v0, f32 u1, f32 v1,
                  f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_00117da4(s32 usePrimary)
{
    FrameCopyTex *tex = g_frameTex;
    if (usePrimary != 0) {
        tex->primary->dimensions.width = FRAME_COPY_SIZE;
        tex->primary->dimensions.height = FRAME_COPY_SIZE;
        tex->work->dimensions.width = tex->primary->dimensions.width;
        tex->work->dimensions.height = tex->primary->dimensions.height;
        surfaceCopy(tex->primary, tex->work);
        tex->work->dimensions.width >>= 1;
        tex->work->dimensions.height >>= 1;
    } else {
        tex->secondary->dimensions.width = FRAME_COPY_SIZE;
        tex->secondary->dimensions.height = FRAME_COPY_SIZE;
        tex->work->dimensions.width = tex->secondary->dimensions.width;
        tex->work->dimensions.height = tex->secondary->dimensions.height;
        surfaceCopy(tex->secondary, tex->work);
        tex->work->dimensions.width >>= 1;
        tex->work->dimensions.height >>= 1;
    }

    AsdTexture *work = tex->work;
    f32 viewWidth = FRAME_COPY_WIDTH;
    f32 viewHeight = FRAME_COPY_HEIGHT;
    if (tex->singleView == 0 && usePrimary != 0) {
        viewWidth = FRAME_COPY_WIDTH_UNFILTERED;
    }
    f32 scale = FUN_002b99b8(2.0f, 1.0f);
    f32 viewV = viewHeight / scale;
    f32 width = (f32)work->dimensions.width;
    if (tex->filtered != 0) {
        work->filterX = 1;
        work->filterY = 1;
    } else {
        work->filterX = 0;
        work->filterY = 0;
    }
    f32 height = (f32)work->dimensions.height;
    f32 maxU = (viewWidth / scale) / width;
    f32 maxV = viewV / height;

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
    renderCtxSelectTexture(g_titleScene, work);
    u32 color = tex->color;
    f32 z = tex->depth;
    FUN_002ba1e0(color, color, color, color,
                 tex->quadX[0], tex->quadY[0], z, tex->quadX[1], tex->quadY[1], z,
                 tex->quadX[2], tex->quadY[2], z, tex->quadX[3], tex->quadY[3], z,
                 maxU, 0.0f, maxU, maxV, 0.0f, 0.0f, 0.0f, maxV);
    context = g_titleScene;
    if (tex->blendMode != 0) {
        state = packNibblesAndByte(6, 7, 0);
        renderStackSet(&context->stackB, state);
    }
    renderStackPop(&g_titleScene->stackA);
}

} /* extern "C" */
