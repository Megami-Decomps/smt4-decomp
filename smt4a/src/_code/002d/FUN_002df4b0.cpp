/* NON_MATCHING: repeated color argument moves and literal-pool ordering differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
extern void *g_btlMain;
s32 FUN_001692ac(u32 kind, u32 flags);
void FUN_00157558(RenderCtxA *context);
void FUN_0016c4b8(RenderCtxA *context, u32 mode);
void FUN_0014e314(u32 topLeft, u32 topRight, u32 bottomLeft, u32 bottomRight,
                  f32 left, f32 top, f32 right, f32 bottom, f32 depth);
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
    renderCtxPushA(context, FUN_001692ac(1, 0));
    FUN_00157558(g_renderCtx);
    FUN_0016c4b8(g_renderCtx, 0);
    FUN_0014e314(color, color, color, color, 0.0f, 0.0f, 320.0f, 240.0f, 0.0f);
    FUN_002371b0();
    renderStackPop(&g_renderCtx->stackA);
    return 0;
}
}
