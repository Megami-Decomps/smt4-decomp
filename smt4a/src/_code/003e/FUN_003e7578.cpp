/* NON_MATCHING: same instruction mix and registers; only the scheduling of the cached draw-state push/pop address arithmetic differs (retail computes values[index + 1] after the previous-value load). */
#include "shard/S1ListPanel.h"

namespace {
// The overlay task: its phase and the fade scale of its second pass.
struct OverlayTask {
    s32 phase;              // 0x00
    u8 unk04[0x1C];
    s32 enabled;            // 0x20
    f32 fadeScale;          // 0x24
};
}

extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_001692ac(u32 mode, u32 enabled);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
SpriteInfo *FUN_001834a4(u32 group, u32 id);
void FUN_001835b4(s32 layer, s32 group, u32 id, s32 x, s32 y, s32 order);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);

/* Draw the two parallax-shifted overlay sprites while the overlay task is in phase 9. */
u32 FUN_003e7578(OverlayTask *task)
{
    if (task->phase == 9 && task->enabled != 0) {
        RenderCtxA *context = g_renderCtx;
        u32 mode = FUN_001692ac(1, 0);
        renderCtxPushA(context, mode);
        efctSetSpeed(1.0f);
        FUN_00183bb0();
        FUN_001834a4(0x22, 3000);
        f32 shift = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
        FUN_001835b4(2, 0x22, 3000, (s32)shift, 0, 2);
        renderStackPop(&g_renderCtx->stackA);
        efctSetSpeed(1.0f);
        context = g_renderCtx;
        mode = FUN_001692ac(1, 0);
        renderCtxPushA(context, mode);
        efctSetSpeed(task->fadeScale);
        FUN_00183bb0();
        FUN_001834a4(0x22, 1000);
        shift = (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f);
        FUN_001835b4(2, 0x22, 1000, (s32)shift, 0, 6);
        renderStackPop(&g_renderCtx->stackA);
        efctSetSpeed(1.0f);
        return 0;
    }
    return 0;
}
}
