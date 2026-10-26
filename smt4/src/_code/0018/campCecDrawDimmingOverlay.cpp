/* NON_MATCHING: retail initializes a white local color that is overwritten before every use; dead stores are intentionally omitted. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_EffectColor.h"

struct CampCecOverlayWork {
    u8 unk000[0xd28];
    u32 state;
    u8 unkd2c[0x36];
    u8 dimBackground;
};

extern "C" {
extern CampCecOverlayWork *g_campCec;
extern RenderCtx *g_titleScene;
void FUN_002bed3c();
s32 FUN_002c5d80(u32 mode, u32 option);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void FUN_002b76d0(const EffectColor *first, const EffectColor *second,
                  const EffectColor *third, const EffectColor *fourth,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void efctSetSpeed(f32 alpha);

u32 campCecDrawDimmingOverlay()
{
    switch (g_campCec->state) {
    case 3:
    case 4:
    case 5:
        if (g_campCec->dimBackground != 0) {
            FUN_002bed3c();
            renderCtxSelectStereoLayout(g_titleScene);
            RenderCtx *context = g_titleScene;
            s32 state = FUN_002c5d80(1, 0);
            renderStackPush(&context->stackA, state);
            EffectColor color;
            color.red = 0.0f;
            color.green = 0.0f;
            color.blue = 0.0f;
            color.alpha = 0.5f;
            renderCtxSelectTexture(g_titleScene, 0);
            f32 offset = renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
            FUN_002b76d0(&color, &color, &color, &color,
                          (f32)(s32)offset, 0.0f, 400.0f, 240.0f, 0.95703125f);
            efctSetSpeed(1.0f);
            renderStackPop(&g_titleScene->stackA);
        }
        break;
    }
    return 0;
}
}
