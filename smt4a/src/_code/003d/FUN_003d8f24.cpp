/* NON_MATCHING: readable rewrite of the shaking particle update; retail clears the first five words with integer stores before loading the 0.0f constant and keeps different sign/scale values in s17-s20/r5-r8 than the build. */
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
s32 FUN_00184964(s32 minimum, s32 maximum);

// Advances the particle one frame: picks a new random velocity (opposing the old direction when it is moving), fades
// the amplitude out over the last three frames of its life and clears it once the lifetime is over.
void FUN_003d8f24(ShakeParticle *particle)
{
    s32 lifetime = particle->lifetime;
    s32 frame = particle->frame;
    if (lifetime != -1 && lifetime <= frame) {
        if (particle != NULL) {
            particle->amplitudeX = 0.0f;
            particle->amplitudeY = 0.0f;
            particle->velocityX = 0.0f;
            particle->velocityY = 0.0f;
            *reinterpret_cast<u32 *>(&particle->lifetime) = 0;
        }
        return;
    }
    f32 zero = 0.0f;
    if (frame < 0) {
        particle->frame = frame + 1;
        particle->velocityX = zero;
        particle->velocityY = zero;
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
    f32 magnitudeX = (f32)FUN_00184964((s32)(amplitudeX * 0.5f * 100.0f), (s32)(amplitudeX * 100.0f)) * 0.01f;
    f32 magnitudeY = (f32)FUN_00184964((s32)(amplitudeY * 0.5f * 100.0f), (s32)(amplitudeY * 100.0f)) * 0.01f;
    s32 randomX = FUN_00184964(0, 1) * 2 - 1;
    s32 randomY = FUN_00184964(0, 1) * 2 - 1;
    f32 oldX = particle->velocityX;
    f32 oldY = particle->velocityY;
    s32 keepX = oldX > zero ? 1 : -1;
    s32 keepY = oldY > zero ? 1 : -1;
    if (oldX == zero && oldY == zero) {
        particle->velocityX = magnitudeX * (f32)randomX;
        particle->velocityY = magnitudeY * (f32)randomY;
    } else if (oldX != zero && (oldY == zero || FUN_00184964(0, 1) != 0)) {
        particle->velocityX = magnitudeX * (f32)keepX;
        particle->velocityY = magnitudeY * (f32)randomY;
    } else {
        particle->velocityX = magnitudeX * (f32)randomX;
        particle->velocityY = magnitudeY * (f32)keepY;
    }
    if (particle->frame < 0x7ffe) {
        particle->frame++;
    }
}
}
