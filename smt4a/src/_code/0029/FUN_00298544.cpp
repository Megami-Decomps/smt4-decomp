/* NON_MATCHING: render-stack address scheduling and color/VFP argument scheduling differ. */
#include "camp/RenderCtx.h"

namespace {
/* Local view: the shared battle layout does not extend to the overlay color. */
struct BattleOverlayView {
    u8 unk0000[0x4D18];
    u32 overlayColor;
};
}

extern "C" {
extern BattleOverlayView *g_btlMain;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32 mode, u32 flags);
void FUN_00157558(RenderCtxA *context);
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
void FUN_0014e314(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_002371b0(void);

/* Draw the battle's full-screen color overlay and restore the render state. */
u32 FUN_00298544(void)
{
    u32 color = g_btlMain->overlayColor;
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(5, 1);
    renderStackPush(&context->stackA, state);
    FUN_00157558(g_renderCtx);
    FUN_0016c4b8(g_renderCtx, 0);
    FUN_0014e314(color, color, color, color, 0.0f, 0.0f, 400.0f, 240.0f, 0.0f);
    FUN_002371b0();
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
