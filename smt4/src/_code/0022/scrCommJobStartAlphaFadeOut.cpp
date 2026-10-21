/* NON_MATCHING: armcc merges the zero-case step store and selects s0 for division, unlike retail's separate zero block and s1 result. */
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
