/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMainState ahead of g_titleScene (the code is the same). */
#include "common.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

/* Draws the battle's full-screen colour overlay on the top screen, preserving the current render state. */
s32 btlDrawTopColorOverlay(u32 job)
{
    u32 color = g_btlMainState.state->slotColorFade.baseColor[0];
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(5, 1));
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, color, color, color, 0.0f, color);
    forwardRecoveredCallback();
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}
