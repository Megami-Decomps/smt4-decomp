#include "common.h"
#include "shard/JobWork.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 FUN_002a880c(u32 work, s32 a, s32 b);

/* Script command: on the first frame queues FUN_002a880c on the job work with (9, argument 1); finishes once the command frame reaches argument 1. */
u32 scrCommJobWorkStart9(void)
{
    s32 frames = scrGetArg(1);

    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == frames) {
            return 1;
        }
    } else {
        s32 job = scrGetArg(0);
        s32 mode = 9;
        FUN_002a880c(reinterpret_cast<u32>(jobGetWork(job)), mode, frames);
    }
    return 0;
}

} /* extern "C" */
