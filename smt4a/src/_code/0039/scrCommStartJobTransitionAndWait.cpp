#include "shard/W6_W6Match2_JobBlend.h"
#include "script/ScriptArgs.h"

struct TransitionJobView {
    JobBlendWork base;
    u8 unk024[0x54];
    u32 control;
};

extern "C" {
u32 scrGetCommandFrame(void);
void bustupSpriteStartTransition(JobBlendWork* work, u32 mode, s32 frames);

static inline void startJobBlend(u32 job, u32 mode, s32 frames)
{
    bustupSpriteStartTransition((JobBlendWork *)jobGetWork(job), mode, frames);
}

u32 scrCommStartJobTransitionAndWait(void)
{
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == 20) {
            return 1;
        }
    } else {
        s32 job = scrGetArg(0);
        u32 mode = 7;
        s32 frames = 20;
        startJobBlend(job, mode, frames);
        ((TransitionJobView*)jobGetWork(job))->control = 2;
    }
    return 0;
}
}
