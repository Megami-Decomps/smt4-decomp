/* NON_MATCHING: canonical context push matches; pop still allocates previous/current values in exchanged registers and omits retail's callback-argument move. */
#include "ui/SpriteIndicator.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void gxResetColorQuadToWhite(void);
void texDrawCompositeSprite(u32 flags, u32 group, s32 sprite, s32 x, s32 y, u32 layer);
void efctSetSpeed(f32 speed);

// Draw two blended background layers, then a horizontally shifted foreground sprite.
void FUN_00359c78(SpriteLayerBlendState *blend, s32 x, s32 y)
{
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 46, 11, x, y, 106);
    efctSetSpeed(blend->speed);
    RenderCtxA *context = g_renderCtx;
    s32 state = packNibblesAndByte(6, 1, 0);
    renderCtxPushB(context, state);
    texDrawCompositeSprite(2, 46, 12, x, y, 107);
    renderStackPop(&g_renderCtx->stackB);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 46, 146, blend->offset + x, y, 108);
}
}
