#include "ui/PartnerSelectMenu.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* Starts the panel sprite's slide: directions 0-3 select position keys 4-7 and the image key (0 for
 * directions 0 and 1, 1 for 2 and 3); any other value plays `keyframe` and `image` as passed. */
void partnerMenuStartPanelSlide(PartnerSelectMenu *menu, s32 keyframe, s32 image, u32 frame)
{
    s32 direction = keyframe;

    switch (direction) {
    case 0:
        keyframe = 4;
        break;
    case 1:
        keyframe = 5;
        break;
    case 2:
        keyframe = 6;
        break;
    case 3:
        keyframe = 7;
        break;
    }
    switch (direction) {
    case 0:
    case 1:
        image = 0;
        break;
    case 2:
    case 3:
        image = 1;
        break;
    }
    uiSpriteSetKeyframe(&menu->panel, keyframe, frame);
    uiSpriteSetImageKeyframe(&menu->panel, image, frame);
}

} /* extern "C" */
