/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMain ahead of g_renderCtx (the code is the same). */
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "Model/MoriModelShadowMap.h"

extern "C" {
extern void *g_btlMain;
s32 renderCtxPackPassFlags(u32 kind, u32 flags);
void FUN_002371b0(void);

// Draw the battle background tint with a temporary render state.
u32 FUN_002df4b0(void)
{
    // This tail lies beyond the currently recovered BtlMainStateA layout.
    struct BattleBackgroundView {
        u8 unk0000[0x4D1C];
        u32 color;
    };
    u32 color = static_cast<BattleBackgroundView *>(g_btlMain)->color;
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxSelectTexture(g_renderCtx, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, color, color, color, 0.0f, color);
    FUN_002371b0();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}
}
