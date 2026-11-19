/* NON_MATCHING: 6 lines, only the literal pool order: retail pools g_btlMainState ahead of g_titleScene (the code is the same). */
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxTitle.h"

namespace {
/* Local view: the shared battle layout does not extend to the overlay color. */
struct BattleOverlayView {
    u8 unk0000[0x4A10];
    u32 overlayColor;
};
}

extern "C" {
extern BattleOverlayView *g_btlMainState;
s32 renderCtxPackPassFlags(u32 mode, u32 flags);
void forwardRecoveredCallback(void);

/* Draw the battle's full-screen color overlay and restore the render state. */
u32 FUN_0020f3a8(void)
{
    u32 color = g_btlMainState->overlayColor;
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 320.0f, 240.0f, color, color, color, 0.0f, color);
    forwardRecoveredCallback();
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
