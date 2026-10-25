#include "gfx/StereoParallax.h"
/* NON_MATCHING: ARMCC retains the initialization loop and reloads 1000 across requestIdToCode; retail unrolls calls and preserves r1. */
#include "font/SearchWin/RunWin.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
void FUN_00183bb0(void);
s32 FUN_001692ac(s32 first, s32 second);
void efctSetSpeed(f32 alpha);
void sysMemClear(void *memory, u32 bytes);
u32 requestIdToCode(u32 id);
void FUN_00164b5c(s32 layer, s32 group, s32 image, s32 depth, s32 flags, s32 mode);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draw the selected request image and its loaded code overlay. */
void requestImageDraw(const RequestImageSelector *owner, const f32 *alpha)
{
    if (owner == NULL || alpha == NULL || *alpha == 0.0f) {
        return;
    }
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    RenderCtxA *context = g_renderCtx;
    renderStackPush(&context->stackA, FUN_001692ac(1, 0));
    efctSetSpeed(*alpha);
    MessageImagePair images[9];
    sysMemClear(images, sizeof(images));
    for (u32 index = 0; index < 9; ++index) {
        images[index].second = requestIdToCode(index) * 1000;
    }
    s32 depth = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
    FUN_00164b5c(2, 0x2E, images[owner->selection].first, depth, 0, 11);
    if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(owner->selection))) {
        depth = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
        FUN_001835b4(2, 0x2E, images[owner->selection].second, depth, 0, 12);
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(static_cast<RenderCtxA *>(asdDebugHookPass(g_renderCtx)));
}
}
