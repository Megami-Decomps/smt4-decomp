#include "ui/SpriteTransitionGroup.h"
#include "font/ComWin/ComWin.h"

extern "C" {
s32 FUN_002bf818(SpriteTransitionMember *sprite);
void workSetStateByte(SpriteTransitionMember *sprite, u8 state);

// Advance the four-sprite transition and return to idle after its paired exit animation.
void FUN_00206b80(SpriteTransitionGroup *group)
{
    if (group->state > 0) {
        FUN_002bf818(&group->sprites[3]);
    }
    switch (group->state) {
    case 0:
    case 1:
        break;
    case 2:
        if (FUN_002bf818(&group->sprites[0]) && FUN_002bf818(&group->sprites[1]) &&
            FUN_002bf818(&group->sprites[2])) {
            spriteStartAnimationByIndex(&group->sprites[0], 3);
            spriteStartAnimationByIndex(&group->sprites[1], 3);
            group->state = 3;
            group->frame = 0;
        }
        break;
    case 3:
        FUN_002bf818(&group->sprites[0]);
        FUN_002bf818(&group->sprites[1]);
        if (uiAnimatedSpriteIsFinished(&group->sprites[0].animation) &&
            uiAnimatedSpriteIsFinished(&group->sprites[1].animation)) {
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
