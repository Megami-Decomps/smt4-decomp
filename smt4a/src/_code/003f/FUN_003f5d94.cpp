/* NON_MATCHING: native animation-alpha getters restored; frame-glyph lifetime and base-coordinate saved registers still differ. */
#include "ui/AnimatedDigitPanel.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "shard/renderCtxCalculateStereoParallax.h"
#include "shard/FUN_003f5b14.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 alpha);
s32 vec2GetXInt(const SpritePlaybackView *position);
s32 vec2GetYInt(const SpritePlaybackView *position);
f32 vec2GetSpeed(const SpritePlaybackView *position);
void FUN_003f54c4(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);
void FUN_003f61b4(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);

// Draw the panel frame and animated digit content using combined position-channel alpha.
void FUN_003f5d94(DigitPanelDisplay *display, s32 x, u32 color, f32 alpha)
{
    x += (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(alpha);
    FUN_001835b4(2, 0x31, 0, x, color, 0x8D);
    FUN_001835b4(2, 0x31, 1, x, color, 0x8D);
    FUN_001835b4(2, 0x31, 9, x, color, 0x8D);
    s32 baseX = vec2GetXInt(&display->position);
    s32 baseY = vec2GetYInt(&display->position);
    f32 baseAlpha = vec2GetSpeed(&display->position);
    FUN_003f5b14(display, baseX, baseY, 0x17, 0x1A, baseAlpha);
    s32 contentX = vec2GetXInt(&display->contentPosition) + baseX;
    s32 contentY = vec2GetYInt(&display->contentPosition) + baseY;
    f32 contentAlpha = vec2GetSpeed(&display->contentPosition) * baseAlpha;
    if (display->state == 0) {
        FUN_003f54c4(display, contentX, contentY, contentAlpha);
        FUN_003f61b4(display, baseX, baseY, contentAlpha);
    }
}
}
