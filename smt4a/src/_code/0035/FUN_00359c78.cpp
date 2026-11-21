/* NON_MATCHING: the context reload and first add of the pop's stack address use a different scratch register. */
#include "ui/SpriteIndicator.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"

extern "C" {
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
    renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_B);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 46, 146, blend->offset + x, y, 108);
}
}
