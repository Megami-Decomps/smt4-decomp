#include "ui/UiSpriteApi.h"
#include "font/SearchWin/RunWin.h"

extern "C" {
extern RunWinWork *g_runWin;
s32 FUN_002c1d5c(void);

/* Advance the run-command window until its animation or input completes it. */
s32 runWindowUpdate(void *)
{
    RunWinWork *work = g_runWin;
    switch (work->state) {
    case 0:
        break;
    case 1:
        if (uiSlidingSpriteAdvance(&work->window, 0) != 0) {
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
        if (uiSpriteAdvanceAnimation(&work->window) != 0) {
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
