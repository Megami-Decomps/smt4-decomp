/* NON_MATCHING: readable rewrite of the shake job update; the build fuses the old-offset loads into one vldmia, hoists the 0.01f constant and keeps the sign selects in different registers than retail, so the three-way branch layout also differs. */
#include "event/bustupEvent/BustupShake.h"
#include "shard/JobWork.h"


extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);

// Picks a new random shake offset (opposing the old direction while it is moving), publishes it and advances the timer;
// returns -1 once the duration is over and the offset has been cleared.
s32 FUN_002ac078(u32 job)
{
    ShakeJobWork *work = (ShakeJobWork *)jobGetWork(job);
    f32 one = 1.0f;
    f32 amplitudeX = work->amplitudeX;
    f32 amplitudeY = work->amplitudeY;
    if (work->endless == 0) {
        if (work->elapsed >= work->fadeStart && work->fadeStart < work->duration) {
            f32 remaining = one - (work->elapsed - work->fadeStart) / (work->duration - work->fadeStart);
            amplitudeX = amplitudeX * remaining;
            amplitudeY = amplitudeY * remaining;
        }
    }
    f32 rolledX = (f32)FUN_00184964((s32)(amplitudeX * 0.5f * 100.0f), (s32)(amplitudeX * 100.0f));
    f32 rolledY = (f32)FUN_00184964((s32)(amplitudeY * 0.5f * 100.0f), (s32)(amplitudeY * 100.0f));
    f32 magnitudeX = rolledX * 0.01f;
    f32 magnitudeY = rolledY * 0.01f;
    s32 randomX = FUN_00184964(0, 1) * 2 - 1;
    s32 randomY = FUN_00184964(0, 1) * 2 - 1;
    f32 zero = 0.0f;
    s32 keepX = work->offsetX > zero ? 1 : -1;
    s32 keepY = work->offsetY > zero ? 1 : -1;
    if (work->offsetX == zero && work->offsetY == zero) {
        work->offsetX = magnitudeX * (f32)randomX;
        work->offsetY = magnitudeY * (f32)randomY;
    } else if (work->offsetX != zero && (work->offsetY == zero || FUN_00184964(0, 1) != 0)) {
        work->offsetX = magnitudeX * (f32)keepX;
        work->offsetY = magnitudeY * (f32)randomY;
    } else {
        work->offsetX = magnitudeX * (f32)randomX;
        work->offsetY = magnitudeY * (f32)keepY;
    }
    *work->outputX = work->offsetX;
    *work->outputY = work->offsetY;
    if (work->endless == 0) {
        work->elapsed = work->elapsed + one;
        if (work->elapsed >= work->duration) {
            *work->outputX = zero;
            *work->outputY = zero;
            return -1;
        }
    }
    return 0;
}
}
