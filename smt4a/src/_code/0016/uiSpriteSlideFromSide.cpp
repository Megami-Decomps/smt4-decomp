/* NON_MATCHING: -O2 restores retail branch layout; displacement negation and final result-pointer allocation still differ. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match6_ItemIcon.h"

extern "C" {
// Advances the sprite with its position track replaced by a slide from 320 pixels right (left when `reverse`) to 0,
// decelerating; returns the finished flag.
s32 uiSpriteSlideFromSide(UiSpriteState *sprite, s32 reverse)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->x = 320 * 4096;
        if (reverse != 0) {
            sprite->x = -320 * 4096;
        }
    }
    s32 step = 55;
    if (frame > 0) {
        step = -frame * 5 + 55;
        if (step < 0) {
            step = 0;
        }
    }
    if (reverse != 0) {
        step = -step;
    }
    sprite->x -= step * 4096;
    s32 position = sprite->x >> 12;
    if (reverse != 0) {
        if (position >= 0) {
            sprite->x = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
    } else if (position <= 0) {
        sprite->x = 0;
        sprite->positionDone = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    spriteSequencePlayerAdvance(sprite, 1.0f);
    if (sprite->positionDone != 0 && sprite->alphaDone != 0 &&
        sprite->scaleDone != 0 && sprite->frameDone != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->updated = 1;
    return uiSpriteGetCompletionState(sprite);
}
}
