/* NON_MATCHING: the opening offset (0x3C000, then -0x78000 when sliding from the left) and the speed update now match retail; retail merges the speed selection into the opening-frame branch (shared cmp/bne), the build tests the side again. */
#include "ui/UiSpriteApi.h"

extern "C" {

/* Slide a sprite inward from either side, decelerating before the final position. */
u32 FUN_00316580(UiSpriteState *sprite, s32 fromRight)
{
    u32 settled = 1;
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->y = 0x3C000;
        if (fromRight == 0)
            sprite->y -= 0x78000;
    }
    s32 speed = fromRight != 0 ? 11 : -11;
    if (frame > 0) {
        if (fromRight != 0) {
            speed -= frame;
            if (speed < 0)
                speed = 0;
        } else {
            speed += frame;
            if (speed > 0)
                speed = 0;
        }
    }
    sprite->y -= speed << 12;
    s32 position = sprite->y >> 12;
    if ((fromRight != 0 && position <= 0) || (fromRight == 0 && position >= 0)) {
        sprite->y = 0;
        sprite->positionDone = 1;
    } else {
        settled = 0;
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    FUN_00181948(sprite, 1.0f);
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
}
