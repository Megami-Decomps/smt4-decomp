/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMainState ahead of g_titleScene (the code is the same). */
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 renderCtxPackPassFlags(u32 mode, u32 flags);
void forwardRecoveredCallback(void);

/* Draws the battle's full-screen colour overlay on the bottom screen and restores the render state. */
u32 btlDrawBottomColorOverlay(void)
{
    u32 color = g_btlMainState.state->slotColorFade.baseColor[1];
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, color, color, color, 0.0f, color);
    forwardRecoveredCallback();
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}
