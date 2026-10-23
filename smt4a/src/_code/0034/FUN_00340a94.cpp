/* NON_MATCHING: Initial-frame/speed branch scheduling, shifted subtraction lowering and completion return ordering differ. */
#include "ui/UiSpriteState.h"

extern "C" {
void FUN_001807a0(UiSpriteState *sprite, f32 scale);
void FUN_00182348(UiSpriteState *sprite, f32 scale);
void FUN_00181948(UiSpriteState *sprite, f32 scale);

/* Slides the sprite in from either side, slowing toward zero, and updates its other animation tracks. */
s32 FUN_00340a94(UiSpriteState *sprite, s32 reverse, s32 vertical)
{
    s32 frame = sprite->motionFrame;
    if (frame == 0) {
        if (vertical == 0) {
            sprite->slide.x = 320 * 4096;
            sprite->slide.y = 0;
        } else {
            sprite->slide.y = 320 * 4096;
            sprite->slide.x = 0;
        }
        if (reverse != 0) {
            sprite->slide.x = -sprite->slide.x;
            sprite->slide.y = -sprite->slide.y;
        }
    }
    s32 speed = 75;
    if (frame > 0) {
        speed = 75 - frame * 5;
        if (speed < 0) {
            speed = 0;
        }
    }
    if (reverse != 0) {
        speed = -speed;
    }
    if (vertical != 0) {
        sprite->slide.y -= speed * 4096;
        s32 position = sprite->slide.y >> 12;
        if ((reverse != 0 && position >= 0) || (reverse == 0 && position <= 0)) {
            sprite->slide.y = 0;
            sprite->completion.horizontal = 1;
        } else {
            sprite->animationFlags.completed = 0;
        }
    } else {
        sprite->slide.x -= speed * 4096;
        s32 position = sprite->slide.x >> 12;
        if ((reverse != 0 && position >= 0) || (reverse == 0 && position <= 0)) {
            sprite->slide.x = 0;
            sprite->completion.horizontal = 1;
        } else {
            sprite->animationFlags.completed = 0;
        }
    }
    sprite->motionFrame = frame + 1;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    FUN_00181948(sprite, 1.0f);
    if (sprite->completion.horizontal != 0 && sprite->completion.vertical != 0 &&
        sprite->completion.scale != 0 && sprite->completion.opacity != 0) {
        sprite->animationFlags.completed = 1;
    } else {
        sprite->animationFlags.completed = 0;
    }
    sprite->visibility.active = 1;
    return sprite->animationFlags.completed;
}
}
