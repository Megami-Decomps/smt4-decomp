/* NON_MATCHING: render-stack address scheduling and draw-call NOP slots differ. */
#include "camp/RenderCtx.h"

namespace {
/* Local view: the shared battle layout does not extend to the overlay color. */
struct BattleOverlayView {
    u8 unk0000[0x4A10];
    u32 overlayColor;
};
}

extern "C" {
extern BattleOverlayView *g_btlMainState;
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_002c0944(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void forwardRecoveredCallback(void);

/* Draw the battle's full-screen color overlay and restore the render state. */
u32 FUN_0020f3a8(void)
{
    u32 color = g_btlMainState->overlayColor;
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxSelectTexture(g_titleScene, 0);
    FUN_002c0944(color, color, color, color, 0.0f, 0.0f, 320.0f, 240.0f, 0.0f);
    forwardRecoveredCallback();
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
