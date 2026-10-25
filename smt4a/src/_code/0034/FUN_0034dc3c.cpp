#include "gfx/StereoParallax.h"
/* NON_MATCHING: scissor helper folds state reloads/conditions and uses different base addressing. */
#include "ui/ClippedSprite.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtxScissorA *g_renderCtx;
const SpriteInfo *asdTMTexTableEntryAt(u32, u32);
void FUN_00168e00(s32, s32, s32, s32);
void renderPopStateStacks(void);

// Draw a clipped sprite with stereo parallax, temporarily suspending the outer scissor state.
void FUN_0034dc3c(ClippedSprite *sprite)
{
    const SpriteInfo *info = asdTMTexTableEntryAt(sprite->group, sprite->image);
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    bool suspended = renderCtxSuspendScissor(g_renderCtx);
    FUN_00168e00(info->x + sprite->clipX + parallax, info->y + sprite->clipY,
                 sprite->clipWidth, sprite->clipHeight);
    FUN_001835b4(2, sprite->group, sprite->image, sprite->x + parallax, sprite->y, 21);
    if (suspended)
        renderCtxResumeScissor(g_renderCtx);
    renderPopStateStacks();
}
}
