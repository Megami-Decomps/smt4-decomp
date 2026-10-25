/* NON_MATCHING: VFP constant propagation, timer conditionals, and alternate draw-branch placement differ. */
#include "battle/AnimatedIconStrip.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "util/CalleeContracts.h"

struct BattleUi;
extern "C" {
extern BattleUi *g_btlUiBlock;
extern RenderCtxA *g_renderCtx;
s32 FUN_004ab718(void);
s32 FUN_001692ac(s32 enabled, s32 option);
void efctSetSpeed(f32 alpha);
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 distance);
void FUN_003c5de0(s32 id, s32 time, s32 x, s32 y, u32 color, f32 scale, f32 speed);

// Project the current battle icon, with a brief rising/pulsing entrance animation.
void FUN_0041a534(BattleAnimatedIconStrip *strip, const f32 *world, f32 alpha)
{
    if (strip->count != 0 && g_btlUiBlock != NULL && FUN_004ab718() == 0) {
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        efctSetSpeed(alpha);
        f32 screen[3];
        FUN_002a1850(screen, 0, reinterpret_cast<ProjectionMatrices *>(FUN_00152f54()), world);
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.7f);
        s32 count = strip->count;
        if (count > 1)
            count = 1;
        s32 halfWidth = (s32)((f32)count * 12.0f * 0.5f);
        s32 timer = strip->timer;
        f32 time = (f32)timer;
        f32 rise = time * 0.2f;
        if (timer > 15)
            rise = 3.0f - (time - 15.0f) * 0.2f;
        s32 risePixels = (s32)rise;
        if (strip->fixedScale == 0 && strip->count > 1) {
            s32 index = strip->frame % strip->count;
            f32 scale = 1.0f + 0.2f * strip->pulse;
            efctSetSpeed(alpha - (alpha / 5.0f) * strip->pulse);
            s32 x = (s32)(((screen[0] - 1.0f * 12.0f) + (f32)halfWidth) + (f32)parallax);
            s32 y = (s32)((screen[1] - 12.0f) + (f32)risePixels);
            FUN_003c5de0((s16)strip->ids[index], strip->times[index], x, y, 0x49, scale, 1.0f);
        } else {
            s32 index = strip->frame % strip->count;
            s32 x = (s32)(((screen[0] - 1.0f * 12.0f) + (f32)halfWidth) + (f32)parallax);
            s32 y = (s32)((screen[1] - 12.0f) + (f32)risePixels);
            FUN_003c5de0((s16)strip->ids[index], strip->times[index], x, y, 0x49, 1.0f, 1.0f);
        }
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
