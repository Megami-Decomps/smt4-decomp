/* NON_MATCHING: reciprocal division result is allocated to s0 instead of retail s1; all other instructions match. */
#include "shard/JobWork.h"

struct BackgroundFadeWork {
    u8 unk00[0x24];
    f32 progress; // 0x24
    f32 step; // 0x28
};

extern "C" {
s32 scrGetArg(s32 index);

// Configure the job's fade progress and reciprocal frame duration.
u32 scrCommSetBackgroundFadeDuration(void)
{
    u32 job = scrGetArg(0);
    s32 duration = scrGetArg(1);
    BackgroundFadeWork *work = reinterpret_cast<BackgroundFadeWork *>(jobGetWork(job));
    if (duration == 0) {
        work->progress = 1.0f;
        work->step = 0.0f;
    } else {
        work->progress = 0.0f;
        work->step = 1.0f / (f32)duration;
    }
    return 1;
}
}
