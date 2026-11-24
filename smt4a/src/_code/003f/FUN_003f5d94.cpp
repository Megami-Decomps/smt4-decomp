/* NON_MATCHING: the stereo frame matches retail, but the two base-coordinate registers are swapped. */
#include "ui/MenuStereoFrame.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedDigitPanel.h"
#include "code/Code003f.h"

extern "C" {
void FUN_003f54c4(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);
void FUN_003f61b4(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);

/* Draws the stereo frame and animates the digit content with combined position-channel opacity. */
void FUN_003f5d94(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha)
{
    menuDrawStereoFrame(x, y, alpha);
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
