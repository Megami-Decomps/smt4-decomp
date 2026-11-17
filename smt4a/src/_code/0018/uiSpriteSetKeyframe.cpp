/* NON_MATCHING: retail is not shrink-wrapped and keeps the keyframe table in ip and zero in r3; built (default -O3) pushes r4 and returns early, and at -O2 -Otime has the same shape with ip/r3 swapped */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {

/* Starts position key `key` of the sprite and moves it to the key's first point (its last one when `reverse`). */
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 key, s32 reverse)
{
    UiSpritePositionKey *position;

    if (sprite->positionKeys != NULL) {
        sprite->positionKey = key;
        sprite->positionFrame = 0;
        sprite->positionDone = 0;
        sprite->finished = 0;
        position = &sprite->positionKeys[key];
        sprite->positionReverse = reverse;
        if (reverse != 0) {
            sprite->x = position->endX << 12;
            sprite->y = position->endY << 12;
        } else {
            sprite->x = position->startX << 12;
            sprite->y = position->startY << 12;
        }
    }
}

} /* extern "C" */
