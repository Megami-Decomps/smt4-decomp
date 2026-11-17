/* NON_MATCHING: reverse-slide setup and completion-byte branch layout differ. */
#include "ui/UiSpriteApi.h"

/* Advances the sprite with its position track replaced by a slide from 320 pixels right (left when `reverse`) to 0,
   decelerating; returns the finished flag. */
extern "C" s32 uiSlidingSpriteAdvance(UiSpriteState *sprite, s32 reverse)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->x = reverse ? -320 * 4096 : 320 * 4096;
    }
    s32 step = 55;
    if (frame > 0) {
        step = 55 - frame * 5;
        if (step < 0) step = 0;
    }
    if (reverse) step = -step;
    sprite->x -= step * 4096;
    s32 position = sprite->x >> 12;
    if (reverse ? position >= 0 : position <= 0) {
        sprite->x = 0;
        sprite->positionDone = 1;
    } else {
        sprite->finished = 0;
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
