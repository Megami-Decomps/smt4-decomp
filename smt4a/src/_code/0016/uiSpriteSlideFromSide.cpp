/* NON_MATCHING: written as smt4's uiSlidingSpriteAdvance; this build lays the frame-0 position block out of line and jumps past the frame test (retail keeps it inline and retests the frame), and tail-calls uiSpriteGetCompletionState where retail calls it (linker-inlined ldrsb) and returns. */
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
    if (reverse != 0) {
        step = -step;
    }
    sprite->x -= step << 12;
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
    return uiSpriteGetCompletionState(sprite);
}
}
