#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteState.h"

namespace {
struct KeyboardPanelState {
    u8 unk00[0x20];
    s8 page;
    u8 unk21[7];
    u8 alternate;
    u8 unk29[0x7b];
    s32 sideOffset;
    u8 unkA8[4];
    s32 backgroundOffset;
    u8 unkB0[0x2fc];
    UiSpriteState animation;
};
typedef char KeyboardPanelOffsets[offsetof(KeyboardPanelState, sideOffset) == 0xa4 && offsetof(KeyboardPanelState, backgroundOffset) == 0xac && offsetof(KeyboardPanelState, animation) == 0x3ac ? 1 : -1];
}
extern "C" {
extern RenderCtxA *g_renderCtx;
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void gxResetColorQuadToWhite();
s32 renderCtxPackPassFlags(u32 first, u32 second);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
void texDrawCompositeSprite(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);
void FUN_004845ac(KeyboardPanelState *panel, u8 page, f32 progress);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the custom keyboard panel and character page under a temporary render-state override.
void FUN_00483b78(KeyboardPanelState *panel)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    renderCtxSelectTexture(g_renderCtx, 0);
    f32 progress = vec2GetSpeed(&panel->animation);
    efctSetSpeed(progress);
    texDrawCompositeSprite(2, 0x23, 0, panel->backgroundOffset, 0, 0xb);
    texDrawTableEntryAtStoredOrigin(2, 0x23, 0x3d, panel->sideOffset, 0, 0xb);
    texDrawTableEntryAtStoredOrigin(2, 0x23, 0x3e, panel->sideOffset, 0, 0xb);
    s8 page = panel->page;
    if (panel->alternate)
        page += 4;
    FUN_004845ac(panel, static_cast<u8>(page), progress);
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}
