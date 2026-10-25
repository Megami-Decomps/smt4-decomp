#include "gfx/StereoParallax.h"
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
extern BlinkFadeImage DAT_0057f3d0[2];
extern RenderCtxA *g_renderCtx;
void FUN_00183bb0();
void FUN_00157558(RenderCtxA *);
s32 FUN_001692ac(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void efctSetSpeed(f32);

/* Draw callback of the blink fade: one centred image, then the left/right pair offset by the position. */
u8 FUN_0031c55c()
{
    BlinkFadeDrawState *work = g_eventEffect;
    if (work->visible == 0) {
        return 0;
    }
    FUN_00183bb0();
    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 firstEntry = DAT_0057f3d0[0].index * 1000;
    efctSetSpeed(work->alpha);
    FUN_001835b4(2, DAT_0057f3d0[0].group, firstEntry, 0, 0, 0xfa);
    renderStackPop(&g_renderCtx->stackB);
    s32 secondEntry = DAT_0057f3d0[1].index * 1000;
    efctSetSpeed(1.0f);
    FUN_001835b4(2, DAT_0057f3d0[1].group, secondEntry, 0, -work->position, 0xfb);
    FUN_001835b4(2, DAT_0057f3d0[1].group, secondEntry + 1, 0, work->position, 0xfb);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
