/* NON_MATCHING: canonical title overlay state restores global-base addressing and expiry clears; alpha-store merging, ordered float-test shape and draw-argument scheduling still differ. */
#include "shard/W6_W6Match3_EffectColor.h"
#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {
void FUN_00145084(u32);
void FUN_001640cc(const EffectColor *, const EffectColor *, const EffectColor *, const EffectColor *,
                  f32, f32, f32, f32, f32, f32, f32, f32, f32);
void renderCtxResetColorScale(void *);
void FUN_0016c4b8(void *, u32);
void skinObjectUpdateMatrices(void *);
extern void *g_renderCtx;
u32 asdTMTexTableGetHeaderValue(u32, u32);

// Fade the timed overlay in and out while reducing its remaining duration.
u32 FUN_0013a9c8(void)
{
    if (g_titleFlags.overlay.frame <= 0) {
        g_titleFlags.overlayActive = 0;
        g_titleFlags.overlay.frame = 0;
    } else {
        EffectColor color;
        color.red = 1.0f;
        color.green = 1.0f;
        color.blue = 1.0f;
        color.alpha = 1.0f;
        if (g_titleFlags.overlay.frame > 83)
            color.alpha = 0.2f * (f32)(88u - g_titleFlags.overlay.frame);
        else if (g_titleFlags.overlay.frame < 22)
            color.alpha = (f32)(g_titleFlags.overlay.frame - 2) * 0.05f;
        if (0.0f < color.alpha) {
            u32 texture = asdTMTexTableGetHeaderValue(33, 0);
            FUN_0016c4b8(g_renderCtx, texture);
            FUN_001640cc(&color, &color, &color, &color,
                         88.0f, 128.0f, 64.0f, 64.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f);
            skinObjectUpdateMatrices(g_renderCtx);
            renderCtxResetColorScale(g_renderCtx);
        }
        s32 elapsed = FUN_00144eec();
        g_titleFlags.overlay.frame = g_titleFlags.overlay.frame - elapsed - 1;
    }
    FUN_00145084(0x401);
    return 0;
}
}
