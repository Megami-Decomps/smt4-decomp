/* NON_MATCHING: switch case/tail-call placement and sprite scale load differ from retail. */
#include "shard/W6_W6Match8_TitleOverlay.h"

extern "C" {
void uiSpriteSetImageKeyframe(TitleDrawElement *element, s32 keyframe, s32 flags);
void spriteStartAnimationByIndex(TitleDrawElement *element, s32 state);
void workSetStateByte(TitleDrawElement *element, u8 state);

// Select each title mode's sprite animation and hide the element that mode replaces.
void titleOverlaySetModeAnimation(TitleOverlay *overlay, u32 mode)
{
    TitleDrawElement *hidden;
    switch (mode) {
    default:
        return;
    case 1:
    case 10:
        uiSpriteSetImageKeyframe(&overlay->elements[0], 2, 0);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 16:
    case 17:
    case 18:
        uiSpriteSetImageKeyframe(&overlay->elements[0], 2, 0);
        uiSpriteSetImageKeyframe(&overlay->elements[2], 2, 0);
        hidden = &overlay->elements[1];
        break;
    case 6:
        if (overlay->elements[0].scale != 1.0f) {
            return;
        }
        uiSpriteSetImageKeyframe(&overlay->elements[0], 2, 0);
        return;
    case 7:
    case 8:
    case 9:
        uiSpriteSetImageKeyframe(&overlay->elements[0], 2, 0);
        uiSpriteSetImageKeyframe(&overlay->elements[6], 2, 0);
        return;
    case 11:
        spriteStartAnimationByIndex(&overlay->elements[0], 7);
        spriteStartAnimationByIndex(&overlay->elements[3], 7);
        hidden = &overlay->elements[5];
        break;
    case 12:
        for (s32 index = 0; index < 5; ++index) {
            if (overlay->enabled[index]) {
                uiSpriteSetImageKeyframe(&overlay->choices[index], 5, 0);
            }
        }
        overlay->phase = 0;
        return;
    }
    workSetStateByte(hidden, 0);
}
}
