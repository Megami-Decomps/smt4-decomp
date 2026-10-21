#include "common.h"

extern "C" {

typedef struct MessageWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 window;
    /* 0x0A */ u8 unk0A[0x2B];
    /* 0x35 */ u8 closeRequested;
} MessageWork;

extern struct {
    u8 unk0[4];
    MessageWork *work;
} g_messageMain;

extern void titleOverlaySetModeAnimation(MessageWork *work, u8 window);

/* Performs a requested close of the message window: closes it, goes to state 3 and clears the request. */
void messageMainApplyClose(void)
{
    MessageWork *work = g_messageMain.work;

    if (work->closeRequested != 0) {
        titleOverlaySetModeAnimation(work, work->window);
        work->state = 3;
        work->closeRequested = 0;
    }
}

} /* extern "C" */
