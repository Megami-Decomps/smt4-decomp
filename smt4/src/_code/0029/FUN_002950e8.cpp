/* NON_MATCHING: only the tail differs: retail copies the sprite pointer into r0 in both arms of the finished store and reads `finished` back after the `updated` store (ldrb [r0]); this build reads it through r4 before that store. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" {

// Ease a sprite vertically toward its origin while advancing its remaining animation channels.
u32 FUN_002950e8(UiSpriteState *sprite, s32 fromBelow)
{
    u32 arrived = 1;
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->y = 0x3C000;
        if (!fromBelow)
            sprite->y = -sprite->y;
    }
    s32 speed = 11;
    if (!fromBelow)
        speed = -11;
    if (frame > 0) {
        if (fromBelow) {
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
    if ((fromBelow && position <= 0) || (!fromBelow && position >= 0)) {
        sprite->y = 0;
        sprite->positionDone = 1;
    } else {
        arrived = 0;
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    if (sprite->positionDone && sprite->alphaDone && sprite->scaleDone && sprite->frameDone)
        sprite->finished = 1;
    else
        sprite->finished = 0;
    sprite->updated = 1;
    if (!sprite->finished)
        arrived = 0;
    return arrived;
}
}
