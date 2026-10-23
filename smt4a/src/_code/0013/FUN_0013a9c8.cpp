/* NON_MATCHING: title flag globals are not grouped; fade branch/float comparison and scalar setup scheduling differ. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
void FUN_00145084(u32);
void FUN_001640cc(const EffectColor *, const EffectColor *, const EffectColor *, const EffectColor *,
                  f32, f32, f32, f32, f32, f32, f32, f32, f32);
void renderCtxResetColorScale(void *);
void FUN_0016c4b8(void *, u32);
void skinObjectUpdateMatrices(void *);
extern u8 DAT_0057ffd2;
extern s32 DAT_0057ffe4;
extern void *g_renderCtx;
s32 FUN_00144eec(void);
u32 asdTMTexTableGetHeaderValue(u32, u32);

// Fade the timed overlay in and out while reducing its remaining duration.
u32 FUN_0013a9c8(void)
{
    if (DAT_0057ffe4 < 1) {
        DAT_0057ffe4 = 0;
        DAT_0057ffd2 = 0;
    } else {
        EffectColor color;
        color.red = 1.0f;
        color.green = 1.0f;
        color.blue = 1.0f;
        color.alpha = 1.0f;
        if (DAT_0057ffe4 >= 84)
            color.alpha = (f32)(88u - DAT_0057ffe4) * 0.2f;
        else if (DAT_0057ffe4 < 22)
            color.alpha = (f32)(DAT_0057ffe4 - 2) * 0.05f;
        if (color.alpha > 0.0f) {
            u32 texture = asdTMTexTableGetHeaderValue(33, 0);
            FUN_0016c4b8(g_renderCtx, texture);
            FUN_001640cc(&color, &color, &color, &color,
                         88.0f, 128.0f, 64.0f, 64.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f);
            skinObjectUpdateMatrices(g_renderCtx);
            renderCtxResetColorScale(g_renderCtx);
        }
        s32 elapsed = FUN_00144eec();
        DAT_0057ffe4 = DAT_0057ffe4 - elapsed - 1;
    }
    FUN_00145084(0x401);
    return 0;
}
}
