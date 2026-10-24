#include "common.h"

struct TitleTask {
    u32 job;     // 0x00
    u8 unk04[4];
    s32 step;    // 0x08
};

extern "C" {

extern TitleTask *DAT_0044e2e8; /* 0x44e2e8 */
void asdTMTexTableLoadTmx(s32 a, s32 b);
void FUN_002c58c8(s32 a, s32 b);
void FUN_002bc0e0(void);
void jobStop(u32 job, s32 value);

// Step function of the loading task: step 0 loads the texture table once, step 99 stops the job.
u32 FUN_001251d8(void)
{
    TitleTask *task = DAT_0044e2e8;
    switch (task->step) {
    case 0:
        asdTMTexTableLoadTmx(0, 0);
        FUN_002c58c8(0, 0);
        FUN_002bc0e0();
        task->step++;
        break;
    case 1:
        break;
    case 99:
        jobStop(task->job, 0);
        break;
    }
    return 0;
}

} /* extern "C" */
