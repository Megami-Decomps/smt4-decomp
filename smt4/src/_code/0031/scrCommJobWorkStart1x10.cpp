#include "shard/JobWork.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 bustupSpriteStartTransition(u32 work, s32 a, s32 b);

static inline void startJobWorkCommand(u32 job, s32 first, s32 frames)
{
    bustupSpriteStartTransition(reinterpret_cast<u32>(jobGetWork(job)), first, frames);
}

/* Script command: on the first frame queues bustupSpriteStartTransition on the job work with (1, 10); finishes once the command frame reaches 10. */
u32 scrCommJobWorkStart1x10(void)
{
    switch (scrGetCommandFrame()) {
    case 0: {
        u32 job = scrGetArg(0);
        s32 first = 1;
        s32 frames = 10;
        startJobWorkCommand(job, first, frames);
        break;
    }
    default:
        if (scrGetCommandFrame() == 10) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
