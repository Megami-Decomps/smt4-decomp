/* NON_MATCHING: render-stack addressing and the 16-byte image-choice copy lower differently, with a different saved-register allocation. */
#include "font/SearchWin/RunWin.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {
extern RenderCtx *g_titleScene;
extern const MessageImageChoices g_messageSelectedImagePairs;
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
s32 FUN_002c5d80(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 value);
void FUN_002bf380(s32 layer, s32 group, s32 image, s32 depth, u32 flags, s32 mode);
void FUN_002bf288(s32 layer, s32 group, s32 image, s32 depth, u32 flags, s32 mode);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draw a selected image pair with the supplied alpha and temporary render state. */
void messageDrawSelectedImagePair(const MessageImageSelector *owner, const f32 *alpha)
{
    if (owner == NULL || alpha == NULL || *alpha == 0.0f) {
        return;
    }
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    RenderCtx *context = g_titleScene;
    renderStackPush(&context->stackA, FUN_002c5d80(1, 0));
    efctSetSpeed(*alpha);
    MessageImageChoices images = g_messageSelectedImagePairs;
    s32 depth = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
    FUN_002bf380(2, 0x39, images.pairs[owner->selection].first, depth, 0, 11);
    depth = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.33f);
    FUN_002bf288(2, 0x39, images.pairs[owner->selection].second, depth, 0, 12);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(static_cast<RenderCtx *>(asdDebugHookPass(g_titleScene)));
}
}
