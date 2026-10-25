/* NON_MATCHING: render-state stack address is computed before the packed-state call, and push/pop scratch registers differ. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match8_TitleOverlay.h"

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002bed3c(void);
void FUN_002bf380(u32 layer, u32 group, u32 image, s32 x, u32 color, s32 order);
void efctSetSpeed(f32 speed);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);

// Draw the title overlay's base, blended middle and sliding foreground layers.
void FUN_002e15f8(const TitleOverlayParameters *parameters, s32 x, u32 color)
{
    FUN_002bed3c();
    FUN_002bf380(2, 57, 11, x, color, 116);
    efctSetSpeed(parameters->speed);
    RenderCtx *context = g_titleScene;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    FUN_002bf380(2, 57, 12, x, color, 117);
    renderStackPop(&g_titleScene->stackB);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002bf288(2, 57, 146, parameters->offset + x, color, 118);
}
}
