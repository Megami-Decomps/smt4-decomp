/* NON_MATCHING: 72 lines. The pivot is the 12-byte TextureDrawPivot that FUN_0032cdc8 copies (retail's frame holds
 * it at sp+12, as the build now does; with anchor modes 1 its x and y stay unset, in retail too). Retail schedules
 * the pivot's stores between the x and y arguments, tests the overlay with adds and lays out the style test as
 * bne/b; the drawOverlay copies' registers differ. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match5_CommonBackground.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gfx/TextureDrawPivot.h"


/* The common background overlay object (accessed prefix). */
struct CommonBackgroundOverlay {
    u8 unk00[5];
    u8 fadeMode;    // 0x05
    u8 unk06[6];
    s32 x;          // 0x0C
    s32 y;          // 0x10
    f32 fade;       // 0x14
    u8 unk18[5];
    u8 style;       // 0x1D
};

extern "C" {
void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

static void drawOverlay(CommonBackgroundOverlay *overlay)
{
    s32 y = overlay->y;
    s32 x = overlay->x;
    efctSetSpeed(overlay->fade);
    texDrawCompositeSprite(2, 9, 3, x, y, 11);
    const TextureTableEntryIV *info = asdTMTexTableEntryAt(9, 0x35);
    TextureDrawPivot pivot; /* anchor modes 1: its x and y stay unset, as in retail */
    pivot.depth = 64.0f;
    pivot.horizontalMode = 1;
    pivot.verticalMode = 1;
    FUN_0032cdc8(2, 9, 0x34, info->x + x + info->placement->width / 2, y + info->placement->height / 2 + info->y, 11, &pivot);
    efctSetSpeed(1.0f);
}

/* Draw the common background's owned overlay while it is fading. */
u8 FUN_003bab24(void)
{
    CommonBackgroundOverlay *overlay = reinterpret_cast<CommonBackgroundOverlay *>(g_commonBg.owned);
    if (overlay != 0 && overlay->fadeMode != 0) {
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
        if (overlay->style == 0) {
            drawOverlay(overlay);
        } else if (overlay->style == 1) {
            texDrawTableEntryAtStoredOrigin(2, 9, 0, 0, 0, 1);
            drawOverlay(overlay);
            texDrawTableEntryAtStoredOrigin(2, 9, 1, 0, 0, 11);
        }
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}
