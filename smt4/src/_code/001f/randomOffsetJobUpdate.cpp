/* NON_MATCHING: division temporary uses S1 rather than S3 and final sign branch is not placed after the epilogue; -O2 candidate. */
#include "common.h"

struct RandomOffset {
    f32 x;
    f32 y;
};
struct RandomOffsetWork {
    f32 frame;
    f32 duration;
    f32 fadeStart;
    f32 amplitudeX;
    f32 amplitudeY;
    RandomOffset previous;
    f32 *outputX;
    f32 *outputY;
};

extern "C" {
RandomOffsetWork *jobGetWork(u32 job);
s32 randBetween(s32 minimum, s32 maximum);

s32 randomOffsetJobUpdate(u32 job)
{
    RandomOffsetWork *work = jobGetWork(job);
    f32 amplitudeX = work->amplitudeX;
    f32 amplitudeY = work->amplitudeY;
    if (work->frame >= work->fadeStart && work->duration > work->fadeStart) {
        f32 scale = 1.0f - (work->frame - work->fadeStart) / (work->duration - work->fadeStart);
        amplitudeX *= scale;
        amplitudeY *= scale;
    }
    f32 magnitudeX = (f32)randBetween((s32)(amplitudeX * 0.5f * 100.0f), (s32)(amplitudeX * 100.0f));
    f32 magnitudeY = (f32)randBetween((s32)(amplitudeY * 0.5f * 100.0f), (s32)(amplitudeY * 100.0f));
    magnitudeX *= 0.01f;
    magnitudeY *= 0.01f;
    s32 randomX = randBetween(0, 1) * 2 - 1;
    s32 randomY = randBetween(0, 1) * 2 - 1;
    s32 previousSignX = work->previous.x > 0.0f ? 1 : -1;
    s32 previousSignY = work->previous.y > 0.0f ? 1 : -1;
    if (work->previous.x == 0.0f && work->previous.y == 0.0f) {
        work->previous.x = magnitudeX * randomX;
        work->previous.y = magnitudeY * randomY;
    } else if (work->previous.x != 0.0f && (work->previous.y == 0.0f || randBetween(0, 1))) {
        work->previous.x = magnitudeX * previousSignX;
        work->previous.y = magnitudeY * randomY;
    } else {
        work->previous.x = magnitudeX * randomX;
        work->previous.y = magnitudeY * previousSignY;
    }
    *work->outputX = work->previous.x;
    *work->outputY = work->previous.y;
    work->frame += 1.0f;
    if (work->frame >= work->duration) {
        *work->outputX = 0.0f;
        *work->outputY = 0.0f;
        return -1;
    }
    return 0;
}
}
