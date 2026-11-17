#include "shard/W6_W6Match8_TitleOverlay.h"
#include "ui/UiSpriteApi.h"

extern "C" {
void workSetStateByte(TitleDrawElement *element, u8 state);

static __inline u32 floatBits(f32 value)
{
    union { f32 f; u32 u; } bits;
    bits.f = value;
    return bits.u;
}

// Select each title mode's sprite animation and hide the element that mode replaces.
void titleOverlaySetModeAnimation(TitleOverlay *overlay, u32 mode)
{
    switch (mode) {
    default:
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 16:
    case 17:
    case 18:
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[0], 2, 0);
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[2], 2, 0);
        workSetStateByte(&overlay->elements[1], 0);
        return;
    case 6:
        if (floatBits(vec2GetSpeed((const UiSpriteState *)&overlay->elements[0])) != 0x3F800000u) {
            return;
        }
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[0], 2, 0);
        return;
    case 7:
    case 8:
    case 9:
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[0], 2, 0);
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[6], 2, 0);
        return;
    case 1:
    case 10:
        uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->elements[0], 2, 0);
        return;
    case 11:
        spriteStartAnimationByIndex((UiSpriteState *)&overlay->elements[0], 7);
        spriteStartAnimationByIndex((UiSpriteState *)&overlay->elements[3], 7);
        workSetStateByte(&overlay->elements[5], 0);
        return;
    case 12:
        for (s32 index = 0; index < 5; ++index) {
            if (overlay->enabled[index]) {
                uiSpriteSetImageKeyframe((UiSpriteState *)&overlay->choices[index], 5, 0);
            }
        }
        overlay->phase = 0;
        return;
    }
}
}
