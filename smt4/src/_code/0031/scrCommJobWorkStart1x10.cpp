/* NON_MATCHING: retail keeps the constants 1 and 10 in r5/r4 across the jobGetWork call; built propagates them as immediates (armcc leaves two nops in the slots) */
#include "shard/JobWork.h"

extern "C" {

s32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
s32 FUN_002a880c(u32 work, s32 a, s32 b);

/* Script command: on the first frame queues FUN_002a880c on the job work with (1, 10); finishes once the command frame reaches 10. */
u32 scrCommJobWorkStart1x10(void)
{
    if (scrGetCommandFrame() != 0) {
        if (scrGetCommandFrame() == 10) {
            return 1;
        }
    } else {
        u32 job = scrGetArg(0);
        FUN_002a880c(reinterpret_cast<u32>(jobGetWork(job)), 1, 10);
    }
    return 0;
}

} /* extern "C" */
