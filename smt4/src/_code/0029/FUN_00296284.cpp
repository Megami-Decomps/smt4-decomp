/* NON_MATCHING: this build lays the frame-0 position block out of line (retail keeps it inline and retests the frame) and stores the negated x/y singly (retail ldm/stm), the per-axis arrival tests are laid out differently, and `finished` is returned through r4 before the `updated` store (retail: through a copy in r0, after it). */
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
    s32 speed;
    if (frame > 0) {
        speed = 75 - frame * 5;
        if (speed < 0)
            speed = 0;
    } else {
        speed = 75;
    }
    if (reverse)
        speed = -speed;
    if (vertical) {
        sprite->y -= speed << 12;
        s32 position = sprite->y >> 12;
        if (reverse ? position >= 0 : position <= 0) {
            sprite->y = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
    } else {
        sprite->x -= speed << 12;
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
    if (sprite->positionDone && sprite->alphaDone && sprite->scaleDone && sprite->frameDone)
        sprite->finished = 1;
    else
        sprite->finished = 0;
    sprite->updated = 1;
    return sprite->finished;
}
}
