#include "common.h"

struct UiSpriteState;

extern "C" {

void uiSpriteSetKeyframe(UiSpriteState *sprite, s16 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s16 keyframe, s32 flags);

// Select the sprite's keyframe for a direction (1-4) and then its matching image keyframe.
void FUN_00184b90(u8 *owner, s32 direction)
{
    s32 imageKeyframe = 0;
    if (direction == 1) {
        direction = 7;
        imageKeyframe = 5;
    } else if (direction == 2) {
        direction = 8;
        imageKeyframe = 5;
    } else if (direction == 3) {
        direction = 9;
        imageKeyframe = 6;
    } else if (direction == 4) {
        direction = 10;
        imageKeyframe = 6;
    }
    uiSpriteSetKeyframe((UiSpriteState *)(owner + 0x1c8), direction, 0);
    uiSpriteSetImageKeyframe((UiSpriteState *)(owner + 0x1c8), imageKeyframe, 0);
}

} /* extern "C" */
