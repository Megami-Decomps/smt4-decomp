/* NON_MATCHING: retail places the frames == 0 arm (alpha = 0, step = 0) out of line and divides into s1; armcc predicates the first store of that arm, shares the last one and divides into s0. */
#include "shard/W6_W6Match2_JobBlend.h"

struct AlphaFadeJob {
    /* 0x00 */ JobBlendWork common;
    /* 0x24 */ f32 alpha;
    /* 0x28 */ f32 alphaStep;
};

extern "C" s32 scrGetArg(s32 index);

extern "C" u32 scrCommJobStartAlphaFadeOut(void)
{
    u32 job = scrGetArg(0);
    s32 frames = scrGetArg(1);
    AlphaFadeJob* work = (AlphaFadeJob*)jobGetWork(job);
    if (frames != 0) {
        work->alpha = 1.0f;
        work->alphaStep = -1.0f / (f32)frames;
    } else {
        work->alpha = 0.0f;
        work->alphaStep = 0.0f;
    }
    return 1;
}
