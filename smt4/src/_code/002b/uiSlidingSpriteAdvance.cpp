/* NON_MATCHING: this build lays the frame-0 position block out of line and jumps past the frame test (retail keeps it inline and retests the frame), and returns `finished` through r4 before the `updated` store (retail: through a copy in r0, after it). */
#include "ui/UiSpriteApi.h"

/* Advances the sprite with its position track replaced by a slide from 320 pixels right (left when `reverse`) to 0,
   decelerating; returns the finished flag. */
extern "C" s32 uiSlidingSpriteAdvance(UiSpriteState *sprite, s32 reverse)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->x = 320 * 4096;
        if (reverse)
            sprite->x = -sprite->x;
    }
    s32 step;
    if (frame > 0) {
        step = 55 - frame * 5;
        if (step < 0) step = 0;
    } else {
        step = 55;
    }
    if (reverse) step = -step;
    sprite->x -= step << 12;
    s32 position = sprite->x >> 12;
    if ((reverse && position >= 0) || (!reverse && position <= 0)) {
        sprite->x = 0;
        sprite->positionDone = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    uiSpriteAdvanceAlphaTrack(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    if (sprite->positionDone && sprite->alphaDone && sprite->scaleDone && sprite->frameDone)
        sprite->finished = 1;
    else
        sprite->finished = 0;
    sprite->updated = 1;
    return sprite->finished;
}
