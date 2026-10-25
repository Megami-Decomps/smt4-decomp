/* NON_MATCHING: division temporary uses S1 rather than S3 and final sign branch is not placed after the epilogue; -O2 candidate. */
#include "event/bustupEvent/BustupShake.h"
#include "shard/JobWork.h"


extern "C" {
s32 randBetween(s32 minimum, s32 maximum);

s32 randomOffsetJobUpdate(u32 job)
{
    ShakeJobWorkIV *work = reinterpret_cast<ShakeJobWorkIV *>(jobGetWork(job));
    f32 amplitudeX = work->amplitudeX;
    f32 amplitudeY = work->amplitudeY;
    if (work->elapsed >= work->fadeStart && work->duration > work->fadeStart) {
        f32 scale = 1.0f - (work->elapsed - work->fadeStart) / (work->duration - work->fadeStart);
        amplitudeX *= scale;
        amplitudeY *= scale;
    }
    f32 magnitudeX = (f32)randBetween((s32)(amplitudeX * 0.5f * 100.0f), (s32)(amplitudeX * 100.0f));
    f32 magnitudeY = (f32)randBetween((s32)(amplitudeY * 0.5f * 100.0f), (s32)(amplitudeY * 100.0f));
    magnitudeX *= 0.01f;
    magnitudeY *= 0.01f;
    s32 randomX = randBetween(0, 1) * 2 - 1;
    s32 randomY = randBetween(0, 1) * 2 - 1;
    s32 previousSignX = work->offsetX > 0.0f ? 1 : -1;
    s32 previousSignY = work->offsetY > 0.0f ? 1 : -1;
    if (work->offsetX == 0.0f && work->offsetY == 0.0f) {
        work->offsetX = magnitudeX * randomX;
        work->offsetY = magnitudeY * randomY;
    } else if (work->offsetX != 0.0f && (work->offsetY == 0.0f || randBetween(0, 1))) {
        work->offsetX = magnitudeX * previousSignX;
        work->offsetY = magnitudeY * randomY;
    } else {
        work->offsetX = magnitudeX * randomX;
        work->offsetY = magnitudeY * previousSignY;
    }
    *work->outputX = work->offsetX;
    *work->outputY = work->offsetY;
    work->elapsed += 1.0f;
    if (work->elapsed >= work->duration) {
        *work->outputX = 0.0f;
        *work->outputY = 0.0f;
        return -1;
    }
    return 0;
}
}
