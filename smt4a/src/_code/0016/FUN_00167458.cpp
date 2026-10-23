/* NON_MATCHING: -O2 restores retail branch layout; displacement negation and final result-pointer allocation still differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" {
void FUN_001807a0(SpritePlaybackView *sprite, f32 speed);
void FUN_00182348(SpritePlaybackView *sprite, f32 speed);
void FUN_00181948(SpritePlaybackView *sprite, f32 speed);

// Slide a sprite toward zero displacement while advancing its other animation channels.
s32 FUN_00167458(SpritePlaybackView *sprite, s32 reverse)
{
    s32 frame = (s16)sprite->positionFrame;
    if (frame == 0) {
        sprite->transition.displacement = 320 * 4096;
        if (reverse != 0) {
            sprite->transition.displacement = -320 * 4096;
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
    sprite->transition.displacement += step * -4096;
    s32 position = sprite->transition.displacement >> 12;
    if (reverse != 0) {
        if (position >= 0) {
            sprite->transition.displacement = 0;
            sprite->completed[0] = 1;
        } else {
            sprite->finished = 0;
        }
    } else if (position <= 0) {
        sprite->transition.displacement = 0;
        sprite->completed[0] = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->positionFrame = frame + 1;
    FUN_001807a0(sprite, 1.0f);
    FUN_00182348(sprite, 1.0f);
    FUN_00181948(sprite, 1.0f);
    if (sprite->completed[0] != 0 && sprite->completed[1] != 0 &&
        sprite->completed[2] != 0 && sprite->completed[3] != 0) {
        sprite->finished = 1;
    } else {
        sprite->finished = 0;
    }
    sprite->active = 1;
    return (s8)sprite->finished;
}
}
