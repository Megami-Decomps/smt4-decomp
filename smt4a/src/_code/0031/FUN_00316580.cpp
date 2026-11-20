/* NON_MATCHING: retail shares the initial frame and speed branches and schedules the final completion check differently. */
#include "ui/UiSpriteApi.h"

extern "C" {

/* Slides a sprite vertically toward its origin while advancing the other animation tracks. */
u32 FUN_00316580(UiSpriteState *sprite, s32 fromBelow)
{
    u32 settled = 1;
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->y = 0x3C000;
        if (fromBelow == 0)
            sprite->y -= 0x78000;
    }
    s32 speed = fromBelow != 0 ? 11 : -11;
    if (frame > 0) {
        if (fromBelow != 0) {
            speed -= frame;
            if (speed < 0)
                speed = 0;
        } else {
            speed += frame;
            if (speed > 0)
                speed = 0;
        }
    }
    sprite->y -= (s32)((u32)speed << 12);
    s32 position = sprite->y >> 12;
    if ((fromBelow != 0 && position <= 0) || (fromBelow == 0 && position >= 0)) {
        sprite->y = 0;
        sprite->positionDone = 1;
    } else {
        settled = 0;
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    spriteSequencePlayerAdvance(sprite, 1.0f);
    if (sprite->positionDone != 0 && sprite->alphaDone != 0 &&
        sprite->scaleDone != 0 && sprite->frameDone != 0)
        sprite->finished = 1;
    else
        sprite->finished = 0;
    sprite->updated = 1;
    if (sprite->finished == 0)
        settled = 0;
    return settled;
}
} /* extern "C" */
