/* NON_MATCHING: the context reload and first add of the pop's stack address use a different scratch register. */
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match8_TitleOverlay.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
void gxResetColorQuadToWhite(void);
void texDrawCompositeSprite(u32 layer, u32 group, u32 image, s32 x, u32 color, s32 order);
void efctSetSpeed(f32 speed);

// Draw the title overlay's base, blended middle and sliding foreground layers.
void FUN_002e15f8(const TitleOverlayParameters *parameters, s32 x, u32 color)
{
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 57, 11, x, color, 116);
    efctSetSpeed(parameters->speed);
    RenderCtx *context = g_titleScene;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    texDrawCompositeSprite(2, 57, 12, x, color, 117);
    renderStackPopChecked(g_titleScene->stacks + RENDER_STACK_B);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 57, 146, parameters->offset + x, color, 118);
}
}
