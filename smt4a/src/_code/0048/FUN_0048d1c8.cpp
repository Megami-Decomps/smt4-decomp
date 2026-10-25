/* NON_MATCHING: flag clear loads into r1 and hoists mov r0,#0; retail loads into r0 and sets the next state after the store. */
#include "common.h"

struct ButtonHelpTask {
    u8 unk00[4];
    s32 subState; // 0x04
    s32 state;    // 0x08
    u8 unk0c[4];
    u32 flags;    // 0x10
};

extern "C" {

void FUN_0048a378(ButtonHelpTask *task);
u8 buttonHelpIsNotActive(void);

// Task state machine: open the help (0), wait until it has closed (1), then clear the display flag and finish (2).
void FUN_0048d1c8(ButtonHelpTask *task)
{
    s32 state = task->state;

    if (state == 0) {
        FUN_0048a378(task);
        state = 1;
    } else if (state == 1) {
        if (buttonHelpIsNotActive() != 0) {
            task->state = 2;
        }
        return;
    } else if (state == 2) {
        task->flags &= ~0x1000000;
        task->subState = 2;
        state = 0;
    } else {
        return;
    }
    task->state = state;
}

} /* extern "C" */
