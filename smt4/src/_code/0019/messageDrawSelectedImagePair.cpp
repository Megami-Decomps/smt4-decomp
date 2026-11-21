#include "font/SearchWin/RunWin.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* Pushes a state on the context's first stack (the depth read once, as in Apocalypse's requestImageDraw). */
static __inline void pushCountedA(RenderCtx *context, int state)
{
    renderStackPushCounted(context->stacks + RENDER_STACK_A, state);
}

extern "C" {
extern const MessageImageChoices g_messageSelectedImagePairs;
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 value);
void texDrawCompositeSprite(s32 layer, s32 group, s32 image, s32 depth, u32 flags, s32 mode);
void renderCtxResetColorScale(RenderCtx *context);

/* Draw a selected image pair with the supplied alpha and temporary render state. */
void messageDrawSelectedImagePair(const MessageImageSelector *owner, const f32 *alpha)
{
    if (owner == NULL || alpha == NULL || *alpha == 0.0f) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    RenderCtx *context = g_titleScene;
    pushCountedA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(*alpha);
    MessageImageChoices images = g_messageSelectedImagePairs;
    s32 depth = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
    texDrawCompositeSprite(2, 0x39, images.pairs[owner->selection].first, depth, 0, 11);
    depth = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.33f);
    texDrawTableEntryAtStoredOrigin(2, 0x39, images.pairs[owner->selection].second, depth, 0, 12);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
}
