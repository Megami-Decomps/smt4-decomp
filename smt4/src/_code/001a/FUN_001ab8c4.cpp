#include "common.h"

struct JobWork133 {
    u8 unk00[0x24];
    f32 unk24;
    f32 unk28;
};

extern "C" {
s32 scrGetArg(u32 index);
JobWork133 *jobGetWork(u32 job);

/* Script command: clears the +0x24 and +0x28 floats of the work area of the job named by its first argument. */
s32 FUN_001ab8c4(void)
{
    JobWork133 *work = jobGetWork(scrGetArg(0));
    work->unk24 = 0.0f;
    work->unk28 = 0.0f;
    return 1;
}
}
