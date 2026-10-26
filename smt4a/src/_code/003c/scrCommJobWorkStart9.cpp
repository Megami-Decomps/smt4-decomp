#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
u32 jobGetWork(u32 job);
void bustupSpriteStartTransition(u32 work, u32 command, s32 frames);

static __inline void startJobWorkCommand(u32 job, u32 command, s32 frames)
{
    bustupSpriteStartTransition(jobGetWork(job), command, frames);
}

u32 scrCommJobWorkStart9(void)
{
    s32 frames = scrGetArg(1);
    switch (scrGetCommandFrame()) {
    case 0: {
        u32 job = scrGetArg(0);
        u32 command = 9;
        startJobWorkCommand(job, command, frames);
        break;
    }
    default:
        if (scrGetCommandFrame() == frames) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
