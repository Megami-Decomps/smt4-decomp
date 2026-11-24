#include "ui/MenuStereoFrame.h"
#include "ui/AnimatedDigitPanel.h"
#include "code/Code003f.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void FUN_003f54c4(DigitPanelDisplay *owner, s32 x, s32 y, f32 alpha);
void FUN_003f61b4(DigitPanelDisplay *owner, s32 x, s32 y, f32 alpha);

/* Draws the stereo frame, then the animated content and its scroll bar. */
void FUN_003f6e24(DigitPanelDisplay *owner, s32 frameX, s32 frameY, f32 alpha)
{
    vec2GetXInt(&owner->background);
    vec2GetYInt(&owner->background);
    vec2GetSpeed(&owner->background);
    menuDrawStereoFrame(frameX, frameY, alpha);
    s32 x = vec2GetXInt(&owner->position);
    s32 positionY = vec2GetYInt(&owner->position);
    f32 contentAlpha = vec2GetSpeed(&owner->position);
    FUN_003f5b14(owner, x, positionY, 0x17, 0x1A, contentAlpha);
    s32 offsetX = vec2GetXInt(&owner->contentPosition) + x;
    s32 offsetY = vec2GetYInt(&owner->contentPosition) + positionY;
    contentAlpha *= vec2GetSpeed(&owner->contentPosition);
    FUN_003f54c4(owner, offsetX, offsetY, contentAlpha);
    FUN_003f61b4(owner, x, positionY, contentAlpha);
}

} /* extern "C" */
