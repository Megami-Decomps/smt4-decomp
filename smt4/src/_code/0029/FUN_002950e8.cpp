/* NON_MATCHING: initial frame branch placement, displacement negation and completion-result pointer allocation differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" {
void FUN_002b1e08(SpritePlaybackView *sprite);
void controllerUpdateUniformScaleTrack(SpritePlaybackView *sprite);
void spriteSequencePlayerAdvance(SpritePlaybackView *sprite);

// Ease a sprite vertically toward its origin while advancing its remaining animation channels.
u32 FUN_002950e8(SpritePlaybackView *sprite, s32 fromBelow)
{
    u32 arrived = 1;
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->verticalTransition.displacement = 0x3C000;
        if (!fromBelow)
            sprite->verticalTransition.displacement = -sprite->verticalTransition.displacement;
    }
    s32 speed = fromBelow ? 11 : -11;
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
    sprite->verticalTransition.displacement -= speed * 0x1000;
    s32 position = sprite->verticalTransition.displacement >> 12;
    if ((fromBelow && position <= 0) || (!fromBelow && position >= 0)) {
        sprite->verticalTransition.displacement = 0;
        sprite->completed[0] = 1;
    } else {
        arrived = 0;
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_002b1e08(sprite);
    controllerUpdateUniformScaleTrack(sprite);
    spriteSequencePlayerAdvance(sprite);
    if (sprite->completed[0] && sprite->completed[1] && sprite->completed[2] && sprite->completed[3])
        sprite->finished = 1;
    else
        sprite->finished = 0;
    sprite->active = 1;
    if (!sprite->finished)
        arrived = 0;
    return arrived;
}
}
