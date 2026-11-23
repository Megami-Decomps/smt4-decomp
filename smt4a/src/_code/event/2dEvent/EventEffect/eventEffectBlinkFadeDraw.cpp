#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

struct BlinkFadeDrawState {
    u8 unk00[0xC];
    s32 position;
    u8 unk10[4];
    f32 alpha;
    u8 visible;
};
struct BlinkFadeImage {
    u32 group;
    s32 index;
    u8 ownsIndex;
    u8 ownsGroup;
    u8 unk0a[2];
};

extern "C" {
extern BlinkFadeDrawState *g_eventEffect;
extern BlinkFadeImage g_eventBannerTextures[2];
void gxResetColorQuadToWhite();
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);
s32 renderCtxPackPassFlags(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void efctSetSpeed(f32);

/* Draw callback of the blink fade: one centred image, then the left/right pair offset by the position. */
u8 eventEffectBlinkFadeDraw()
{
    BlinkFadeDrawState *work = g_eventEffect;
    if (work->visible == 0) {
        return 0;
    }
    gxResetColorQuadToWhite();
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 firstEntry = g_eventBannerTextures[0].index * 1000;
    efctSetSpeed(work->alpha);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[0].group, firstEntry, 0, 0, 0xfa);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    s32 secondEntry = g_eventBannerTextures[1].index * 1000;
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[1].group, secondEntry, 0, -work->position, 0xfb);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[1].group, secondEntry + 1, 0, work->position, 0xfb);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}
}
