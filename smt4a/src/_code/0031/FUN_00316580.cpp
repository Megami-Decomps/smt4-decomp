/* NON_MATCHING: the opening offset (0x3C000, then -0x78000 when sliding from the left) and the speed update now match retail; retail merges the speed selection into the opening-frame branch (shared cmp/bne), the build tests the side again. */
#include "ui/UiSpriteState.h"

extern "C" {
void FUN_001807a0(UiSpriteState *sprite, f32 rate);
void FUN_00182348(UiSpriteState *sprite, f32 rate);
void FUN_00181948(UiSpriteState *sprite, f32 rate);

/* Slide a sprite inward from either side, decelerating before the final position. */
u32 FUN_00316580(UiSpriteState *sprite, s32 fromRight)
{
    u32 settled = 1;
    s32 frame = sprite->motionFrame;
    if (frame == 0) {
        sprite->motion.horizontalOffset = 0x3C000;
        if (fromRight == 0)
            sprite->motion.horizontalOffset -= 0x78000;
    }
    s32 speed = fromRight != 0 ? 11 : -11;
    if (frame > 0) {
        if (fromRight != 0) {
            speed -= frame;
            if (speed < 0)
                speed = 0;
        } else {
            speed += frame;
            if (speed > 0)
                speed = 0;
        }
    }
    sprite->motion.horizontalOffset -= speed << 12;
    s32 position = sprite->motion.horizontalOffset >> 12;
    if ((fromRight != 0 && position <= 0) || (fromRight == 0 && position >= 0)) {
        sprite->motion.horizontalOffset = 0;
        sprite->completion.horizontal = 1;
    } else {
        settled = 0;
        sprite->completion.complete = 0;
    }
    sprite->motionFrame++;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    FUN_00181948(sprite, 1.0f);
    if (sprite->completion.horizontal != 0 && sprite->completion.vertical != 0 &&
        sprite->completion.scale != 0 && sprite->completion.opacity != 0)
        sprite->completion.complete = 1;
    else
        sprite->completion.complete = 0;
    sprite->visibility.active = 1;
    if (sprite->completion.complete == 0)
        settled = 0;
    return settled;
}
}
