/* NON_MATCHING: retail is not shrink-wrapped and keeps the keyframe table in ip and zero in r3; built (default -O3) pushes r4 and returns early, and at -O2 -Otime has the same shape with ip/r3 swapped */
#include "ui/UiSpriteKeyframes.h"
#include "shard/timerStart.h"

extern "C" {

/* Selects keyframe `frame` of the sprite and moves it to the frame's primary (or, with `alternate`, alternate) position. */
void timerStart(UiSpriteKeyframeState *sprite, u32 frame, u32 alternate)
{
    UiSpriteKeyframe *keyframe;

    if (sprite->keyframes != NULL) {
        sprite->frame = frame;
        sprite->elapsed = 0;
        sprite->flagA = 0;
        sprite->flagB = 0;
        keyframe = &sprite->keyframes[frame];
        sprite->alternate = alternate;
        if (alternate != 0) {
            sprite->x = keyframe->altX << 12;
            sprite->y = keyframe->altY << 12;
        } else {
            sprite->x = keyframe->x << 12;
            sprite->y = keyframe->y << 12;
        }
    }
}

} /* extern "C" */
