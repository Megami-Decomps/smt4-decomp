/* NON_MATCHING: animation-progress access folds the retail getter address/NOPs; render-stack push scheduling and global/zero registers differ, 95 versus retail 98 instructions. */
#include "camp/RenderCtx.h"
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
void FUN_00157558(RenderCtxA *context);
void FUN_00183bb0();
s32 FUN_001692ac(u32 first, u32 second);
void FUN_0016c4b8(RenderCtxA *context, u32 mode);
void efctSetSpeed(f32 speed);
void FUN_00164b5c(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);
void FUN_001835b4(s32 layer, u32 archive, u32 image, s32 x, s32 y, s32 priority);
void FUN_004845ac(KeyboardPanelState *panel, u8 page, f32 progress);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the custom keyboard panel and character page under a temporary render-state override.
void FUN_00483b78(KeyboardPanelState *panel)
{
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    FUN_0016c4b8(g_renderCtx, 0);
    f32 progress = panel->animation.unk20;
    efctSetSpeed(progress);
    FUN_00164b5c(2, 0x23, 0, panel->backgroundOffset, 0, 0xb);
    FUN_001835b4(2, 0x23, 0x3d, panel->sideOffset, 0, 0xb);
    FUN_001835b4(2, 0x23, 0x3e, panel->sideOffset, 0, 0xb);
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
