/* NON_MATCHING: only the reciprocal result uses S0 rather than retail's S1 in VDIV/VSTR; all other default-flag instructions match. */
#include "common.h"

struct JobBlendState {
    u8 unk00[0x0c];
    f32 progress;
    f32 step;
};

extern "C" {
u32 scrGetArg(s32 index);
JobBlendState* jobGetWork(u32 job);

u32 FUN_00211e88(void)
{
    u32 job = scrGetArg(0);
    s32 duration = static_cast<s32>(scrGetArg(1));
    JobBlendState* blend = jobGetWork(job);
    if (blend != NULL) {
        if (duration == 0) {
            blend->progress = 1.0f;
            blend->step = 0.0f;
        } else {
            blend->progress = 0.0f;
            blend->step = 1.0f / static_cast<f32>(duration);
        }
    }
    return 1;
}
}
