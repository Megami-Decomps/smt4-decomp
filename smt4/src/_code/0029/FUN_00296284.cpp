/* NON_MATCHING: slide initialization block layout, signed-motion arithmetic and completion normalization differ. */
#include "ui/UiSpriteState.h"

extern "C" {
void FUN_002b1e08(UiSpriteState *);
void controllerUpdateUniformScaleTrack(UiSpriteState *);
void spriteSequencePlayerAdvance(UiSpriteState *);

s32 FUN_00296284(UiSpriteState *sprite, s32 reverse, s32 vertical)
{
    s32 frame = sprite->motionFrame;
    if (frame == 0) {
        if (!vertical) {
            sprite->slide.x = 320 * 4096;
            sprite->slide.y = 0;
        } else {
            sprite->slide.y = 320 * 4096;
            sprite->slide.x = 0;
        }
        if (reverse) {
            sprite->slide.x = -sprite->slide.x;
            sprite->slide.y = -sprite->slide.y;
        }
    }
    s32 speed = 75;
    if (frame > 0) {
        speed = 75 - frame * 5;
        if (speed < 0)
            speed = 0;
    }
    if (reverse)
        speed = -speed;
    if (vertical) {
        sprite->slide.y -= speed * 4096;
        s32 position = sprite->slide.y >> 12;
        if (reverse ? position >= 0 : position <= 0) {
            sprite->slide.y = 0;
            sprite->completion.horizontal = 1;
        } else {
            sprite->animationFlags.completed = 0;
        }
    } else {
        sprite->slide.x -= speed * 4096;
        s32 position = sprite->slide.x >> 12;
        if (reverse ? position >= 0 : position <= 0) {
            sprite->slide.x = 0;
            sprite->completion.horizontal = 1;
        } else {
            sprite->animationFlags.completed = 0;
        }
    }
    sprite->motionFrame = frame + 1;
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    sprite->animationFlags.completed = sprite->completion.horizontal && sprite->completion.vertical &&
                                      sprite->completion.scale && sprite->completion.opacity;
    sprite->visibility.active = 1;
    return sprite->animationFlags.completed;
}
}
