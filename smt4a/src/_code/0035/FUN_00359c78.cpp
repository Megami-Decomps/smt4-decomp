/* NON_MATCHING: stack push uses ip and stack-pop comparison/callback registers differ. */
#include "ui/SpriteIndicator.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00183bb0(void);
void FUN_00164b5c(u32 flags, u32 group, s32 sprite, s32 x, s32 y, u32 layer);
void FUN_001835b4(u32 flags, u32 group, s32 sprite, s32 x, s32 y, u32 layer);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 byte);

// Draw two blended background layers, then a horizontally shifted foreground sprite.
void FUN_00359c78(SpriteLayerBlendState *blend, s32 x, s32 y)
{
    FUN_00183bb0();
    FUN_00164b5c(2, 46, 11, x, y, 106);
    efctSetSpeed(blend->speed);
    RenderCtxA *context = g_renderCtx;
    s32 state = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, state);
    FUN_00164b5c(2, 46, 12, x, y, 107);
    renderStackPop(&g_renderCtx->stackB);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    FUN_001835b4(2, 46, 146, blend->offset + x, y, 108);
}
}
