/* NON_MATCHING: retail loads the 1.0f/0.0f constants after jobGetWork into s0/s1; built hoists them into callee-saved s16/s17 and branches around the clamp (duplicating the jobGetWork call) */
#include "common.h"
#include "shard/JobWork.h"
#include "util/CalleeContracts.h"

extern "C" {

struct Vec2 {
    Vec2(f32 px, f32 py) : x(px), y(py) {}
    f32 x, y;
};

struct JobStepWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ Vec2 range;
};

s32 scrGetArg(u32 index);

/* Script command: sets the job's start/step pair from a division count (capped at 4 when FUN_00203d74 is set). */
u32 FUN_002e52f8(void)
{
    u32 job = scrGetArg(0);
    s32 divisions = scrGetArg(1);

    if (FUN_00203d74() != 0 && divisions > 4) {
        divisions = 4;
    }
    JobStepWork *work = (JobStepWork *)jobGetWork(job);
    if (divisions == 0) {
        work->range = Vec2(1.0f, 0.0f);
    } else {
        work->range.x = 0.0f;
        work->range.y = 1.0f / divisions;
    }
    return 1;
}

} /* extern "C" */
