#include "common.h"

extern "C" {
struct MessageWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 window;
    /* 0x0A */ u8 unk0A[0x2B];
    /* 0x35 */ u8 closeRequested;
};

extern struct {
    u8 unk0[4];
    MessageWork *work;
} g_messageMain;

void FUN_00165088(MessageWork *work, u8 window);

/* Applies a requested window close and enters the closed state. */
void messageMainApplyClose(void)
{
    MessageWork *work = g_messageMain.work;
    if (work->closeRequested != 0) {
        FUN_00165088(work, work->window);
        work->state = 3;
        work->closeRequested = 0;
    }
}
}
