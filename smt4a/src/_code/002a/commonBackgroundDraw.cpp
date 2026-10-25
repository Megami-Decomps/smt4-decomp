#include "shard/W6_W6Match5_CommonBackground.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
u32 FUN_001692ac(u32 mode, u32 option);
void FUN_001835b4(s32 group, s32 sprite, s32 x, s32 y, s32 layer, s32 color);

// Draw the active common background at its current playback speed, restoring render state.
s32 commonBackgroundDraw()
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL)
        return 0;
    if (background->state != 0 && background->progress > 0.0f) {
        efctSetSpeed(background->progress);
        RenderCtxA *context = g_renderCtx;
        u32 drawState = FUN_001692ac(1, 0);
        renderCtxPushA(context, drawState);
        FUN_001835b4(2, 8, 0x10C, 0, 0, 0xFB);
        renderStackPop(&g_renderCtx->stackA);
        efctSetSpeed(1.0f);
    }
    return 0;
}
}
