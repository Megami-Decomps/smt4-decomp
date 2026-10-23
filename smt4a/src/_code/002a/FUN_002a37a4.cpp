/* NON_MATCHING: 68 retail/built rows; cached-state push/pop register allocation and scheduling differ. */
#include "shard/W6_W6Match5_CommonBackground.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx *g_renderCtx;
void efctSetSpeed(f32 speed);
u32 FUN_001692ac(u32 mode, u32 option);
void FUN_001835b4(s32 group, s32 sprite, s32 x, s32 y, s32 layer, s32 color);

// Draw the active common background at its current playback speed, restoring render state.
s32 FUN_002a37a4()
{
    CommonBackgroundState *background = g_commonBg.background;
    if (background == NULL)
        return 0;
    if (background->state != 0 && background->progress > 0.0f) {
        efctSetSpeed(background->progress);
        RenderCtx *context = g_renderCtx;
        u32 drawState = FUN_001692ac(1, 0);
        context->drawStateView.state.push(drawState);
        FUN_001835b4(2, 8, 0x10C, 0, 0, 0xFB);
        g_renderCtx->drawStateView.state.pop();
        efctSetSpeed(1.0f);
    }
    return 0;
}
}
