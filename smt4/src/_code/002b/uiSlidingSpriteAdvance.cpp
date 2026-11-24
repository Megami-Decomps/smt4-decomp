/* NON_MATCHING: retail keeps the completion getter's argument in r0 across both flag branches and calls the getter after marking the sprite updated. */
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
    s32 step = 55;
    if ((s16)sprite->positionFrame > 0) {
        step = 55 - (s16)sprite->positionFrame * 5;
        if (step < 0) step = 0;
    }
    if (reverse) step = -step;
    sprite->x -= (s32)((u32)step << 12);
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
