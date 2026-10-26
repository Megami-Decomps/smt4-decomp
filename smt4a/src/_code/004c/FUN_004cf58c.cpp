/* NON_MATCHING: float stereo-offset round trips recovered; VFP destinations and first render-stack pop allocation still differ. */
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// A sprite effect owner (observed fields).
struct StereoSpriteEffect {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 visible;
    /* 0x26 */ u8 unk26[0x0a];
    /* 0x30 */ f32 speed;       // effect speed of the narrow sprite
};

extern "C" {
extern RenderCtxA *g_renderCtx;

void efctSetSpeed(f32 speed);
s32 FUN_001692ac(u32 first, u32 second);
void FUN_001835b4(s32 layer, s32 group, s32 image, s32 x, s32 y, s32 color);
void FUN_00183bb0(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);

// Draws the wide and the narrow sprite of the effect with a stereo offset, each between a render-state push and pop.
void FUN_004cf58c(StereoSpriteEffect *effect)
{
    if (effect->visible == 0) {
        return;
    }
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    asdTMTexTableEntryAt(0x22, 3000);
    f32 wideOffset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.35f);
    FUN_001835b4(2, 0x22, 3000, wideOffset, 0, 2);
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    efctSetSpeed(effect->speed);
    FUN_00183bb0();
    asdTMTexTableEntryAt(0x22, 1000);
    f32 narrowOffset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f);
    FUN_001835b4(2, 0x22, 1000, narrowOffset, 0, 6);
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
}
}
