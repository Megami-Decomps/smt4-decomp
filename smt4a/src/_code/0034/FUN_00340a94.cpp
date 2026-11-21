/* NON_MATCHING: written as uiSpriteSlideFromSide; this build lays the frame-0 position block out of line and jumps past the frame test (retail keeps it inline and retests the frame), negates the step before adding it (retail subtracts), and tail-calls uiSpriteGetCompletionState where retail calls it (linker-inlined ldrsb) and returns. */
#include "ui/UiSpriteApi.h"

extern "C" {

/* Slides the sprite in from either side, slowing toward zero, and updates its other animation tracks. */
s32 FUN_00340a94(UiSpriteState *sprite, s32 reverse, s32 vertical)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        if (vertical == 0) {
            sprite->x = 320 * 4096;
            sprite->y = 0;
        } else {
            sprite->y = 320 * 4096;
            sprite->x = 0;
        }
        if (reverse != 0) {
            sprite->x = -sprite->x;
            sprite->y = -sprite->y;
        }
    }
    s32 speed;
    if (frame > 0) {
        speed = 75 - frame * 5;
        if (speed < 0) speed = 0;
    } else {
        speed = 75;
    }
    if (reverse != 0) {
        speed = -speed;
    }
    if (vertical != 0) {
        sprite->y -= speed * 4096;
        s32 position = sprite->y >> 12;
        if ((reverse != 0 && position >= 0) || (reverse == 0 && position <= 0)) {
            sprite->y = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
    } else {
        sprite->x -= speed * 4096;
        s32 position = sprite->x >> 12;
        if ((reverse != 0 && position >= 0) || (reverse == 0 && position <= 0)) {
            sprite->x = 0;
            sprite->positionDone = 1;
        } else {
            sprite->finished = 0;
        }
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
    return uiSpriteGetCompletionState(sprite);
}
}
