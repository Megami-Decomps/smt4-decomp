#include "common.h"

struct WindowTransitionProcess {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 result;
    /* 0x10 */ u32 timer;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[0x23];
    /* 0x38 */ u8 window[1];
};

extern "C" {
extern WindowTransitionProcess *g_searchWin;
s32 uiSpriteSlideFromSide(void *window, u32 option);
s32 uiSpriteAdvanceAnimation(void *window, f32 speed);
s32 eventIsSkipping();
}

// Wait for the window to open, complete its interaction, and close.
extern "C" s32 runWinUpdateTransition(void *context)
{
    WindowTransitionProcess *work = g_searchWin;
    switch (work->state) {
    case 0: // No transition requested.
        break;
    case 1:
        if (uiSpriteSlideFromSide(work->window, 0)) {
            work->state = 2;
            work->timer = 0;
        }
        break;
    case 2:
        if (work->result == 3)
            work->state = work->result;
        break;
    case 3:
        if (uiSpriteAdvanceAnimation(work->window, 1)) {
            work->active = 0;
            work->state = 4;
        }
        break;
    case 4:
        break;
    }
    ++work->timer;
    if (eventIsSkipping()) {
        work->active = 0;
        work->state = 4;
    }
    return 0;
}
