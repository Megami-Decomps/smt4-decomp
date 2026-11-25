/* NON_MATCHING: retail stages the sprite pointer in both completion branches and reads finished after marking the sprite updated. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
/* Slides the sprite toward zero from the right (or left in reverse), decelerating as it comes in.
 * Returns the finished flag after advancing the other tracks. */
s32 uiSpriteSlideFromSide(UiSpriteState *sprite, s32 reverse)
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
    if (reverse != 0) {
        step = -step;
    }
    sprite->x -= (s32)((u32)step << 12);
    s32 position = sprite->x >> 12;
    if ((reverse && position >= 0) || (!reverse && position <= 0)) {
        sprite->x = 0;
        sprite->positionDone = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    uiSpriteAdvanceAlphaTrack(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    spriteSequencePlayerAdvance(sprite, 1.0f);
    if (sprite->positionDone != 0 && sprite->alphaDone != 0 &&
        sprite->scaleDone != 0 && sprite->frameDone != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->updated = 1;
    return sprite->finished;
}
} /* extern "C" */
