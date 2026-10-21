/* NON_MATCHING: compiler rematerializes7/20 after jobGetWork instead of keeping them in r6/r5 across the lookup; optimization-flag candidate. */
#include "shard/W6_W6Match2_JobBlend.h"

struct TransitionJobView {
    JobBlendWork base;
    u8 unk024[0x54];
    u32 control;
};

extern "C" {
u32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);
void FUN_002a880c(JobBlendWork* work, u32 mode, s32 frames);

u32 scrCommStartJobTransitionAndWait(void)
{
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == 20) {
            return 1;
        }
    } else {
        u32 job = scrGetArg(0);
        FUN_002a880c(jobGetWork(job), 7, 20);
        ((TransitionJobView*)jobGetWork(job))->control = 2;
    }
    return 0;
}
}
