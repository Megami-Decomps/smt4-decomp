#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

struct SmokeFadeDrawState {
    u8 unk00[0x1c];
    f32 firstOpacity;
    f32 secondOpacity;
    u8 enabled;
};
struct SmokeFadeImage {
    u32 group;
    s32 index;
    u8 imageLoaded;
    u8 tableLoaded;
    u8 unk0a[2];
};

extern "C" {
extern SmokeFadeDrawState *g_smokeFadeState;
extern SmokeFadeImage g_smokeFadeImages[2];
extern RenderCtxA *g_renderCtx;
void gxResetColorQuadToWhite();
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);
s32 renderCtxPackPassFlags(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void efctSetSpeed(f32);

u8 smokeFadeDrawCallback()
{
    SmokeFadeDrawState *state = g_smokeFadeState;
    if (!state->enabled)
        return 0;
    gxResetColorQuadToWhite();
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 mode = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, mode);
    s32 firstImage = g_smokeFadeImages[0].index * 1000;
    efctSetSpeed(state->firstOpacity);
    texDrawTableEntryAtStoredOrigin(2, g_smokeFadeImages[0].group, firstImage, 0, 0, 0xfa);

    context = g_renderCtx;
    s32 blend = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, blend);
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 secondImage = g_smokeFadeImages[1].index * 1000;
    efctSetSpeed(state->secondOpacity);
    texDrawTableEntryAtStoredOrigin(2, g_smokeFadeImages[1].group, secondImage, 0, 0, 0xfb);
    renderStackPop(&g_renderCtx->stackB);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
