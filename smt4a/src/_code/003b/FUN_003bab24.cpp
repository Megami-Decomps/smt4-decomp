/* NON_MATCHING: render-stack push schedules its second address add earlier; shared constants (1.0f, 1, 11) are kept in different registers and the overlay null test uses cmp instead of adds. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match5_CommonBackground.h"

/* Sprite description returned by FUN_001834a4. */
struct SpriteInfo {
    u8 unk00[8];
    s16 x;
    s16 y;
    s16 *size;
};

/* Draw arguments of the pivoted sprite call. */
struct OverlayPivot {
    f32 depth;
    s16 horizontalMode;
    s16 verticalMode;
};

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
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 kind, bool enabled);
void efctSetSpeed(f32 speed);
void FUN_00164b5c(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
void FUN_001835b4(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
const SpriteInfo *FUN_001834a4(u32 table, u32 frame);
void FUN_0032cdc8(u32 screen, u32 table, u32 image, s32 x, s32 y, u32 flags, const OverlayPivot *pivot);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

static void drawOverlay(CommonBackgroundOverlay *overlay)
{
    s32 y = overlay->y;
    s32 x = overlay->x;
    efctSetSpeed(overlay->fade);
    FUN_00164b5c(2, 9, 3, x, y, 11);
    const SpriteInfo *info = FUN_001834a4(9, 0x35);
    OverlayPivot pivot = {64.0f, 1, 1};
    FUN_0032cdc8(2, 9, 0x34, info->x + x + info->size[0] / 2, y + info->size[1] / 2 + info->y, 11, &pivot);
    efctSetSpeed(1.0f);
}

/* Draw the common background's owned overlay while it is fading. */
u8 FUN_003bab24(void)
{
    CommonBackgroundOverlay *overlay = reinterpret_cast<CommonBackgroundOverlay *>(g_commonBg.owned);
    if (overlay != 0 && overlay->fadeMode != 0) {
        FUN_00157558(g_renderCtx);
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
        if (overlay->style == 0) {
            drawOverlay(overlay);
        } else if (overlay->style == 1) {
            FUN_001835b4(2, 9, 0, 0, 0, 1);
            drawOverlay(overlay);
            FUN_001835b4(2, 9, 1, 0, 0, 11);
        }
        renderStackPop(&g_renderCtx->stackA);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}
