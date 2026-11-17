#include "ui/UiSpriteApi.h"
#include "ui/SpriteTransitionGroup.h"
#include "font/ComWin/ComWin.h"

extern "C" {
void workSetStateByte(UiSpriteState *sprite, u8 state);

// Advance the four-sprite transition and return to idle after its paired exit animation.
void FUN_00206b80(SpriteTransitionGroup *group)
{
    if (group->state > 0) {
        uiSpriteAdvanceAnimation(&group->sprites[3]);
    }
    switch (group->state) {
    case 0:
    case 1:
        break;
    case 2:
        if (uiSpriteAdvanceAnimation(&group->sprites[0]) && uiSpriteAdvanceAnimation(&group->sprites[1]) &&
            uiSpriteAdvanceAnimation(&group->sprites[2])) {
            spriteStartAnimationByIndex(&group->sprites[0], 3);
            spriteStartAnimationByIndex(&group->sprites[1], 3);
            group->state = 3;
            group->frame = 0;
        }
        break;
    case 3:
        uiSpriteAdvanceAnimation(&group->sprites[0]);
        uiSpriteAdvanceAnimation(&group->sprites[1]);
        if (uiAnimatedSpriteIsFinished(&group->sprites[0]) &&
            uiAnimatedSpriteIsFinished(&group->sprites[1])) {
            workSetStateByte(&group->sprites[0], 0);
            workSetStateByte(&group->sprites[1], 0);
            workSetStateByte(&group->sprites[2], 0);
            group->state = 1;
            group->frame = 0;
        }
        break;
    }
    ++group->frame;
}
}
