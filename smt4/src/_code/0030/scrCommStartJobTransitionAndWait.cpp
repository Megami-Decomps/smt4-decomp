/* NON_MATCHING: the 7/20 constants stay in saved registers across jobGetWork as retail, but retail holds the job in r4 and the mode in r6 where the build swaps them. */
#include "shard/W6_W6Match2_JobBlend.h"
#include "script/ScriptArgs.h"

struct TransitionJobView {
    JobBlendWork base;
    u8 unk024[0x54];
    u32 control;
};

extern "C" {
u32 scrGetCommandFrame(void);
void FUN_002a880c(JobBlendWork* work, u32 mode, s32 frames);

static inline void startJobBlend(u32 job, u32 mode, s32 frames)
{
    FUN_002a880c((JobBlendWork *)jobGetWork(job), mode, frames);
}

u32 scrCommStartJobTransitionAndWait(void)
{
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == 20) {
            return 1;
        }
    } else {
        u32 job = scrGetArg(0);
        u32 mode = 7;
        s32 frames = 20;
        startJobBlend(job, mode, frames);
        ((TransitionJobView*)jobGetWork(job))->control = 2;
    }
    return 0;
}
}
