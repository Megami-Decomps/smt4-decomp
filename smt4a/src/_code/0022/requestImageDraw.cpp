#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
/* Built --multifile with requestIdToCode (config: retail keeps the 1000 in r1 across its nine calls) and autoinline on
 * (config), the setting of its plain address neighbours (proven FUN_0022791c differs without it): with the recipe's
 * --no_autoinline the final pop loaded g_renderCtx into r4 directly where retail goes through r0 (wave 86). */
#include "font/SearchWin/RunWin.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
void sysMemClear(void *memory, u32 bytes);
u32 requestIdToCode(u32 id);
void texDrawCompositeSprite(s32 layer, s32 group, s32 image, s32 depth, s32 flags, s32 mode);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draw the selected request image and its loaded code overlay. */
void requestImageDraw(const RequestImageSelector *owner, const f32 *alpha)
{
    if (owner == NULL || alpha == NULL || *alpha == 0.0f) {
        return;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushACounted(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(*alpha);
    MessageImagePair images[9];
    sysMemClear(images, sizeof(images));
    images[0].second = requestIdToCode(0) * 1000;
    images[1].second = requestIdToCode(1) * 1000;
    images[2].second = requestIdToCode(2) * 1000;
    images[3].second = requestIdToCode(3) * 1000;
    images[4].second = requestIdToCode(4) * 1000;
    images[5].second = requestIdToCode(5) * 1000;
    images[6].second = requestIdToCode(6) * 1000;
    images[7].second = requestIdToCode(7) * 1000;
    images[8].second = requestIdToCode(8) * 1000;
    s32 depth = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
    texDrawCompositeSprite(2, 0x2E, images[owner->selection].first, depth, 0, 11);
    if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(owner->selection))) {
        depth = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
        texDrawTableEntryAtStoredOrigin(2, 0x2E, images[owner->selection].second, depth, 0, 12);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
