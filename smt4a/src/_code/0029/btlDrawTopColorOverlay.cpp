/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMain ahead of g_renderCtx (the code is the same). */
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "Model/MoriModelShadowMap.h"

namespace {
/* Local view: the shared battle layout does not extend to the overlay color. */
struct BattleOverlayView {
    u8 unk0000[0x4D18];
    u32 overlayColor;
};
}

extern "C" {
extern BattleOverlayView *g_btlMain;
void FUN_002371b0(void);

/* Draw the battle's full-screen color overlay and restore the render state. */
u32 btlDrawTopColorOverlay(void)
{
    u32 color = g_btlMain->overlayColor;
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(5, 1));
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxSelectTexture(g_renderCtx, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, color, color, color, 0.0f, color);
    FUN_002371b0();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}
}
