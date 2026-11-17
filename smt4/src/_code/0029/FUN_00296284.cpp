/* NON_MATCHING: slide initialization block layout, signed-motion arithmetic and completion normalization differ. */
#include "ui/UiSpriteApi.h"

extern "C" {

s32 FUN_00296284(UiSpriteState *sprite, s32 reverse, s32 vertical)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        if (!vertical) {
            sprite->x = 320 * 4096;
            sprite->y = 0;
        } else {
            sprite->y = 320 * 4096;
            sprite->x = 0;
        }
        if (reverse) {
            sprite->x = -sprite->x;
            sprite->y = -sprite->y;
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
        sprite->y -= speed * 4096;
        s32 position = sprite->y >> 12;
        if (reverse ? position >= 0 : position <= 0) {
            sprite->y = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
    } else {
        sprite->x -= speed * 4096;
        s32 position = sprite->x >> 12;
        if (reverse ? position >= 0 : position <= 0) {
            sprite->x = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
    }
    sprite->positionFrame = frame + 1;
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    sprite->finished = sprite->positionDone && sprite->alphaDone &&
                                      sprite->scaleDone && sprite->frameDone;
    sprite->updated = 1;
    return sprite->finished;
}
}
