#include "camp/CommonBg.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match7_QuadVectors.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantC.h"

extern "C" {
extern CommonBgGlobals g_commonBg;
void texDrawCompositeSprite(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags);
void renderCtxResetColorScale(RenderCtxA *context);

s32 commonBgDraw()
{
    // These flags extend beyond the shared one-word owner prefix.
    struct OwnerView { CommonBgOwner prefix; u32 unk04; u32 enabled; s32 mode; };
    const OwnerView *owner = reinterpret_cast<const OwnerView *>(g_commonBg.owner);
    if (owner == NULL)
        return 0;
    if (owner->enabled == 0)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    if (owner->mode == 1) {
        texDrawCompositeSprite(2, 9, 0, 0, 0, 1);
    } else {
        quadSetOrderedVectors(QuadVector(), QuadVector(), QuadVector(), QuadVector(), 0, 1);
        texDrawTableEntryAtStoredOrigin(2, 9, 0, 0, 0, 1);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(reinterpret_cast<SkinObject *>(g_renderCtx));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
