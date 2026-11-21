/* NON_MATCHING: readable rewrite of the shaking particle update; remaining differences are VFP register choices in the end-of-life fade and the amplitude arguments, and the order of the two velocity loads against the first compare. */
#include "common.h"

// A particle that jitters around its anchor: amplitude range, current velocity, and its lifetime counters.
struct ShakeParticle {
    /* 0x00 */ f32 amplitudeX;
    /* 0x04 */ f32 amplitudeY;
    /* 0x08 */ f32 velocityX;
    /* 0x0c */ f32 velocityY;
    /* 0x10 */ s16 lifetime;   // frames to live, -1: forever
    /* 0x12 */ s16 frame;      // frames elapsed (negative: delay before it starts)
};

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);

// Advances the particle one frame: picks a new random velocity (opposing the old direction when it is moving), fades
// the amplitude out over the last three frames of its life and clears it once the lifetime is over.
void effShakeParticleAdvance(ShakeParticle *particle)
{
    s32 lifetime = particle->lifetime;
    s32 frame = particle->frame;
    if (lifetime != -1 && lifetime <= frame) {
        if (particle != NULL) {
            *particle = ShakeParticle();
        }
        return;
    }
    if (frame < 0) {
        particle->frame = frame + 1;
        particle->velocityX = 0.0f;
        particle->velocityY = 0.0f;
        return;
    }
    f32 amplitudeX = particle->amplitudeX;
    f32 amplitudeY = particle->amplitudeY;
    if (lifetime != -1 && lifetime > 3) {
        s32 remaining = lifetime - frame;
        if (remaining <= 3) {
            amplitudeX = (f32)remaining * amplitudeX * 0.25f;
            amplitudeY = (f32)remaining * amplitudeY * 0.25f;
        }
    }
    f32 magnitudeX = (f32)randBetween((s32)(amplitudeX * 0.5f * 100.0f), (s32)(amplitudeX * 100.0f));
    f32 magnitudeY = (f32)randBetween((s32)(amplitudeY * 0.5f * 100.0f), (s32)(amplitudeY * 100.0f));
    /* the random magnitudes are drawn in hundredths */
    magnitudeX *= 0.01f;
    magnitudeY *= 0.01f;
    s32 randomX = randBetween(0, 1) * 2 - 1;
    s32 randomY = randBetween(0, 1) * 2 - 1;
    f32 oldX = particle->velocityX;
    f32 oldY = particle->velocityY;
    s32 keepX = oldX > 0.0f ? 1 : -1;
    s32 keepY = oldY > 0.0f ? 1 : -1;
    if (oldX == 0.0f && oldY == 0.0f) {
        particle->velocityX = magnitudeX * (f32)randomX;
        particle->velocityY = magnitudeY * (f32)randomY;
    } else if (oldX == 0.0f || (oldY != 0.0f && randBetween(0, 1) == 0)) {
        particle->velocityX = magnitudeX * (f32)randomX;
        particle->velocityY = magnitudeY * (f32)keepY;
    } else {
        particle->velocityX = magnitudeX * (f32)keepX;
        particle->velocityY = magnitudeY * (f32)randomY;
    }
    if (particle->frame < 0x7ffe) {
        particle->frame++;
    }
}
}
