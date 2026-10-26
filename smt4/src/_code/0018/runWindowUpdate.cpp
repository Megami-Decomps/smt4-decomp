#include "font/SearchWin/RunWin.h"

extern "C" {
extern RunWinWork *g_runWin;
s32 FUN_002b8ee0(void *window, s32 mode);
s32 FUN_002bf818(void *window);
s32 FUN_002c1d5c(void);

/* Advance the run-command window until its animation or input completes it. */
s32 runWindowUpdate(void *)
{
    RunWinWork *work = g_runWin;
    switch (work->state) {
    case 0:
        break;
    case 1:
        if (FUN_002b8ee0(work->ui, 0) != 0) {
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
        if (FUN_002bf818(work->ui) != 0) {
            work->active = 0;
            work->state = 4;
        }
        break;
    case 4:
        break;
    }
    ++work->counter;
    if (FUN_002c1d5c() != 0) {
        work->active = 0;
        work->state = 4;
    }
    return 0;
}
}
