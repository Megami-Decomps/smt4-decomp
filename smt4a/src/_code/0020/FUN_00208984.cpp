/* NON_MATCHING: armcc lowers the four-state switch to a comparison chain; retail uses a four-entry jump table. */
#include "font/SearchWin/RunWin.h"

extern "C" {
extern RunWinWork *g_runWin;
s32 FUN_00167458(void *ui, s32 mode);
s32 FUN_00163aa4(void *ui, f32 amount);
s32 FUN_00162ea4(void);
}

/* Advance the escape window's open, wait, and close phases. */
extern "C" s32 FUN_00208984(void)
{
    RunWinWork *work = g_runWin;
    switch ((u32)work->state) {
    case 0:
        /* Idle: only the common frame and cancellation checks run. */
        break;
    case 1:
        if (FUN_00167458(work->ui, 0)) {
            work->state = 2;
            work->counter = 0;
        }
        break;
    case 2:
        if (work->nextState == 3) {
            work->state = work->nextState;
        }
        break;
    case 3:
        if (FUN_00163aa4(work->ui, 1.0f)) {
            work->active = 0;
            work->state = 4;
        }
        break;
    }
    ++work->counter;
    if (FUN_00162ea4()) {
        work->active = 0;
        work->state = 4;
    }
    return 0;
}
