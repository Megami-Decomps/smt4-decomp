#include "common.h"

struct PlaybackTaskState {
    u32 job; // 0x00
    u32 unk04;
    s32 state; // 0x08
};

extern "C" {
extern PlaybackTaskState *DAT_00589168;
void FUN_001692d4(void);
void jobStop(u32 job, s32 mode);

// Initialize the task on state zero and stop its owner at terminal state99.
u32 taskRunInitializationState(void)
{
    PlaybackTaskState *task = DAT_00589168;
    switch (task->state) {
    case 0:
        FUN_001692d4();
        ++task->state;
        break;
    case 1:
        break;
    case 99:
        jobStop(task->job, 0);
        break;
    }
    return 0;
}
}
